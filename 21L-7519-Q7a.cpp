#include <iostream>
using namespace std;
int main()
{
    double sum = 0, fact = 1, x = 0;
    for (int i = 1; i <= 7; i++)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        x = i / fact;
        sum = sum + x;
    }
    cout << "The sum of the series is " << sum << endl;
    system("pause");
    return 0;
}