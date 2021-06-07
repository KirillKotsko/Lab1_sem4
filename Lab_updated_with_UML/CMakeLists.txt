cmake_minimum_required(VERSION 3.5)

project(Lab_updated_with_UML LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check http://doc.qt.io/qt-5/deployment-android.html for more information.
# They need to be set before the find_package(Qt5 ...) call.

#if(ANDROID)
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#    if (ANDROID_ABI STREQUAL "armeabi-v7a")
#        set(ANDROID_EXTRA_LIBS
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libcrypto.so
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libssl.so)
#    endif()
#endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

if(ANDROID)
  add_library(Lab_updated_with_UML SHARED
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    Date.h
    DateWithTime.h
    DifferenceBetweenDateWithTime.h
    Time_.h
    TimeIsNow.h
    TimeManagment.h
    WorkWithDate.h
    DateWithTime.cpp
    DifferenceBetweenDateWithTime.cpp
    TimeIsNow.cpp
    TimeManagment.cpp
    unit_test_framework.h
    Test.h
    Test_Date.cpp
    firstdateform.cpp
    firstdateform.h
    firstdateform.ui
    showdiffform.cpp
    showdiffform.h
    showdiffform.ui
  )
else()
  add_executable(Lab_updated_with_UML
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    Date.h
    DateWithTime.h
    DifferenceBetweenDateWithTime.h
    Time_.h
    TimeIsNow.h
    TimeManagment.h
    WorkWithDate.h
    DateWithTime.cpp
    DifferenceBetweenDateWithTime.cpp
    TimeIsNow.cpp
    TimeManagment.cpp
    unit_test_framework.h
    Test.h
    Test_Date.cpp
    firstdateform.cpp
    firstdateform.h
    firstdateform.ui
    showdiffform.cpp
    showdiffform.h
    showdiffform.ui

  )
endif()

target_link_libraries(Lab_updated_with_UML PRIVATE Qt5::Widgets)
