// Task
// Given an integer, n, perform the following conditional actions:

// If n is odd, print Weird
// If n is even and in the inclusive range of 2 to 5, print Not Weird
// If n is even and in the inclusive range of 6 to 20, print Weird
// If n is even and greater than 20, print Not Weird
// Complete the stub code provided in your editor to print whether or not n is weird.

//constraints
//1<=n<=100
#include <bits/stdc++.h>
using namespace std;

void condition(int N){
    if(N%2 == 1){
        cout<<"Weird"<<"\n";
    }
    else if((N%2 == 0) && ((N>=2) && (N<=5))){
        cout<<"Not Weird"<<"\n";
    }
    else if((N%2 == 0) && ((N>=6) && (N<=20))){
        cout<<"Weird"<<"\n";
    }
    else if((N%2 == 0) && (N>20)){
        cout<<"Not Weird"<<"\n";
    }
    else{
        cout<<"Don't know!!"<<endl;
    }
}

int main()
{
    int N;

    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    condition(N);

    return 0;
}