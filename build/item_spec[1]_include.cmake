if(EXISTS "/Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build/item_spec[1]_tests.cmake")
  include("/Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build/item_spec[1]_tests.cmake")
else()
  add_test(item_spec_NOT_BUILT item_spec_NOT_BUILT)
endif()