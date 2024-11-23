# Overview

This is the 9th practical in which the code determines if a given matrix is a magice square or not. Where the magic square means that the sum of each row, each column or the sum of both diagonals is equal to a magic constant M.

* The magic constant \( M \) is given as:

$$
M = \frac{n \times (n^2 + 1)}{2}
$$

### main_stub.c:

This program reads the matrix from a file and allpcates memory for the matrix dynamically. Validates if the input matrix is a magic square using the magic_square.h function file then it free the allocated memory and cloases the file.

### magic_square.h:

# Overview

This is the 9th practical in which the code determines if a given matrix is a magic square or not. The magic square means that the sum of each row, each column and both the diagonals is equal to the constant M.
* The magic constant \( M \) is given as:

$$
M = \frac{n \times (n^2 + 1)}{2}
$$

### main.c:

* This program reads the matrix from a file and allocates memory for the matrix dynamically. Then it validates if the input matrix is a magic square using the magic_square.h function file then it frees up the allocated memory and closes the file.

### magic_square.h:

* This file has the function ismagicsquare which is to verify if the input matrix is a magic square or not.
That is it checks if the sum of each rows, sum of each column and sum of both the diagonals is equal to the Constant M.

### Text files:

* We have two text files magicsquare.txt and notmagicsquare.txt which contains the two matrix where one meets the condition and the other does not.
       

## Compile:

* main.c:

```bash
gcc main.c -o out -Wall

```
## Execute:
# Overview

This is the 9th practical in which the code determines if a given matrix is a magic square or not. The magic square means that the sum of each row, each column and both the diagonals is equal to the constant M.
* The magic constant \( M \) is given as:

$$
M = \frac{n \times (n^2 + 1)}{2}
$$

### main.c:

* This program reads the matrix from a file and allocates memory for the matrix dynamically. Then it validates if the input matrix is a magic square using the magic_square.h function file then it frees up the allocated memory and closes the file.

### magic_square.h:

* This file has the function ismagicsquare which is to verify if the input matrix is a magic square or not.
That is it checks if the sum of each rows, sum of each column and sum of both the diagonals is equal to the Constant M.

### Text files:

* We have two text files magicsquare.txt and notmagicsquare.txt which contains the two matrix where one meets the condition and the other does not.
       

## Compile:

* main.c:

```bash
gcc main.c -o out -Wall

```
## Execute:

* For file magicsquare.txt: This file has the matrix whose sum of each rows, sum of each column and sum of both the diagonals is equal to the Constant M.

```bash
./out
Enter file name: magicsquare.txt
No. lines, 3
This is magic!
```

* For file notmagicsquare.txt: This files has the matrix whose sum of each rows, sum of each column and sum of both the diagonals is not equal to the Constant M.

```bash
./out

Enter file name: notmagicsquare.txt
No. lines, 3
This is not magic
```
