# CMakeList.txt: проект CMake для LinearNurikabeSolverWeb; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project("SolverWeb")

# Добавьте источник в исполняемый файл этого проекта.
add_executable ("${PROJECT_NAME}" "src/LinearNurikabeSolverWeb.cpp" "inc/LinearNurikabeSolverWeb.h")

include_directories("inc;")

if(EMSCRIPTEN)
	set(CMAKE_EXECUTABLE_SUFFIX ".html")
endif()

set(CMAKE_BINARY_DIR "${CMAKE_HOME_DIRECTORY}/bin/${CMAKE_BUILD_TYPE}/${PROJECT_NAME}/")
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
