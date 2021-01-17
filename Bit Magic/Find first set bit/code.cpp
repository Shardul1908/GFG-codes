//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

/*  function to find position of first set 
    bit in the given number
 * n: given input for which we want to get
      the position of first set bit
 */
unsigned int getFirstSetBit(int n){
    if(n == 0) {
        return 0;
    }
    int res = 1;
    for(int k = 0;k<32;k++) {
        if((n&(1<<k)) == 0) {
            res++;
        }
        else {
            break;
        }
    }
    return res;
}

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        printf("%u\n", getFirstSetBit(n)); // function to get answer
    }
	return 0;
}
  // } Driver Code Ends
