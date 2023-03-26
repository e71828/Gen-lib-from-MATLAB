# shared lib for matrix with MinGW

please read the [cxx_MATLAB_Data_API_shared_library](https://ww2.mathworks.cn/help/compiler_sdk/cxx_MATLAB_Data_API_shared_library.html)

```bash
# copy the `CMakeLists.txt` to `eigmatrix/for_redistribution_files_only`
copy CMakeLists.txt eigmatrix/for_redistribution_files_only/
cd eigmatrix/for_redistribution_files_only/
cmake -Bbuild -H. -G "MinGW Makefiles"
cmake --build build/
./build/eig.exe
```
