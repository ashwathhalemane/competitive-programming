#include <bits/stdc++.h>

using namespace std;

void table(int n){
    int i;
    for(int i=1;i<=10;i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    table(n);
    return 0;
}
