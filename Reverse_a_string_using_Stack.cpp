/*You are given a string S, the task is to reverse the string using stack.

 

Example 1:


Input: S="GeeksforGeeks"
Output: skeeGrofskeeG
 

Your Task:
You don't need to read input or print anything. Your task is
 to complete the function reverse() which takes the string S as an input parameter
  and returns the reversed string.

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

 

Constraints:
1 ≤ length of the string ≤ 100

*/


//return the address of the string
char* reverse(char *S, int len)
{
    //code here
   stack<char> st;
    for(int i=0;i<len;i++){
        st.push(S[i]);
    }
    char *ans = new char[len];
    int i=0;
    while(!st.empty()){
        ans[i] = st.top();
        i++;
        st.pop();
    }
    return ans;
    
}