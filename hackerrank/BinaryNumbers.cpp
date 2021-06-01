#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[10];
    int i=0;
    while(n>0){
        arr[i]=n%2;
        n/=2;
        i++;
        //cout<<n<<"\n";
    }

    for(i=i-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}




















