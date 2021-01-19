//Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//Complete this function
int countDigits(int n)
{
    if(n <= 9) {
        return 1;
    }
    return (countDigits(n/10) + 1);
}

// { Driver Code Starts.

int main() {
	int T;
	
	//taking testcases
	cin>>T;
	while(T--)
	{
	    int n;
	    
	    //taking number n
	    cin>>n;
	    
	    //calling countDigits
	    cout<<countDigits(n)<<endl;
	    
	    
	}
	return 0;
}


  // } Driver Code Ends
