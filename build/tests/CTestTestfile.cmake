# CMake generated Testfile for 
# Source directory: /Users/macbook/PROJECTS/MathLib/simple_math_lib/tests
# Build directory: /Users/macbook/PROJECTS/MathLib/simple_math_lib/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(math_library_gtests "MathLibUnitTests")
set_tests_properties(math_library_gtests PROPERTIES  _BACKTRACE_TRIPLES "/Users/macbook/PROJECTS/MathLib/simple_math_lib/tests/CMakeLists.txt;20;add_test;/Users/macbook/PROJECTS/MathLib/simple_math_lib/tests/CMakeLists.txt;0;")
subdirs("../_deps/googletest-build")
