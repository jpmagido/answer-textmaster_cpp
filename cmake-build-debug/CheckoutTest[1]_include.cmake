if(EXISTS "/Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/cmake-build-debug/CheckoutTest[1]_tests.cmake")
  include("/Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/cmake-build-debug/CheckoutTest[1]_tests.cmake")
else()
  add_test(CheckoutTest_NOT_BUILT CheckoutTest_NOT_BUILT)
endif()