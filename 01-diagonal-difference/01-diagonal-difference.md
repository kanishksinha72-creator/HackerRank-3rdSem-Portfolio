## Problem: Diagonal Difference

**Link:** [HackerRank - Diagonal Difference](https://www.hackerrank.com/challenges/diagonal-difference/problem)

### Approach

I traverse the matrix once and calculate the sum of the primary diagonal and the secondary diagonal. I then take the absolute difference between the two sums.

### Complexity

- **Time:** O(N)
- **Space:** O(1)

### Notes

The primary diagonal uses `arr[i][i]`, while the secondary diagonal uses `arr[i][N - 1 - i]`.