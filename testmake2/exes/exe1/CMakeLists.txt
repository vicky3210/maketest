# project details
# ---------------------------
project(exe1)

# add your headers and source files here
# ---------------------------
set (${PROJECT_NAME}_headers main1.h)
set (${PROJECT_NAME}_sources main1.cpp)

# create the library
# ---------------------------
add_executable (${PROJECT_NAME} ${${PROJECT_NAME}_headers} ${${PROJECT_NAME}_sources})


# linker
# ---------------------------
target_link_libraries(${PROJECT_NAME} dll1)

# configure install
install(TARGETS ${PROJECT_NAME}
                RUNTIME DESTINATION bin
                LIBRARY DESTINATION lib
                ARCHIVE DESTINATION lib/static)