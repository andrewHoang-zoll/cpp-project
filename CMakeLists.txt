cmake_minimum_required(VERSION 3.10)
project(MathTest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Fetch Google Test
include(FetchContent)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.zip
)
FetchContent_MakeAvailable(googletest)

# Add the math library (header-only in this case)
add_library(math INTERFACE)
target_include_directories(math INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

# Enable testing
enable_testing()

# Add test executable
add_executable(math_test tests/math_test.cpp)
target_link_libraries(math_test gtest math)

# Register tests
add_test(NAME MathTests COMMAND math_test)
