
#include<bits/stdc++.h>
using namespace std;

void stringIterator(string inputString){
    string evenString, oddString;
    //cout<<"stringIterator visited"<<endl;
    for(int i=0;i<inputString.length();i++){
        //cout<<i<<"---->"<<inputString[i]<<"\n";
        if(i%2==0){
            evenString+=inputString[i];
        }
        else if(i%2==1){
            oddString+=inputString[i];
        }
        else{

        }
    }
    cout<<evenString<<" "<<oddString<<"\n";
}

int main(){
    int t;
    std::cin>>t;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    //std::cin.ignore(INT_MAX); //ignores enter character

    for(int i=0;i<t;i++){
        string inputString;    
        getline(cin, inputString);
        stringIterator(inputString);
    }

    return 0;
}