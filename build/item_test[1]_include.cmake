if(EXISTS "/Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build/item_test[1]_tests.cmake")
  include("/Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build/item_test[1]_tests.cmake")
else()
  add_test(item_test_NOT_BUILT item_test_NOT_BUILT)
endif()
