#  SwiftOIIO


## Requirements
- XCode 11+
- macOS 10.15+
- [conan](https://docs.conan.io/en/latest/installation.html)


## Status
For now this is just a crude wrapper around Video Village's Objc Library, [OIIOCocoa](https://github.com/videovillage/oiiococoa)


## Install
To manage the large amount of deps, while still building from source I use Conan.
Just install it and run the following.
This will generate a `conanbuildinfo.xcconfig` file (a list of header/libs path), just load it in XCode and set it as your Release and Debug configuration in `build settings`

```bash

# clone the repo
git clone "xxx"
cd "xxx"

# install and build deps
conan install .
```




