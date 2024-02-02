## What's the issue?

`pod install --project-directory=example/ios`

fails with:

```
[!] Invalid `Podfile` file: undefined method `[]' for nil:NilClass.

 #  from /Users/burakguner/kod/pods-test/example/ios/Podfile:29
 #  -------------------------------------------
 #  target 'PodsTestExample' do
 >    config = use_native_modules!
 #
 #  -------------------------------------------
```
