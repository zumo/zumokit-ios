//
// Copyright 2014 Dropbox, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include <Foundation/Foundation.h>
#include "DJIError.h"
#include "ZKError.h"
#include <exception>
#include "exceptions.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

using namespace zumo;

namespace djinni {

void throwUnimplemented(const char * /*ctx*/, NSString * message) {
    [NSException raise:NSInternalInconsistencyException format:@"Unimplemented: %@", message];
    __builtin_unreachable();
}

void throwNSExceptionFromCurrent(const char * /*ctx*/) {
    try {
        throw;
    } catch (const ZumoKitException & e) {
        NSString *zumoKitErrorType = [NSString stringWithCString:e.get_type() encoding:NSUTF8StringEncoding];
        NSString *zumoKitErrorCode = [NSString stringWithCString:e.get_code() encoding:NSUTF8StringEncoding];
        NSString *message = [NSString stringWithCString:e.what() encoding:NSUTF8StringEncoding];
        
        [[NSError errorFromZumoKitException:zumoKitErrorType code:zumoKitErrorCode message:message] throw];
        __builtin_unreachable();
    } catch (const std::exception & e) {
        NSString *message = [NSString stringWithCString:e.what() encoding:NSUTF8StringEncoding];
        
        [[NSError errorFromZumoKitException:nil code:nil message:message] throw];
        __builtin_unreachable();
    }
}

} // namespace djinni
