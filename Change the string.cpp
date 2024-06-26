// Given a string S, the task is to change the complete string to Uppercase or Lowercase depending upon the case for the first character.

// Example 1:

// Input:
// S = "abCD"
// Output: abcd
// Explanation: The first letter (a) is 
// lowercase. Hence, the complete string
// is made lowercase.

// â€‹Example 2:

// Input: 
// S = "Abcd"
// Output: ABCD
// Explanation: The first letter (A) is
// uppercase. Hence, the complete string
// is made uppercase.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function modify() which takes the string S as input and returns the resultant string with stated modifications.


// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(1) for C++ and O(|S|) for output in Java/Python.


// Constraints:
// 1<=|S|<=104


class Solution{
    public:
    
    string modify (string s)
    {
        // your code here
        if(islower(s[0]))
        {
            transform(s.begin(), s.end(), s.begin(), ::tolower); 
        }
        
        if(isupper(s[0]))
        {
            transform(s.begin(), s.end(), s.begin(), ::toupper); 
        }
        
        return s;
    }
};