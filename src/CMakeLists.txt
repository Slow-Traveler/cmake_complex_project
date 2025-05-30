project(main)

add_subdirectory(peopleName)
add_subdirectory(sayHello)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${SayHello_DIR})
target_link_libraries(${PROJECT_NAME} PUBLIC sayHello)