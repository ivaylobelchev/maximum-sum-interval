# Maximum Sum Interval

## Overview

This program finds the maximum sum interval (subarray) in a given array. The program uses Kadane's algorithm to efficiently compute the maximum sum subarray in linear time.

## Requirements

- **C++11 or later** (the program was written using C++14).
- A compiler that supports C++11 (e.g., **GCC 4.9+, Clang 3.3+, MSVC 2015+**)

### Files

Ensure the following files are in the same directory:

- `main.cpp`
- `readFromFile.hpp`
- `readFromFile.cpp`
- `maximumSum.hpp`
- `maximumSum.cpp`

### Compilation Instructions (Linux)

To compile the program using `g++` on Linux, open a terminal and run the following command:

```
g++ -std=c++14 main.cpp readFromFile.cpp maximumSum.cpp -o max_sum_interval
```

This will compile the program and create an executable called `max_sum_interval`.

### Running the Program

To run the program, execute the compiled program with:

```
./max_sum_interval
```

When prompted, provide the filename of a data file in the following format:

```
5
1 -4 5 6 -7
```

The array in the input file must contain valid numeric data. The program assumes the first number in the file is the size of the array, followed by the array elements themselves. Ensure that your input files are formatted correctly for the program to process them successfully.

### Test Data

Test files are available in the **"test_data"** directory. You can find various test cases there to verify the correctness of the program.

For example, to test an array with 20 elements, you can use:

```
test_data/test20.txt
```

### Program Behavior

- The program will compute the maximum sum subarray and print the 1-based indices of the subarray.
- If there are multiple subarrays with the same maximum sum, the program will output the first subarray.
- The program does not allow for empty sub-arrays; an array must contain at least one element.
