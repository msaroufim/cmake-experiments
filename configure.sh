# D means option
# and option() in external/glfw/CMakeList.txt option can be disabled
cmake -DGLFW_BUILD_DOCS=OFF -DUSE_ADDER=ON -S . -B out/build
