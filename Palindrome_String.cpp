/*Given a string S, check if it is palindrome or not.

Example 1:

Input: S = "abba"
Output: 1
Explanation: S is a palindrome
Example 2:

Input: S = "abc" 
Output: 0
Explanation: S is not a palindrome
Your Task:
You don't need to read input or print anything. Complete the 
function isPalindrome()which accepts string S and returns an integer 
value 1 or 0.

Expected Time Complexity: O(Length of S)
Expected Auxiliary Space: O(1)

Constraints:
1 <= Length of S<= 2*105*/


class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    string s1;
	    s1=S;
	    reverse(s1.begin(),s1.end());//here we can reverse the string
	    if(s1==S)return 1;
	    else return 0;
	}

};

