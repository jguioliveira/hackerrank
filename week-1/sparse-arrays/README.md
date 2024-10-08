# Sparse Arrays

There is a collection of input strings and a collection of query strings. For each query string, determine how many times it occurs in the list of input strings. Return an array of the results.

## Example

There are instances of `abc`, `def`, and `ghi`. For each query, add an element to the return array.

## Function Description

Complete the function `matchingStrings` in the editor below. The function must return an array of integers representing the frequency of occurrence of each query string in strings.

### `matchingStrings` has the following parameters:

- `string strings[n]`: an array of strings to search
- `string queries[q]`: an array of query strings

### Returns

- `int[q]`: an array of results for each query

### Input Format

- The first line contains an integer `n`, the size of `strings`.
- Each of the next `n` lines contains a string `strings[i]`.
- The next line contains an integer `q`, the size of `queries`.
- Each of the next `q` lines contains a string `queries[i]`.

### Constraints

- 1 ≤ n, q ≤ 1000
- 1 ≤ |strings[i]|, |queries[i]| ≤ 20

### Sample Input

```
4
aba
baba
aba
xzxb
3
aba
xzxb
ab
```

### Sample Output

```
2
1
0
```
