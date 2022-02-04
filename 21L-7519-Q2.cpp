#include <iostream>
using namespace std;
int main()
{
    int prime;
    for (int n = 2; n <= 300; n += 1)
    {
        prime = 1;
        for (int i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            cout << n << endl;
        }
    }
    system("pause");
    return 0;
}