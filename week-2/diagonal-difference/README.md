# Diagonal Difference

Given a square matrix, calculate the absolute difference between the sums of its diagonals.

## Example

For example, the square matrix is shown below:

```
1 2 3
4 5 6
9 8 9
```

The left-to-right diagonal = 1 + 5 + 9 = 15.  
The right-to-left diagonal = 3 + 5 + 9 = 17.  
Their absolute difference is |15 - 17| = 2.

## Function Description

Complete the `diagonalDifference` function in the editor below.

### `diagonalDifference` Function

```python
def diagonalDifference(arr: List[List[int]]) -> int:
    # Your code here
```

#### Parameters

- `arr (List[List[int]])`: an array of integers representing the square matrix

#### Returns

- `int`: the absolute diagonal difference

## Input Format

The first line contains a single integer, `n`, the number of rows and columns in the square matrix `arr`.  
Each of the next `n` lines describes a row, and consists of `n` space-separated integers.

## Constraints

- The matrix will always be square (i.e., `n` x `n`).

## Output Format

Return the absolute difference between the sums of the matrix's two diagonals as a single integer.

## Sample Input

```
3
11 2 4
4 5 6
10 8 -12
```

## Sample Output

```
15
```

## Explanation

The primary diagonal is:

```
11
   5
     -12
```

Sum across the primary diagonal: `11 + 5 - 12 = 4`

The secondary diagonal is:

```
     4
   5
10
```

Sum across the secondary diagonal: `4 + 5 + 10 = 19`

Difference: `|4 - 19| = 15`

Note: `|x|` is the absolute value of `x`.