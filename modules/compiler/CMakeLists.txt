
include_directories(
	"include"
	"../loader/include")

add_custom_target(parser_bison COMMAND
	bison --defines=${CMAKE_CURRENT_SOURCE_DIR}/source/beagle.y.hh
	    -o ${CMAKE_CURRENT_SOURCE_DIR}/source/beagle.y.cc
	    -vt ${CMAKE_CURRENT_SOURCE_DIR}/source/beagle.y)
add_custom_target(parser_flex COMMAND flex
		-v
		-o ${CMAKE_CURRENT_SOURCE_DIR}/source/beagle.l.cc
		--header-file=${CMAKE_CURRENT_SOURCE_DIR}/source/beagle.l.hh
		${CMAKE_CURRENT_SOURCE_DIR}/source/beagle.l)


file(GLOB PARSER_SOURCES
	"source/*.cc")

add_library(module_parser STATIC ${PARSER_SOURCES})
set_target_properties(module_parser PROPERTIES
    OUTPUT_NAME "beagle.compiler"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
    PREFIX "" )
