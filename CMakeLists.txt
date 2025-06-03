cmake_minimum_required(VERSION 3.16)

project(untitled10 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick QuickControls2)

qt_standard_project_setup(REQUIRES 6.8)

# Добавляем наши исходные файлы
set(SOURCES
    main.cpp
    measurementdata.h
    fileparser.cpp
    dataprocessor.cpp
)

qt_add_executable(appuntitled10
    ${SOURCES}
)

qt_add_qml_module(appuntitled10
    URI untitled10
    VERSION 1.0
    QML_FILES
        Main.qml
        SOURCES
)

target_link_libraries(appuntitled10
    PRIVATE Qt6::Quick Qt6::QuickControls2
)

include(GNUInstallDirs)
install(TARGETS appuntitled10
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
