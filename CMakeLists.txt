project (vec3.c)

file(GLOB CMAKE_INCLUDES "node_modules/*/CMakeLists.txt")
include(${CMAKE_INCLUDES})

include_directories(${CMAKE_CURRENT_LIST_DIR}/include)
