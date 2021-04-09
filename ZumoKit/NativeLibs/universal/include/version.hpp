#pragma once

#include <string>

// These variables are autogenerated and compiled
// into the library by the version.cmake script
extern "C" {
extern const char *GIT_TAG;
extern const char *GIT_REV;
extern const char *GIT_BRANCH;
}

inline const std::string libzumocore_git_version(void) { return GIT_TAG; }

inline const std::string libzumocore_git_revision(void) { return GIT_REV; }

inline const std::string libzumocore_git_branch(void) { return GIT_BRANCH; }

inline const std::string libzumocore_application_version(void)
{
    // override for development versions, which don't have semantic version
    return libzumocore_git_version().empty() ? "9999.0.0" : libzumocore_git_version();
}