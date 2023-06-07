# LAB_WORK.3__DEVELOPMENT
3Sum Closest

# LAB_WORK3 - 3Sum Closest

## Three Sum Closest

This code finds three integers in an array whose sum is closest to a given target. It provides a solution to the ["Three Sum Closest" problem](https://leetcode.com/problems/3sum-closest/) on LeetCode.

## Problem Description

Given an integer array `nums` of length `n` and an integer `target`, the task is to find three integers in the array `nums` such that their sum is closest to the target value.

The code takes the array `nums`, its size `n`, and the target value as input. It returns the sum of the three integers that have the closest sum to the target.

It is assumed that each input will have exactly one solution.

## Approach

The code follows the following approach to solve the problem:

1. Sort the array `nums` in ascending order.
2. Initialize a variable `closestSum` with a large value (`INT_MAX`) to keep track of the closest sum found so far.
3. Iterate over the array `nums` from the beginning, considering each element as a potential candidate for the first number in the triplet.
4. Use two pointers (`left` and `right`) to find the remaining two numbers in the array that, when added with the first number, give the closest sum to the target.
5. Calculate the current sum by adding the three numbers: `nums[i] + nums[left] + nums[right]`.
6. If the current sum is equal to the target, return the sum since it is an exact match.
7. Update the `closestSum` if the absolute difference between the current sum and the target is smaller than the difference between the `closestSum` and the target.
8. Move the pointers (`left` or `right`) based on whether the current sum is less than or greater than the target.
9. Repeat steps 5 to 8 until the pointers meet or cross each other.
10. Continue the iteration of the outer loop until all possible combinations have been considered.
11. Return the `closestSum` as the result.

The code utilizes the `qsort` function from the standard library to sort the array `nums` in ascending order.

## Example

Consider the following example:

Input: `nums = [-1, 2, 1, -4]`, `target = 1`

Output: Closest sum: `2`

Explanation: In this case, the closest sum to the target `1` is achieved by selecting the triplet `[-1, 2, 1]`, which gives a sum of `2`.

## Running the Code

To run the code, you can compile it using a C compiler and provide the necessary inputs, such as the array `nums` and the target value. The code will return the closest sum.

Additionally, unit tests have been added to verify the correctness of the `threeSumClosest` function. To run the unit tests, follow these steps:

1. Compile the code along with the test file using a C compiler:

   ```shell
   gcc your_code.c tests.c -o program
Run the compiled program:
The program will execute the unit tests and print "All test cases passed!" if all the tests pass. If any test fails, an assertion error will be raised with details about the test case that failed.

Complexity Analysis
The time complexity of the code is O(n^2), where n is the size of the input array nums. The space complexity is O(1) as the code uses
