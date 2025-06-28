add_executable(app
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

target_include_directories(app
    PRIVATE
        ${CMAKE_SOURCE_DIR}/saura/app/include
)

target_link_libraries(app
    PRIVATE app_lib
)
