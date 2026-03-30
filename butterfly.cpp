#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int spaces = 2 * n - 2;

    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars;
        if (i <= n)
            stars = i;
        else
            stars = 2 * n - i;

        // left stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        // spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // right stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;

        // update spaces
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
    return 0;
}