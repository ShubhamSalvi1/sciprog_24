# Practical 7
* In Practical 7, there are two tasks. In the first exercise we estimate the value of e and calculate the difference between this estimated value and the true value of e.
	* It is observed that as the order of computation increases, the difference generally decreases up to a certain point. Specifically, the difference reduces until the 12th order but increases at the 13th order. Beyond that, at the 14th and 15th orders, the difference decreases again.

	* This happens because as the order increases, the factorial in the formula gets really big, making the extra terms in the calculation very small. But computers can only store numbers with a certain level of accuracy, so they round off very tiny numbers. This rounding causes small mistakes, and at higher orders, these mistakes can add up, leading to slight changes in the differences we observe.

## Compile:
* Difference in estimated 'e' value and the true value:
```bash 
gcc -o finde finde.c -lm
```

## Output:
```bash
./finde

Please enter the required polynomial order 
1
e is estimated to be 2.0000000000, with difference -7.182818e-01

./finde 
Please enter the required polynomial order 
10
e is estimated to be 2.7182818011, with difference -2.731266e-08

./finde 
Please enter the required polynomial order 
12
e is estimated to be 2.7182818283, with difference -1.728764e-10

./finde 
Please enter the required polynomial order 
13
e is estimated to be 2.7182818288, with difference 3.447078e-10

./finde
Please enter the required polynomial order 
14
e is estimated to be 2.7182818296, with difference 1.126602e-09

./finde 
Please enter the required polynomial order 
15
e is estimated to be 2.7182818301, with difference 1.625527e-09
```

* In Exercise 2, we worked on dynamic memory allocation using pointers and practiced array manipulation. We also handled pointers and freed the allocated memory properly.

- Here’s what we did:

**allocatearray(int size)** : This function takes the size of the array (number of integers) as input and returns a pointer to a block of memory that can hold that many integers.
**fillwithones(int array, int size)**: This function takes a pointer to an array and fills every element in the array with the number 1.
**printarray(int array, int size)**: This function takes a pointer to an array and prints all the elements on the screen.
**freepointer(int array)**: This function frees up the memory that was allocated to the array so it can be used for something else.
It was a hands-on way to learn how to manage memory and use pointers effectively.

## 1. Difference in estimate 'e' value and true value:

```bash
gcc -o pointers pointers.c -lm

```
# Output:

```bash
./pointers

1111111111111111111111111

```
