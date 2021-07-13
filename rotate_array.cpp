/***
5. Rotate Array
Easy Accuracy: 50.28% Submissions: 65353 Points: 2
Given an unsorted array arr[] of size N, rotate it by D elements in the counter-clockwise direction.

Example 1:
Input:
N = 5, D = 2
arr[] = {1,2,3,4,5}
Output: 3 4 5 1 2
Explanation: 1 2 3 4 5  when rotated
by 2 elements, it becomes 3 4 5 1 2.
Example 2:
Input:
N = 10, D = 3
arr[] = {2,4,6,8,10,12,14,16,18,20}
Output: 8 10 12 14 16 18 20 2 4 6
Explanation: 2 4 6 8 10 12 14 16 18 20
when rotated by 3 elements, it becomes
8 10 12 14 16 18 20 2 4 6.

Your Task:
Complete the function rotateArr() which takes the array, D and N as input parameters and rotates the array by D elements. The array must be modified in-place without using extra space.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 107
1 <= D <= N
0 <= arr[i] <= 105
**/


#include <iostream>
#include <vector>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--){
	    int n;
	    int i,pos;
	    cin>>n>>pos;
	    int arr[n];
	    int temp[pos];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(i=0;i<pos;i++){
	        temp[i]=arr[i];
	    }
	    for(i=pos;i<n;i++){
	        arr[i-pos]=arr[i];
	    }
	    int j=0;
	    for(i=n-pos;i<n;i++){
	        arr[i]=temp[j];
	        j++;
	    }
	    for(i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;

	}
	return 0;
}