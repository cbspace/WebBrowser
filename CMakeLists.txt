cmake_minimum_required(VERSION 3.0.0)

project(browser VERSION 0.0.1)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

include_directories(browser)
set(SOURCES
    src/Browser.cpp
    src/BrowserView.cpp
    src/BrowserView.h
    src/BrowserWindow.cpp
    src/BrowserWindow.h
    src/WebParser.cpp
    src/WebParser.h
    src/LibCB/Tree.h
    src/LibCB/Tree.cpp
    src/LibCB/TreeNode.h
    src/LibCB/TreeNode.cpp
    src/LibCB/web/WebElement.h
    src/LibCB/web/WebElement.cpp
)

qt_add_executable(browser ${SOURCES}
    MANUAL_FINALIZATION
)
target_link_libraries(browser PRIVATE Qt::Widgets)

qt_finalize_executable(browser)
