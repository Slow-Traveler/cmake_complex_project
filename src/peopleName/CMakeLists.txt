project(peopleName)
add_library(${PROJECT_NAME}
SHARED
peopleName.cpp
)
target_include_directories(${PROJECT_NAME} PUBLIC PeopleName_DIR)
