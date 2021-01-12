// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
long long factorial(int);
// Position this line where user code will be pasted.
int main() {
    int T, N;
    cin >> T; // input number of testcases
    while (T--) {
        cin >> N; // input n
        cout << factorial(N) << endl;
    }
    return 0;
}
// } Driver Code Ends


// User function Template for C++

// Complete this function
long long factorial(int N) {
    long long res = 1;
    for(int i = 2;i<=N;i++) {
        res = res*i;
    }
    return res;
}
