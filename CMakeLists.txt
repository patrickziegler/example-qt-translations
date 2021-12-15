cmake_minimum_required(VERSION 3.12)

project(hello VERSION 0.1)

find_package(Qt5 REQUIRED COMPONENTS Core LinguistTools)

#set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

qt5_create_translation(QM_FILES src/ lang/lang_de.ts OPTIONS "-noobsolete")

set(RESOURCES_FILE resources.qrc)

configure_file("${RESOURCES_FILE}.in" "${CMAKE_BINARY_DIR}/${RESOURCES_FILE}")

set(TARGET_NAME hello)

add_executable(${TARGET_NAME} "src/main.cpp" ${QM_FILES} "${CMAKE_BINARY_DIR}/${RESOURCES_FILE}")

target_link_libraries(${TARGET_NAME} PUBLIC Qt5::Core)
