#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int years = 0;
    while( true ){ //always returns true, no matter what, this has to turn false in one of the computations, or else, it will go to infinite loop

        if(a>b){ 
            cout<<years;
            return false; //a generic solution and terminate the while loop if a>b ( not a>=b )
        }
        else{
            a = a*3;
            b = b*2;
            years++;
        }
    }
    return 0;
}