# Build example
add_executable(example
  window.cpp
  glew.c
  example.cpp
  vec2.cpp
  mat2.cpp
  circle.cpp
  rectangle.cpp
  color.cpp
  )
  
target_link_libraries(example
  glfw
  ${GLFW_LIBRARIES}
  m)
add_dependencies(example glfw ${COPY_BINARY})

# Build tests
add_executable(tests
  vec2.cpp
  mat2.cpp
  circle.cpp
  rectangle.cpp
  color.cpp
  window.cpp
  glew.c
 	tests.cpp)
target_link_libraries(tests
  glfw
  ${GLFW_LIBRARIES})



add_executable(uhr
  window.cpp
  glew.c
  uhr.cpp
  vec2.cpp
  mat2.cpp
  circle.cpp
  color.cpp
  rectangle.cpp
  )
  
target_link_libraries(uhr
  glfw
  ${GLFW_LIBRARIES}
  m)
add_dependencies(uhr glfw ${COPY_BINARY})
