cmake_minimum_required(VERSION 3.25)

project(cash_register VERSION 1.0)

add_executable(${PROJECT_NAME} src/cash_register.cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


enable_testing()

add_executable(CheckoutTest test/checkout_test.cc)
add_executable(ItemTest test/item_test.cc)
add_executable(DiscountTest test/discount_test.cc)

target_link_libraries(CheckoutTest GTest::gtest_main)
target_link_libraries(ItemTest GTest::gtest_main)
target_link_libraries(DiscountTest GTest::gtest_main)


include(GoogleTest)
gtest_discover_tests(CheckoutTest)
gtest_discover_tests(ItemTest)
gtest_discover_tests(DiscountTest)
