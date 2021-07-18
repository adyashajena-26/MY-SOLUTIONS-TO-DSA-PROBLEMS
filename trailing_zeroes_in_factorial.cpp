/******
  Trailing zeroes in factorial
  For an integer N find the number of trailing zeroes in N!.
  Example 1:
  Input:
  N = 5
  Output:
  1
  Explanation:
  5! = 120 so the number of trailing zero is 1.
  Example 2:
  Input:
  N = 4
  Output:
  0
  Explanation:
  4! = 24 so the number of trailing zero is 0.
  Your Task:
  You don't need to read input or print anything. Your task is to complete the function trailingZeroes() which take an integer N as an input parameter and returns the count of trailing zeroes in the N!.
  Expected Time Complexity: O(logN)
  Expected Auxiliary Space: O(1)
  Constraints:
  1 <= N <= 109
****/// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:

    int trailingZeroes(int N){
        int count=0;
        int i;
        for(i=5;i<=N;i=i*5){
            count = count + N/i;

        }
         return count;
        }



        // Write Your Code here

};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans  = ob.trailingZeroes(N);
        cout<<ans<<endl;
    }
    return 0;
}  // } Driver Code Ends
