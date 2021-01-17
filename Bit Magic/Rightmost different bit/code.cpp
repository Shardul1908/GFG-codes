#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends


//User function Template for C++

/*  Function to find the first position with different bits
*   This function returns the position with different bit
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

int posOfRightMostDiffBit(int m, int n)
{
    int no = m^n;
    return getFirstSetBit(no);
}



// { Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         cout << posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}   // } Driver Code Ends
