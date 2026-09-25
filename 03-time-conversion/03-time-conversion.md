## Problem: Time Conversion

**Link:** [HackerRank - Time Conversion](https://www.hackerrank.com/challenges/time-conversion/problem)

### Approach

I extract the hour and AM/PM period from the given 12-hour time string. For AM, 12 is converted to 00. For PM, 12 is kept unchanged while other hours have 12 added to them. The minutes and seconds remain unchanged.

### Complexity

- **Time:** O(1)
- **Space:** O(1)

### Notes

The problem requires converting a 12-hour AM/PM time format into 24-hour military time.