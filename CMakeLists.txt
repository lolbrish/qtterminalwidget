project(qtterm)
cmake_minimum_required(VERSION 2.8)
find_package(Qt4 REQUIRED)
find_package(PkgConfig)

include(${QT_USE_FILE})

# QtTerm
SET(CMAKE_BUILD_TYPE Debug)
set(qtterm_sources
  src/Main.cpp
  src/QTerminalWidget.cpp)

set(qtterm_moc_classes
  src/QTerminalWidget.h)

QT_WRAP_CPP(qtterm qtterm_moc_files ${qtterm_moc_classes})

add_executable(qtterm ${qtterm_sources} ${qtterm_moc_files})
target_link_libraries(qtterm ${QT_LIBRARIES})
