// Ritu has all numbers from 1 to n in an array arr of length n-1 except one number. You have to find which number, Ritu doesn't have from 1 to n.

// NOTE: Don't use Sorting

// Example 1:

// Input:
// n  =  4                                        
// arr = {1, 4, 3}
// Output: 2     
// Explanation:
// Ritu doesn't have number 2
// Example 2:

// Input:                        
// n = 5
// arr = {2, 5, 3, 1}
// Output: 4
// Explanation:
// Ritu doesn't have number 4 in her collection
// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function missingNumber() which takes an integer n and an array arr of length n-1 as inputs and returns the missing number.

// Exected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

// Constraints:
// 2 ≤ n ≤ 104
// 1 ≤ arr[i] ≤ n
// Size(arr) = n-1 


class Solution {
  public:
    int missingNumber(int n, vector<int> &arr) {
        // code here
        int sum = 0;
        
        for(int i = 0; i<n-1 ; i++){
            sum += arr[i];
        }
        
       int real_sum = n*(n+1)/2;  
        
        return real_sum - sum;
    }
};