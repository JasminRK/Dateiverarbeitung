cmake_minimum_required(VERSION 3.14)

project(Dateiverarbeitung LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

add_executable(Dateiverarbeitung
  main.cpp travelagency.cpp travelagency.h booking.cpp booking.h rentalcarreservation.cpp rentalcarreservation.h hotelbooking.cpp hotelbooking.h flightbooking.cpp flightbooking.h
)
target_link_libraries(Dateiverarbeitung Qt${QT_VERSION_MAJOR}::Core)
