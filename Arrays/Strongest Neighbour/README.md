Given an array arr[] of N positive integers. The task is to find the maximum for every adjacent pairs in the array.

Example 1:

Input:
N = 6
arr[] = {1,2,2,3,4,5}
Output: 2 2 3 4 5
Explanation: Maximum of arr[0] and arr[1]
is 2, that of arr[1] and arr[2] is 2, ...
and so on. For last two elements, maximum 
is 5.

Example 2:

Input:
N = 2
arr[] = {5, 5}
Output: 5
Explanation: We only have two elements 
so max of 5 and 5 is 5 only.

Your Task:
The task is to complete the function maximumAdjacent(), which takes sizeOfArray (N) and array(arr) as parameters and prints the maximum of all adjacent pairs (space separated).

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
2 <= N <= 106
1 <= arr[i] <= 106
