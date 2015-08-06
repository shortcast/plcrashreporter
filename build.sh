xcodebuild -configuration Release -target 'Disk Image' PLCRASHREPORTER_PREFIX=Testfire
lipo -output libCrashReporter.a -create build/Release-iphoneos/libCrashReporter-iphoneos.a  build/Release-iphonesimulator/libCrashReporter-iphonesimulator.a
