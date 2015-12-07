
include_directories(
	"include")

file(GLOB PARSER_SOURCES
	"source/*.cc")

add_library(module_loader STATIC ${PARSER_SOURCES})
set_target_properties(module_loader PROPERTIES
    OUTPUT_NAME "beagle.loader"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
    PREFIX "" )
