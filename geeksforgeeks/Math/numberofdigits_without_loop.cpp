#include<iostream>
#include<math.h>

using namespace std;
 
int main(){

    int num;
    int count;

    cout<<"enter number: \n";
    cin>>num;

    count = (num == 0) ? 1 : (log10(num) + 1);

    cout<<count<<endl;

    return 0;
}