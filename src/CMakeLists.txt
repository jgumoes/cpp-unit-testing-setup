add_library(helloworld helloworld.cpp)



# target_include_directories(helloworld PUBLIC include)
target_include_directories(helloworld PUBLIC
  "${PROJECT_BINARY_DIR}/src"
  "${PROJECT_SOURCE_DIR}/src"
  )