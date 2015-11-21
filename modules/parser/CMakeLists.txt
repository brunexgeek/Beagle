project(parser)

cmake_minimum_required(VERSION 2.6)

add_custom_target(parser_bison COMMAND
	bison --defines=${CMAKE_CURRENT_SOURCE_DIR}/source/parser.hh
	    -o ${CMAKE_CURRENT_SOURCE_DIR}/source/parser.cpp
	    -vt ${CMAKE_CURRENT_SOURCE_DIR}/source/beagle.y)
add_custom_target(parser_flex COMMAND flex
		-v
		-o ${CMAKE_CURRENT_SOURCE_DIR}/source/lexer.cpp
		--header-file=${CMAKE_CURRENT_SOURCE_DIR}/source/scanner.hh
		${CMAKE_CURRENT_SOURCE_DIR}/source/beagle.l)


file(GLOB PARSER_SOURCES
	"source/*.cpp")

add_executable(module_parser ${PARSER_SOURCES})
set_target_properties(module_parser PROPERTIES
    OUTPUT_NAME "compiler"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}" )
