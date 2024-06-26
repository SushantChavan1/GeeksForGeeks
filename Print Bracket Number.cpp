// Given a string S, the task is to find the bracket numbers. 

// Example 1:

// Input:  S = "(aa(bdc))p(dee)"
// Output: 1 2 2 1 3 3
// Explanation: The highlighted brackets in
// the given string (aa(bdc))p(dee) has been 
// assigned the numbers as: 1 2 2 1 3 3.
// Example 2:

// Input:  S = "(((()("
// Output: 1 2 3 4 4 5
// Explanation: The highlighted brackets in
// the given string (((()( has been assigned
// the numbers as: 1 2 3 4 4 5
// User Task:
// Your task is to complete the function bracketNumbers() which takes a single string as input and returns a list of numbers. You do not need to take any input or print anything.
// Expected Time Complexity: O(|S|)
// Expected Auxiliary Space: O(|S|)

// Constraints:
// 1 <= |S| <= 105
// S contains lowercase English alphabets, and '(', ')' characters
// At any time the number of opening brackets is greater than closing brackets


class Solution{
public:	

	vector<int> bracketNumbers(string S)
	{
	    // Your code goes here
	    int j=0;
	    vector<int>ans;
	    stack<int>st;
	    for(int i=0;i<S.size();i++)
	    {
	        if(S[i]=='(')
	        {
	            st.push(++j);
	            ans.push_back(st.top());
	        }
	        else if(S[i]==')' && st.size()>0)
	        {
	            ans.push_back(st.top());
	            st.pop();
	        }
	    }
	    return ans;
	}
};