#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;

    for(int i=1; i<=n; i++){
        
        char ch1 = 'A';
        ch1 += n-i;
        for(int j=1; j<=i; j++){
            cout<<ch1;
            ch1 += 1;
        }
        cout<<endl;
    }

    return 0;
}