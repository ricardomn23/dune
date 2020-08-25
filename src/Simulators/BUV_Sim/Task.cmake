macro(task_files_hook)
  file(GLOB BUV_Sim_SOURCES ${TASK_DIR}/BUVSimLib/src/*.cpp)
  file(GLOB BUV_Sim_HEADERS ${TASK_DIR}/BUVSimLib/include/BUVSim/*.hpp)

  set(TASK_SOURCES ${BUV_Sim_SOURCES} ${TASK_DIR}/Task.cpp)
  set(TASK_HEADERS ${BUV_Sim_HEADERS})

  include_directories(${TASK_DIR})
endmacro(task_files_hook)
