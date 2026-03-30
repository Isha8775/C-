#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;

    for(int i=1; i<=n; i++){
        char ch = 'A';
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
            ch += 1;
        }
        cout<<endl;
    }

    cout<<endl;
    //reverse
    for(int i=1; i<=n; i++){
        char ch = 'A';
        for(int j=n-i+1; j>=1; j--){
            cout<<ch<<" ";
            ch += 1;
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=1; i<=n; i++){
        for(char ch='A'; ch<='A'+i-1; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    return 0;
}