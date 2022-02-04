#include <iostream>
using namespace std;
int main()
{
    int n, count = 1;
    cout << "Enter a number." << endl;
    cin >> n;
    if (n < 1)
    {
        cout << "Invalid input. Input should not be negative or 0." << endl;
    }
    else if (n == 1)
    {
        cout << n << " : Length = " << count << endl;
    }
    else
    {
        {
            cout << n ;
            while (n != 1)
            {
                count = count + 1;
                if (n % 2 == 0)
                {
                    n = n / 2;
                }
                else if (n % 2 == 1)
                {
                    n = (3 * n) + 1;
                }
                cout << " --> " << n;
            }
            cout << " : Length = " << count << endl;
        }
    }
    system("pause");
    return 0;
}