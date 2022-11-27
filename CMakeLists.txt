CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(MiniGameTestPortion)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(minigametestExec
  src/MiniGame.cpp
  test/MiniGameTest.cpp
)

TARGET_LINK_LIBRARIES(minigametestExec gtest)
TARGET_COMPILE_DEFINITIONS(minigametestExec PRIVATE gtest_disable_pthreads=ON)

include_directories(
  ${CMAKE_SOURCE_DIR}/test/googletest/include/
  ${CMAKE_SOURCE_DIR}/test/googlemock/include/
)