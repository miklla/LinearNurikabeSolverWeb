# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("SolverWeb")

if(EMSCRIPTEN)
	set(CMAKE_BUILD_TYPE "Emscripten")
endif()

# Включите подпроекты.
add_subdirectory ("projects/LinearNurikabeSolverWeb")
