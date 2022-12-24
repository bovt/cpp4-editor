cmake_minimum_required(VERSION 3.12.4)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VESRION 0.0.${PATCH_VERSION})

project(hw4_editor VERSION ${PROJECT_VESRION})

set(CMAKE_CXX_STANDARD 17)

set(SRC_PATH "src/")
set(CMAKE_EXE_LINKER_FLAGS " -static")
include_directories("application/")
include_directories("document/")
include_directories("render/")
include_directories("shape/")
include_directories("utils/")

add_executable(editor main.cpp)

install(TARGETS editor RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
set(CPACK_PACKAGE_CONTACT example@example.com)
include(CPack)
