#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, sum = 0, y = 0;
    cout << "Enter a number x." << endl;
    cin >> x;
    y = (x - 1) / x;
    sum = y;
    for (int i = 2; i < 8; i++)
    {
        sum = sum + ((0.5) * (pow(y, i)));
    }
    cout << "The sum of the serires is " << sum << endl;
    system("Pause");
    return 0;
}