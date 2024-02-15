#include<bits/stdc++.h>
using namespace std;

void recursionLearning(int num){
    if(num > 0){
        recursionLearning(num-1);
        cout<<num<<" ";
    }
    return;
}

int main(){
    recursionLearning(5);
	return 0;
}