#include <iostream>
using namespace std;

int main()
{
    int x;
    for (int i = 0; i < 5; i++)
    {
        x = 1;
        for (int j = 1; j < (5 - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << " " << x;
            x = (x * (i - j)) / (j + 1);
        }
        cout << endl;
    }
    cout << endl;
    system("Pause");
    return 0;
}