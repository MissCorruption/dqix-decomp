cmake_minimum_required(VERSION 3.20)
project(DQIX_Navigation LANGUAGES C CXX)

file(GLOB_RECURSE NAV_FILES CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h"
)

add_library(dqix_navigation OBJECT EXCLUDE_FROM_ALL ${NAV_FILES})

target_include_directories(dqix_navigation PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

target_compile_definitions(dqix_navigation PRIVATE
        jpn DQIX_IDE=1
)

set_target_properties(dqix_navigation PROPERTIES
        C_STANDARD 99
        CXX_STANDARD 11
)

if(MSVC)
    target_compile_options(dqix_navigation PRIVATE
            "/FI${CMAKE_CURRENT_SOURCE_DIR}/tools/ide/mwcc_compat.h"
            "/FI${CMAKE_CURRENT_SOURCE_DIR}/include/globaldefs.h"
    )
else()
    target_compile_options(dqix_navigation PRIVATE
            "SHELL:-include \"${CMAKE_CURRENT_SOURCE_DIR}/tools/ide/mwcc_compat.h\""
    )
endif()
