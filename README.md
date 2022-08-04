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