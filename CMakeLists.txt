cmake_minimum_required(VERSION 3.10)

project(SimpleScheduler)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_PREFIX_PATH C:/Qt/6.3.2/msvc2019_64/lib/cmake)
find_package(Qt6 COMPONENTS Core Widgets REQUIRED)

add_executable(main src/main.cpp)

target_link_libraries(main PUBLIC Qt6::Core Qt6::Widgets)

