// Given a sentence containing several words and numbers. Find the largest number among them which does not contain 9. If no such number exists, return -1.

// Note: Numbers and words are separated by spaces only. It is guaranteed that there are no leading zeroes in the answer.

// Examples :

// Input: sentence="This is alpha 5057 and 97"
// Output: 5057
// Explanation: 5057 is the only number that does not have a 9.
// Input: sentence="Another input 9007"
// Output: -1
// Explanation: Since there is no number that does not contain a 9,output is -1.
// Expected Time Complexity: O(n)
// Expected Auxillary Space: O(n)

// Constraints:
// 1<=n<=106
// 1<=answer<=1018

// n is the length of a given sentence.


class Solution {
  public:
    long long ExtractNumber(string sentence) {

        // code here
        long long ans=-1;
        int i=0;
        string s=sentence;
        while(i<s.size())
        {
            if(s[i]>='0' && s[i]<='9')
            {
                long long n=0;
                bool flag=0;
                while(s[i]>='0' && s[i]<='9')
                {
                    if(!flag) n=n*10 + s[i]-'0';
                    if(s[i]=='9') flag=1;
                    
                    i++;
                }
                
                if(!flag) ans=max(ans,n);
            }
            else i++;
        }
        
        return ans;
        
    }
};