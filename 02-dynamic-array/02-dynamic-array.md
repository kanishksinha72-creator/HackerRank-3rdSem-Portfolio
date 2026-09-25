## Problem: Dynamic Array

**Link:** [HackerRank - Dynamic Array](https://www.hackerrank.com/challenges/dynamic-array/problem)

### Approach

I use a vector of vectors to store the sequences dynamically. For each query, I calculate the sequence index using the XOR of `x` and `lastAnswer`, then either add an element or retrieve an element from that sequence.

### Complexity

- **Time:** O(N + Q)
- **Space:** O(N)

### Notes

The XOR operation is used to determine which sequence a query should access. `lastAnswer` is updated whenever a type 2 query is processed.