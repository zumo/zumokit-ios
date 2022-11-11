# ZumoKit iOS SDK

ZumoKit is a state of the art wallet architecture underpinning our flagship product [Zumo](https://www.zumo.money/) that provides secure transfer and exchange of fiat and cryptocurrency funds.

## Docs

Refer to ZumoKit SDK developer [documentation](https://developers.zumo.money/docs/) and [reference](https://zumo.github.io/zumokit-ios/) for usage details.

## Requirements

- Install the following:
  - [Git LFS client](https://git-lfs.github.com/),
  - [Xcode 11.0](https://developer.apple.com/xcode/) or later,
  - [CocoaPods 1.8.4](https://cocoapods.org) or later.
- Make sure that your app meets the following requirements:
  - Your project must target iOS 10 or later.

## Installation

ZumoKit is available through [CocoaPods](https://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod 'ZumoKit', :git => 'https://github.com/zumo/zumokit-ios.git', :tag => '4.4.0'
```

## Example

The [example project](https://github.com/zumo/zumokit-ios/tree/master/Example) demonstrates the expected user flow, including authentication process, wallet creation and transaction submission. Ask your [account manager](mailto:support@zumo.money) to provide you with necessary credentials.

To run the example project, clone the repo, and run `pod install` from the Example directory first.
