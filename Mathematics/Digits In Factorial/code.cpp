//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


//User function Template for C++
//You need to complete this function
int digitsInFactorial(int N)
{
    if(N < 0) {
        return 0;
    }
    if(N <= 1) {
        return 1;
    }
    double res = 0;
    for(int i = 2;i<=N;i++) {
        res += log10(i);
    }
    return floor(res) + 1;
}

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
