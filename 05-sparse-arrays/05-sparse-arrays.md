## Problem: Sparse Arrays

**Link:** [HackerRank - Sparse Arrays](https://www.hackerrank.com/challenges/sparse-arrays/problem)

### Approach

For each query string, I compare it with every string in the given list and count how many times it occurs. The count for each query is stored in a result vector.

### Complexity

- **Time:** O(N × Q)
- **Space:** O(Q)

### Notes

The problem requires counting the frequency of each query string in the original list of strings. Exact string matching is used for every comparison.