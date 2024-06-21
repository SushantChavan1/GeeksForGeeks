// Given a string S  and a character X, the task is to find the last index (0 based indexing) of X in string S. If no index found then the answer will be -1.


// Example 1:

// Input: S = "Geeks", P = 'e'
// Output: 2
// Explanation: Last index of 'e' 
// is 2.
// Example 2:

// Input: S = "okiyh", P = 'z'
// Output: -1
// Explanation: There is no character
// as 'z'.

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function LastIndex() which takes the string s and character p as inputs and returns the answer.


// Expected Time Complexity: O(|S|)
// Expected Auxiliary Space: O(1)


// Constraints:
// 1 ≤ |S| ≤ 105
// S and P contain only lower and upper case alphabets.



class Solution{
    public:
    
    int LastIndex(string s, char p){
        //complete the function here
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]==p){
                return i;
            }
        }
        return -1;
    }
};