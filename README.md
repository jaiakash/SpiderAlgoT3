# SpiderAlgoT3
Spider Algo Task 3

## Ronney the Snake

Take the input as string. Add all the digits by running a for loop through entire string and then keep on doing it until only one digit remains.

## Coloring the Flags

Done by obervation. Find the number of prime number (let it be k) smaller than the input. Then return sum of k terms (1+2+3...k by using (k*(k+1)/2) ).
Prime number using Sieve of Sieve of Eratosthenes.

## Weakest Wall

Since the max value of m is 2. When m is 1, ans is sum of all elements. When m is 2, we use dp to find the minimum sum.

## Strongest Wall

We use binary search to find the solution. First statring with mid, and check if that is possible (weak_wall() fucntion), and then proceed further according to the output. Like this we find the "strongest brick".
