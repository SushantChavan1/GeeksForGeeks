/*Given a square of matrix M of size N*N. You task is to compute and return sum 
of principal diagonal elements of matrix. Your have to complete the function 
diagonalSum() which accepts N (size of matrix, N*N) and matrix M[ ][ ] as arguments.

Input:
The first input line contains T, denoting the number of testcases. 
Each testcase contains two lines. The first line contains N (size of matrix). 
The second line contains N*N elements of matrix separated by space.

Output:
For each testcase in new line, print the sum of diagonal elements.

User Task:
Since this is a functional problem you don't have to worry about 
input, you just have to complete the function sumDiagonal().

Constraints:
1 <= T <= 100
1 <= N <= 50
1 <= M[i][j] <= 100

Example:
Input:
1
3
1 2 3 4 5 6 7 8 9

Output:
15

Explanation:
Testcase 1: Sum of diagonal elements are: 1+5+9 = 15.
*/


int sumDiagonal(int N, int M[][N])
{
   // your code here
    int sum = 0;
    for(int i=0; i<N; i++)
        sum += M[i][i];
    return sum;
}