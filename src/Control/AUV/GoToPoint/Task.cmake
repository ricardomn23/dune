macro(task_files_hook)
  file(GLOB BUV_Control_SOURCES ${TASK_DIR}/../BUVControlLib/src/*.cpp)
  file(GLOB BUV_Control_HEADERS ${TASK_DIR}/../BUVControlLib/include/BUVControl/*.hpp)

  set(TASK_SOURCES ${BUV_Control_SOURCES} ${TASK_DIR}/Task.cpp)
  set(TASK_HEADERS ${BUV_Control_HEADERS})

  include_directories(${TASK_DIR})
endmacro(task_files_hook)
