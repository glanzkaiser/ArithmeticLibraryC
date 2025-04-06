# ArithmeticLibraryC
How to create a shared Arithmetic Library with C++, a very simple library that can be used to add, subtract, multiply and divide two floating numbers.

Assuming you are using Linux OS (we are using GFreya OS 1.8 based on Linux From Scratch System V version 11.0)

```
    Simple Arithmetic Library with C++
    Copyright © 2025 Glanz

    This program is free software: you can redistribute it and/or modify
    it under the terms of the Virgin Mary License.

    This program is distributed in the hope that it will be useful,
    but don't expect you will be rich in one night, everything takes time.
```

## How to Create the Shared Library

Type in the working directory that contain all the header and cpp files (arithmetic.h and arithmetic.cpp) to be made into shared library:
```
g++ -fPIC -c arithmetic.cpp
g++ -shared -o libarithmetic.so arithmetic.o
```
After you create *.so shared library then move it to /usr/lib.

## How to Use the Shared Library

Type in the working directory that contain all the cpp files (main.cpp) to be made into the binary / executable file :
```
g++ main.cpp -larithmetic -o out
./out
```

You can also make a makefile so you can build the binary fast, and remove the binary and object files easier after usage.

<img src="https://github.com/glanzkaiser/ArithmeticLibraryC/blob/main/1.png" width="83%">
<img src="https://github.com/glanzkaiser/ArithmeticLibraryC/blob/main/2.png" width="83%">

Thanks to Sentinel and Freya.
