// { Driver Code Starts
//Initial Template for C++



#include <iostream>
using namespace std;
 // } Driver Code Ends

//User function Template for C++

// Complete this function
int sumOfDigits(int n)
{
    // f(234) = 2+3+4 = 9
    // f(n)
    // {
    //   if n is less than 10 return n
    //   else return units digits of n+ f(n/10)
    // }
    //Your code here
    if(n<10){
        return n;
    }
    else{
        return n+sumOfDigits(n/10) % 10;
    }
}

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    
	    cout<<sumOfDigits(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends