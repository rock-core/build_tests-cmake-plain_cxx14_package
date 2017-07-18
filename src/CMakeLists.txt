rock_library(plain_cxx11_package
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp Data.hpp)

rock_executable(plain_cxx11_package_bin Main.cpp
    DEPS plain_cxx11_package)

