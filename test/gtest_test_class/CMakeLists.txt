CMAKE_MINIMUM_REQUIRED(VERSION 3.8)

PROJECT(test)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(main main.cpp my_string.cpp)
TARGET_LINK_LIBRARIES(main libgtest.a)
# libgtest_main.a