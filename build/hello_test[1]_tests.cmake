add_test([=[Constructor.InitializeProperly]=]  [==[/Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build/hello_test]==] [==[--gtest_filter=Constructor.InitializeProperly]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Constructor.InitializeProperly]=]  PROPERTIES WORKING_DIRECTORY [==[/Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[Scan.StoreItem]=]  [==[/Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build/hello_test]==] [==[--gtest_filter=Scan.StoreItem]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Scan.StoreItem]=]  PROPERTIES WORKING_DIRECTORY [==[/Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[Total.ReturnTotal]=]  [==[/Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build/hello_test]==] [==[--gtest_filter=Total.ReturnTotal]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Total.ReturnTotal]=]  PROPERTIES WORKING_DIRECTORY [==[/Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  hello_test_TESTS Constructor.InitializeProperly Scan.StoreItem Total.ReturnTotal)
