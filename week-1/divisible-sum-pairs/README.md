# Divisible Sum Pairs

Given an array of integers and a positive integer k, determine the number of (i, j) pairs where i < j and ar[i] + ar[j] is divisible by k. 
## Example

ar = [1,2,3,4,5,6]
k = 5

Three pairs meet the criteria: [1,4], [2,3], and [4,6].

## Function Description

Complete the `divisibleSumPairs` function.

### Parameters

- `int n`: the length of the array
- `int ar[n]`: an array of integers
- `int k`: the integer divisor

### Returns

- `int`: the number of pairs

## Input Format

The first line contains space-separated integers `n` and `k`.
The second line contains `n` space-separated integers, each a value of `ar[i]`.

## Constraints

- \( 2 \leq n \leq 100 \)
- \( 1 \leq ar[i] \leq 100 \)
- \( 1 \leq k \leq 100 \)

## Sample Input

```
6 3
1 3 2 6 1 2
```

## Sample Output

```
5
```

## Explanation

Here are the 5 valid pairs when `k = 3`:

```
(1, 2) -> 1 + 2 = 3 (divisible by 3)
(1, 2) -> 1 + 2 = 3 (divisible by 3)
(3, 6) -> 3 + 6 = 9 (divisible by 3)
(2, 1) -> 2 + 1 = 3 (divisible by 3)
(2, 1) -> 2 + 1 = 3 (divisible by 3)
```
