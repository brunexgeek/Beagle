cmake_minimum_required(VERSION 2.6)

include_directories(
	"../../modules/loader/include")

file(GLOB COMPILER_SOURCES
	"source/*.cc")

add_executable(tool_dump ${COMPILER_SOURCES})
target_link_libraries(tool_dump module_loader "dl")
set_target_properties(tool_dump PROPERTIES
    OUTPUT_NAME "beagle-dump"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}" )
