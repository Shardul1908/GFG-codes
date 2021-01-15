//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends


//User function Template for C++


long long multiplicationUnderModulo(long long a,long long b)
{
    int m=1000000007;
    a = a%m;
    b = b%m;
    long long ans = (a*b)%m;
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
	    cout<<multiplicationUnderModulo(a,b)<<endl;
	}
	return 0;
}  // } Driver Code Ends
