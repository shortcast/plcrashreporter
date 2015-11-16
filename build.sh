xcodebuild -configuration Release -target 'CrashReporter-iOS'
lipo -output libCrashReporter.a -create build/Release-iphonesimulator/libCrashReporter-iphonesimulator.a build/Release-iphoneos/libCrashReporter-iphoneos.a 
