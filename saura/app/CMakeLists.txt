add_library(app_lib STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include/saura/app/app.cpp
)

target_include_directories(app_lib
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
