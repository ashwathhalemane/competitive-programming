#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int hard = 0;
    int easy = 0;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        if(n == 1){
            //cout<<"hard"<<'\n';
            hard++;
        }
        else{
            //cout<<"easy";
        }

        //cout<<hard;
    }

    if(hard>0){
        cout<<"hard"<<'\n';
    }
    else{
        cout<<"easy"<<'\n';
    }

    return 0;
}