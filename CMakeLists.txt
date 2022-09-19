cmake_minimum_required(VERSION 3.0.0)

project(browser VERSION 0.0.1)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

include_directories(browser)
file(GLOB SOURCES
    src/*.h
    src/*.cpp
)

qt_add_executable(browser ${SOURCES}
    MANUAL_FINALIZATION
)
target_link_libraries(browser PRIVATE Qt::Widgets)

qt_finalize_executable(browser)
