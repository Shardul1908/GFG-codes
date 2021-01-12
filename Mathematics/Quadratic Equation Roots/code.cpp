//Initial Template for C++
/* C++ program to find roots of a quadratic equation */
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//You need to complete this function
void quadraticRoots(int a,int b, int c)
{
   int D = ((b*b)-(4*a*c));
   if(D < 0) {
       cout << "Imaginary";
//   }else if(D == 0){
//       root1 = ((-b)/(2*a));
//       root2 = root1;
   }else {
       double root1 = (-b+sqrt(D))/(2*a);
       double root2 = (-b-sqrt(D))/(2*a);
       root1 = floor(root1);
       root2 = floor(root2);
       if(root1 == -0) {
           root1 = 0;
       }
       if(root2 == -0) {
           root2 = 0;
       }
       if(root1 > root2) {
            cout << root1 << " " << root2;   
       }else {
           cout << root2 << " " << root1;
       }
   }
   // Your don't need to printline
   // It will automatically be 
   // handled by driver code
}



// { Driver Code Starts.

int main() {
	int T; 
	//input number of testcases
	cin>>T; 
	
	while(T--)
	{
	    int a, b, c; 
	    //Input a, b, and c
	    cin>>a>>b>>c; 
	    
	    quadraticRoots(a,b,c);
	    cout<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends
