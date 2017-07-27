#ifndef PLAIN_CXX11_PACKAGE_DATA_HPP
#define PLAIN_CXX11_PACKAGE_DATA_HPP

#if __cplusplus!=201103L
#error "no compiling under C++11"
#endif

namespace plain_cxx11_package
{
    struct Data
    {
        int value;

        Data(Data&&)
        {
            auto value = 10;
        }
    };
}

#endif
