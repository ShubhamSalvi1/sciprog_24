# Practical8

* In the 8th practical, we worked on coding and running both the iterative and recursive versions of Euclid's algorithm to find the Greatest Common Divisor (GCD) of two positive numbers. Euclid's algorithm calculates the GCD by repeatedly dividing the numbers and using the remainder.
	* **Iterative Method:** In this approach, the function finds the GCD by repeatedly swapping the numbers using a temporary variable. It keeps dividing and taking the remainder until the remainder becomes zero.

	* **Recursive Method:** Here, the function calculates the GCD by calling itself repeatedly. Each time, it passes the remainder as the new divisor until the divisor becomes zero.


* GCD with user input:
1. GCD with user input:

```bash
gcc -o GCD GCD.c

```
## Output:

```bash
./GCD

please make sure to enter two positive integers:
18
16
Iterative_gcd(18. 16)=2
Recursive_gcd(18. 16)=2
```
* GCD with 2 random integers:

* In this code instead of taking the two positive integer from the user, instead we use 2 random integers.

```bash
gcc -o random_gcd random_gcd.c

```
# Execute:

```bash
./random_gcd
Iterative_gcd(15. 11)=1
Recursive_gcd(15. 11)=1
```
