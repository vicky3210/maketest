# project details
# ----------------------
project(lib1)

# add your headers and source files here
# ----------------------
set (${PROJECT_NAME}_headers ./lib1.h)
set (${PROJECT_NAME}_sources lib1.cpp)

# create Binaries
# ----------------------
add_library(${PROJECT_NAME} STATIC ${${PROJECT_NAME}_headers} ${${PROJECT_NAME}_sources})
install(TARGETS ${PROJECT_NAME}
                RUNTIME DESTINATION bin
                LIBRARY DESTINATION lib
                ARCHIVE DESTINATION lib/static)