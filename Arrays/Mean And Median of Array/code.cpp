
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

int median(int A[],int N)
{
    
    sort(A,A+N);
    //your code here
    //If median is in fraction then convert it to integer and return
    if(N%2 != 0) {
        int mid = (N+1)/2;
        return A[mid - 1];
    }
    else {
        int mid1 = N/2;
        int mid2 = mid1 + 1;
        int median = (A[mid1 - 1] + A[mid2 - 1])/2;
        return floor(median);
    }
}

int mean(int A[],int N)
{
    int sum = 0;
    for(int i = 0;i<N;i++) {
        sum += A[i];
    }
    return (sum/N);
}


// { Driver Code Starts.

int main()
{
    //testcase
    int T;
    cin>>T;
   
    //looping testcase
    while(T--)
    {
        //number of elements in array
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        cout<<mean(a,N)<<" "<<median(a,N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
