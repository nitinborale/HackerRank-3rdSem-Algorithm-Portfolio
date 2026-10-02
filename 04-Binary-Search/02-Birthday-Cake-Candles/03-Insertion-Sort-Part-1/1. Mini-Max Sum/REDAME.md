# HackerRank Algorithms & GitHub Coding Portfolio

## Student Information

- **Name:** Nitin Borale
- **USN:** R25EF171
- **Branch:** Computer Science Engineering
- **Semester:** 3rd Semester

---

## HackerRank Profile

[My HackerRank Profile](https://www.hackerrank.com/profile/nitinborale26)

## GitHub Repository

[HackerRank-3rdSem-Algorithm-Portfolio](https://github.com/nitinborale/HackerRank-3rdSem-Algorithm-Portfolio.git)

---

## About This Portfolio

This portfolio contains my solutions to five algorithmic problems completed as part of Activity 12. The problems cover arrays, sorting, searching, and greedy algorithms.

The main objective of this activity is to improve problem-solving skills, understand algorithmic techniques, analyze Time and Space Complexity, and maintain coding solutions using GitHub.

---

# Problems and Solutions

## 1. Mini-Max Sum

### Approach

I read the five numbers and calculate their total sum. I find the minimum and maximum values in the array. The minimum sum is obtained by subtracting the maximum value from the total sum, and the maximum sum is obtained by subtracting the minimum value.

### Time Complexity

**O(N)**

### Auxiliary Space Complexity

**O(N)**

### Solution

[View Solution](01-Mini-Max-Sum/solution.cpp)

### HackerRank Problem

[Mini-Max Sum](https://www.hackerrank.com/challenges/mini-max-sum)

---

## 2. Birthday Cake Candles

### Approach

I find the maximum candle height while traversing the array. Whenever an element is equal to the maximum height, I increase the count. The final count represents the number of tallest candles.

### Time Complexity

**O(N)**

### Auxiliary Space Complexity

**O(N)**

### Solution

[View Solution](02-Birthday-Cake-Candles/solution.cpp)

### HackerRank Problem

[Birthday Cake Candles](https://www.hackerrank.com/challenges/birthday-cake-candles)

---

## 3. Insertion Sort – Part 1

### Approach

I take the last element as the value to be inserted. I compare it with the elements before it and shift larger elements one position to the right until the correct position is found.

### Time Complexity

**O(N)**

### Auxiliary Space Complexity

**O(1)**

### Solution

[View Solution](03-Insertion-Sort-Part-1/solution.cpp)

### HackerRank Problem

[Insertion Sort Part 1](https://www.hackerrank.com/challenges/insertionsort1)

---

## 4. Binary Search

### Approach

Binary search works on a sorted array. I maintain two positions, left and right. I calculate the middle position and compare the middle element with the target. Depending on the comparison, I search either the left half or the right half.

### Time Complexity

**O(log N)**

### Auxiliary Space Complexity

**O(1)**

### Solution

[View Solution](04-Binary-Search/solution.cpp)

---

## 5. Mark and Toys

### Approach

I sort the toy prices in ascending order. Starting from the cheapest toy, I keep purchasing toys while the total cost remains within the available budget.

### Time Complexity

**O(N log N)**

### Auxiliary Space Complexity

**O(N)**

### Solution

[View Solution](05-Mark-and-Toys/solution.cpp)

### HackerRank Problem

[Mark and Toys](https://www.hackerrank.com/challenges/mark-and-toys)

---

# Complexity Summary

| No. | Problem | Time Complexity | Auxiliary Space |
|---|---|---|---|
| 1 | Mini-Max Sum | O(N) | O(N) |
| 2 | Birthday Cake Candles | O(N) | O(N) |
| 3 | Insertion Sort – Part 1 | O(N) | O(1) |
| 4 | Binary Search | O(log N) | O(1) |
| 5 | Mark and Toys | O(N log N) | O(N) |

---

# HackerRank Evidence

Screenshots of the accepted solutions are included as evidence of completed challenges.

- Mini-Max Sum – Accepted
- Birthday Cake Candles – Accepted
- Insertion Sort – Part 1 – Accepted
- Binary Search – Completed
- Mark and Toys – Accepted

---

# HackerRank Badge

**Badge Status:** Update this section if a HackerRank badge has been earned.

---

# Reflection

Through this activity, I practiced important algorithmic techniques using C++. I learned how to solve array-based problems efficiently and how to analyze the time and space requirements of different solutions. Mini-Max Sum and Birthday Cake Candles helped me improve my understanding of array traversal and finding maximum and minimum values. Insertion Sort helped me understand how elements can be shifted to maintain sorted order. I also learned how Binary Search reduces the search area by half at every step, making it more efficient than a linear search for sorted data. Mark and Toys helped me understand the greedy approach, where selecting the cheapest available toys allows the maximum number of toys to be purchased within a budget. I also learned the importance of testing programs with sample and boundary cases. Using GitHub helped me organize my programs into separate folders and maintain my solutions in a public repository. Overall, this activity improved my problem-solving skills, algorithm analysis, coding practice, and understanding of how to document programming work in a structured way.

---

# Conclusion

This repository contains my five algorithmic solutions, complexity analysis, and documentation completed as part of Activity 12.