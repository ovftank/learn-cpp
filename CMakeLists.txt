cmake_minimum_required(VERSION 4.1.1)
project(learn-cpp VERSION 0.1.0 LANGUAGES C CXX)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

add_executable(learn-cpp main.cpp)

if (MSVC)
    target_compile_options(learn-cpp PRIVATE
        /std:c++20
        /nologo
        /Zc:__cplusplus
        /W4
    )
endif()

include(CPack)
