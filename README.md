# TESTS
- Build  
  $ `cmake -S . -B build`  
  $ `cmake --build build`
- Run Test  
  $ `cd build && ctest --output-on-failure && cd ..`  
- Build + Run  
- $ `cmake --build build && cd build && ctest --output-on-failure && cd ..`

