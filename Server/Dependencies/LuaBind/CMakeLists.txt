CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(LuaBind)

AUX_SOURCE_DIRECTORY(. SRC)
AUX_SOURCE_DIRECTORY(./lpeg SRC)
AUX_SOURCE_DIRECTORY(./lua5.3 SRC)
AUX_SOURCE_DIRECTORY(./luacjson SRC)
AUX_SOURCE_DIRECTORY(./luafilesystem SRC)
AUX_SOURCE_DIRECTORY(./luasocket SRC)
AUX_SOURCE_DIRECTORY(./luasql SRC)
AUX_SOURCE_DIRECTORY(./pbc SRC)
AUX_SOURCE_DIRECTORY(./luasnapshot SRC)

if (CMAKE_BUILD_TYPE STREQUAL "Release")
	SET(LIBRARY_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/Product/Lib/Release")
elseif(CMAKE_BUILD_TYPE STREQUAL "Debug")
	SET(LIBRARY_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/Product/Lib/Debug")
elseif (CMAKE_BUILD_TYPE STREQUAL "DynamicRelease")
	SET(LIBRARY_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/Product/run/Dynamic_Release")
elseif(CMAKE_BUILD_TYPE STREQUAL "DynamicDebug")
	SET(LIBRARY_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/Product/run/Dynamic_Debug")
endif()


ADD_LIBRARY( ${PROJECT_NAME} SHARED ${SRC} )
