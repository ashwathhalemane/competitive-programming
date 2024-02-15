// For a given number N check if it is prime or not. A prime number is a number which is only divisible by 1 and itself.

// Input:
// First line contains an integer, the number of test cases 'T'. T testcases follow. Each test case should contain a positive integer N.

// Output:
// For each testcase, in a new line, print "Yes" if it is a prime number else print "No".

// Your Task:
// This is a function problem. You just need to complete the function isPrime that takes N as parameter and returns True if N is prime else returns false. The printing is done automatically by the driver code.

// Constraints:
// 1 <= T <= 100
// 1 <= N <= 103

// Example:
// Input:
// 2
// 5
// 4
// Output:
// Yes
// No

// Explanation:
// Testcase 1: 5 is the prime number as it is divisible only by 1 and 5.
// Testcase 2: 4 is not a prime number as it is divisible by 1 2 and 4.


// } Driver Code Ends
//User function Template for C++

//You need to complete this function
// bool isPrime(int N)
// {
//     //Your code here
//     //bool isNotPrime = false;
//     for(int i=2; i<=sqrt(N);i++){
//         if(N%i == 0){
//             return false;
//         }
//         else{
//             return true;
//         }
//     }
// }
bool isPrime(int N)
{
    if(N==1) //1 is not prime so return false
    return false;
    
    for(int i=2;i<=sqrt(N);i++) //We check from 2 from sqrt(N) as divisors, if any, would exist till sqrt(N)
    {
        if(N%i==0) //If any i divides the number this means the nubmer is not prime
        return false;
    }
    return true; //return true in other cases
}

// { Driver Code Starts.

int main()
{
    int T; //testcases
    cin>>T; //input testcases
    while(T--) //while testcase have not been exhausted
    {
        int N;
        cin>>N; //input n
        
        if(isPrime(N)) 
        cout<<"Yes";
        else
            cout<<"No";
            
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends