//Problem:
// At the annual meeting of Board of Directors of Acme Inc, every one starts shaking hands with everyone else in the room. Given the fact that any two persons shake hand exactly once, Can you tell the total count of handshakes?

// Input Format
// The first line contains the number of test cases T, T lines follow.
// Each line then contains an integer N, the total number of Board of Directors of Acme.

// Output Format
// Print the number of handshakes for each test-case in a new line.

//Topic: Combinatrics

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while (t--)
    {
        /* code */
        cin>>n;
        cout<<(n*(n-1))/2;
    }

    return 0;
    
}