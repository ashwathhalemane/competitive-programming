#include<iostream>
using namespace std;

int main(){
    unsigned short int w;
    cin>>w;

    if(w==2){
        cout<<"No"; //major corner case as 2/2 = 1 but 2%2 = 0, we have to catch and deal this
    }
    else if(w%2==0){
        cout<<"Yes";    
    }
    else{
        cout<<"No";
    }
    
    return 0;
}

// int main(){ 
//     int s; 
//     cin >> s; 
//     if(s % 2 == 0 && s > 2) 
//         cout << "YES" << endl; 
//     else 
//         cout << "NO" << endl; 
// return 0; }