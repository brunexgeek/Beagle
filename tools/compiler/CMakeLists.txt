cmake_minimum_required(VERSION 2.6)

include_directories(
	"../../modules/parser/include")

file(GLOB COMPILER_SOURCES
	"source/*.cc")

add_executable(tool_compiler ${COMPILER_SOURCES})
target_link_libraries(tool_compiler module_parser)
set_target_properties(tool_compiler PROPERTIES
    OUTPUT_NAME "compiler"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}" )
