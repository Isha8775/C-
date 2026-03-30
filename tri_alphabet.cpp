#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;

    for(int i=1; i<=n; i++){
        
        //space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }

        //alphabet
        char ch1 = 'A';
        for(int j=1; j<=i; j++){
            cout<<ch1;
            ch1 += 1;
        }

        ch1-=2;
        //alphabet
        for(int j=1; j<i; j++){
            cout<<ch1;
            ch1 -= 1;
        }

        //space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }

        cout<<endl;
    }

    return 0;
}