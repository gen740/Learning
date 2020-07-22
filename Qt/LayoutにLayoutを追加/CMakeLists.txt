cmake_minimum_required(VERSION 3.10)
list(APPEND CMAKE_PREFIX_PATH "/usr/local/Cellar/qt/5.15.0")
project(first_pro CXX)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(main main.cpp)

target_link_libraries(main Qt5::Widgets)
