project(sayHello)
add_library(${PROJECT_NAME}
SHARED
sayHello.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC ${PeopleName_DIR})
target_link_libraries(${PROJECT_NAME} PUBLIC  peopleName)