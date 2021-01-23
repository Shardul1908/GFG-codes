//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

class Solution{
public:
    void reverseGrp(vector<long long>& mv,int low,int high) {
        while(low < high) {
            long long temp = mv[low];
            mv[low] = mv[high];
            mv[high] = temp;
                
            low++;
            high--;
        }
    }
    
    void reverseInGroups(vector<long long>& mv, int n, int k){
        int i = 0;
        while(i < n) {
            int low = i;
            int high = 0;
            if((i + k - 1) > (n - 1)) {
                high = n - 1; 
            }
            else {
                high = (i + k - 1); 
            }
            
            reverseGrp(mv, low, high);
            
            i += k;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends
