// Given a non-empty sequence of characters str, return true if sequence is Binary, else return false

// Example 1:

// Input:
// str = 101
// Output:
// 1
// Explanation:
// Since string contains only 0 and 1, output is 1.
// Example 2:

// Input:
// str = 75
// Output:
// 0
// Explanation:
// Since string contains digits other than 0 and 1, output is 0.
 

// Your Task:
// Complete the function isBinary() which takes an string str as input parameter and returns 1 if str is binary and returns 0 otherwise.

 

// Expected Time Complexity: O(|s|)
// Expected Auxiliary Space: O(1)

 

// Constraints:
// 1 <=T<= 50
// 1 <=Length of str<= 10000


bool isBinary(string str)
{
   // Your code here
   int cnt=0;
   for(int i=0;i<str.size();i++){
       if(str[i]=='1' || str[i]=='0'){
          continue;
       }
       else{
           return 0;
       }
   }
   
   return 1;
}