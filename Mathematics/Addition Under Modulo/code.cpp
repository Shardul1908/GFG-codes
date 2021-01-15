//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++


long long sumUnderModulo(long long a,long long b)
{
    int M=1000000007;
    a = a%M;
    b = b%M;
    long long ans = (a + b)%M;
    return ans;
}

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    cout<<sumUnderModulo(a,b)<<endl;
	}
	return 0;
}  // } Driver Code Ends
