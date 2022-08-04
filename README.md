Going through https://www.youtube.com/watch?v=ED-WUk440qc

To repro, install `cmake` then run the below

```
git clone https://github.com/msaroufim/cmake-experiments
cd cmake-experiments
git submodule update --init --recursive
./configure.sh
./build.sh
./run.sh
```
