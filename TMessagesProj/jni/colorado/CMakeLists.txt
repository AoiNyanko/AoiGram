add_library(colorado STATIC
        colorado/cert.cpp
        colorado/colorado.cpp
        colorado/utils.cpp
)
if (NOT DEFINED COLORADO_PACKAGE_NAME)
    set(COLORADO_PACKAGE_NAME "tw.nekomimi.nekogram")
endif ()
configure_file(
        ${CMAKE_CURRENT_LIST_DIR}/colorado_package_name.h.in
        ${CMAKE_CURRENT_BINARY_DIR}/generated/colorado_package_name.h
        @ONLY
)
target_include_directories(colorado PUBLIC colorado/ ${CMAKE_CURRENT_BINARY_DIR}/generated)
target_compile_options(colorado PUBLIC -Oz -fvisibility=hidden)
target_include_directories(colorado PUBLIC integrity)
