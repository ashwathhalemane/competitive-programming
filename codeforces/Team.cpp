#include<iostream>
using namespace std;

int main(){
    
    unsigned short int testCases;
    unsigned short int count = 0; // if not initialized to 0, we get count = 64
    
    cin>>testCases;

    while(testCases--){
        unsigned short int p, v, t;
        cin>>p>>v>>t;

        if((p==0 & v== 1 & t==1) || (p==1 & v==0 & t==1) || (p==1 & v==1 & t==0) || (p==1 & v==1 & t==1)){
            count++;
        }
        else{

        }
    }
    cout<<count;

    return 0;
}