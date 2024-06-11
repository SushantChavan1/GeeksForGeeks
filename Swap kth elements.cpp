// Given an array arr of size n, swap the kth element from the beginning with kth element from the end.

// Example 1:

// Input:
// n = 8
// k = 3
// arr[] = {1, 2, 3, 4, 5, 6, 7, 8}
// Output: {1, 2, 6, 4, 5, 3, 7, 8}
// Explanation:
// 3rd element from beginning is 3 and from end is 6.
// Example 2:

// Input:
// n = 5
// k = 2
// arr[] = {5, 3, 6, 1, 2}
// Output: {5, 1, 6, 3, 2}
// Explanation: 
// 2nd element from beginning is 3 and from end is 1.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function swapKth() which takes integers n , k  and an array of integers arr of length n as input parameters and returns void. You have to modify the array itself in-place.

// Expected Time Complexity: O(1)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ k ≤ n ≤ 106
// -109 ≤ arr[i] ≤ 109

class Solution {
  public:
    void swapKth(int n, int k, vector<int> &arr) {
        // code here
        swap(arr[k-1],arr[n-k]);
    }
};
