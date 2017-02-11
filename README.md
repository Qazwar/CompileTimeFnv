# CompileTimeFnv
This is a compile-time FNV-1a Library in C++11.

* one header-file only (fnv.h)
* compile-time calculation of string literal or byte array FNV-1a hash
* supported for char pointer and std::string in the same interface (runtime only)

## Usage
This library usage is very simple.

    uint32_t fnv32_value = fnv32("aaa");
    uint64_t fnv64_value = fnv64("aaa");

If you need any more information, please check the main.cpp file.

## License
CompileTimeFnv is licensed under the [MIT License](https://github.com/yhase7/CompileTimeFnv/blob/master/LICENSE).
