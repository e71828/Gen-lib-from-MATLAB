# shared lib for matrix with MinGW

## STEP:
- configure MinGW with `configuremingw.p`, for example, open and select the folder: `C:\ProgramData\chocolatey\lib\mingw\tools\install\mingw64`;
- please read the [cxx_MATLAB_Data_API_shared_library](https://ww2.mathworks.cn/help/compiler_sdk/cxx_MATLAB_Data_API_shared_library.html)
- generate the lib with a sample, i.e. `eigmatrix.prj`;

## Command
```bash
cmake -Bbuild -H. -G Ninja
cmake --build build/
./build/eigmatrix/for_redistribution_files_only/eig.exe
```

## Result
```bash
   16.1168
   -1.1168
   -0.0000
```
