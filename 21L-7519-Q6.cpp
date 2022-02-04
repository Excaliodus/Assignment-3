#include <iostream>
using namespace std;
int main()
{
    int n, x, z, k = 64;
    cout << "Enter the number of rows you want." << endl;
    cin >> n;
    if (n <= 1)
    {
        cout << "Invalid input. Input shoulbe be greater than 1." << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            k = k + 1;
            cout << (char)(k);
        }
        for (int i = 1; i <= (n - 1); i++)
        {
            k = k - 1;
            cout << (char)(k);
        }
        cout << endl;
        for (int i = 1; i <= (n - 1); i++)
        {
            x = 64;
            for (int j = i; j <= (n - 1); j++)
            {
                x = x + 1;
                cout << (char)(x);
            }
            for (int j = 1; j <= i; j++)
            {
                cout << " ";
            }
            for (int j = 1; j < i; j++)
            {
                cout << " ";
            }
            z = (64 + n + 1) - i;
            for (int j = i; j <= (n - 1); j++)
            {
                z = z - 1;
                cout << (char)(z);
            }
            cout << endl;
        }
    }
    system("pause");
    return 0;
}