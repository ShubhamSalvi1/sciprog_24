# Matrix Multiplication
* In this week's practical, we will look at how to perform and execute matrix multiplication of two different sizes and get an understanding how to make use of *makefile* in ssh.

* There are two .c files in this practical, namely:
	* main.c - Contains the main program in which we carry out defining all the three matrices and print the matrix multipication.
	* mm.c - Contains the function in which we carry out the matrix multiplication.
* There is one file named *makefile* which is essential because it can be used for:
	1. compiling and linking programs.
	2. running tests
	3. only rebuilding files that have been changed so that we can avoid unnecessary computations.
	4. clean command which can delete files of a specific format which we don't want.
## Compile:
* **Main function**:
 
```bash

gcc main.c mm.c -o matmult

``` 

## Execution:
 ```bash
 .\matmult 

The Matrix A is:
  0  1  2
  1  2  3
  2  3  4
  3  4  5
  4  5  6
The Matrix B is:
  0 -1 -2 -3
  1  0 -1 -2
  2  1  0 -1
The Matrix C is:
  5       2      -1      -4
  8       2      -4     -10
 11       2      -7     -16
 14       2     -10     -22
 17       2     -13     -28
```

* **MakeFile**: 
```bash
CC = gcc # C Compiler
CCFLAGS = -O3
LDFLAGS = -lm

all: mmc

mmc: main.o mm.o
	$(CC) -o $@ $^ $(LDFLAGS)

mm.o: mm.c
	$(CC) -c $(CCFLAGS) $<

main.o: main.c
	$(CC) -c $(CCFLAGS) $<

clean:
	rm *.o 

```
