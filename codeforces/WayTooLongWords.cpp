#include <iostream>
#include <string>
using namespace std;

int main()
{
    unsigned short int testCases; //we know testcases are less than 100(short int), and also positive(unsigned)
    
    cin>>testCases;

    while(testCases--){ //decrease test cases every time

        string input_str;
        cin>>input_str;
        // you can also use str.length()
        if(input_str.size() > 10){
            cout <<input_str.at(0)<<input_str.size()-2<<input_str.at(input_str.length()-1)<<endl;  //length() returns out of bound array value, therefore length()-1 gives last element  
        }
        else{
            cout<<input_str<<endl; 
        }
        
    }
    
    return 0;
}