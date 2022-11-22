add_executable(basic_test basic.cpp)

find_package(GTest CONFIG REQUIRED)

target_link_libraries(
  basic_test
  PRIVATE
  GTest::gtest GTest::gtest_main
  args::args
)

include(GoogleTest)
gtest_discover_tests(basic_test)
