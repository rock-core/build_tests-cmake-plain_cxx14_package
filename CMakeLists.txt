# CMakeLists.txt has to be located in the project folder and cmake has to be
# executed from 'project/build' with 'cmake ../'.
cmake_minimum_required(VERSION 3.1)
project(plain_cxx14_package VERSION 0.1 DESCRIPTION "test project that forces at least c++14")
find_package(Rock)
rock_init()
set(CMAKE_CXX_STANDARD 14)
rock_standard_layout()
