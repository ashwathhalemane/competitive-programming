// { Driver Code Starts
//Initial Template for C++

// CPP code to find maximum of 
// all subarray of size two
#include <iostream>
#include <climits>
using namespace std;

void maximumAdjacent(int, int[]);

// } Driver Code Ends
//User function Template for C++

// Function to find maximum of all subarray of size two
void maximumAdjacent(int sizeOfArray, int arr[]){
    
    /*******************************************
     * Your code here
     * Function should print max adjacents for all pairs
     ********************************************/
     for(int i=0;i<sizeOfArray-1;i++){
         if(arr[i]>arr[i+1]){
             cout<<arr[i]<<" ";
         }
         else if(arr[i]<arr[i+1]){
             cout<<arr[i+1]<<" ";
         }
         else{
             cout<<arr[i]<<" "; 
         }
     }
}

// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    maximumAdjacent(sizeOfArray, arr);
	    cout<< endl;
	}
	
	return 0;
}  // } Driver Code Ends