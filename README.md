Going through https://www.youtube.com/watch?v=ED-WUk440qc


## Repro
To repro, install `cmake` then run the below

```
git clone https://github.com/msaroufim/cmake-experiments
cd cmake-experiments
git submodule update --init --recursive
./configure.sh
./build.sh
./run.sh
```


## Covered material
* Getting version number in your code
* Conditional dependencies using `option`
* Git submodules
* Building C libraries and linking them
* Install libraries and install them from anywhere using `make install`

Stuff for the future
* Make OS agnostic builds using `CPack`
* `find_library` which gives you errors before link time


## Studying a real CMakeList.txt file

https://github.com/pytorch/multipy/blob/main/multipy/runtime/CMakeLists.txt

Give a minimum version, project is called `project(MultipyRuntime)`

Sets ABI (Application Binary Interface) `set(ABI_VALUE)`

Flags are aggregated under `CMAKE_CXX_FLAGS` to make definitions shorter

`add_definitions` sets arguments to the C compiler

`get_filename_component` get a specific part of a full path example the directory

`add_subdirectory` to read specific libraries like `interpreter` or `pybind11`

`include` load and run a cmake file

`add_executable` creates an executable from a given source file

`add_custom_command` create a custom build rule? TODO: Get more detail on what this means exactly



