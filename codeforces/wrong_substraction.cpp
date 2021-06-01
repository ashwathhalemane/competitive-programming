#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>n>>t;
    for(int i=0;i<t;i++){
        if(n%10 == 0){
            n/=10;
        }
        else{
            n--;
        }
    }
    cout<<n;
}