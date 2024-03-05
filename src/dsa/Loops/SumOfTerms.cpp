#include <iostream>
using namespace std;

int main()
{

    int x, N;
    cout << "Enter first number : ";
    cin >> x;
    cout << "Enter second number : ";
    cin >> N;

    double sum = 0, fact = 1, prod = 1;

    for (int i = 0; i <= N; i++)
    {
        sum += prod/fact;
        prod *= x;
        fact *= i+1;
    }
    cout << "Sum is = " << sum << endl;
    return 0;
}

// We are having a series and we need to find the sum of nth numbers

// The series is.
// 1, x, x^2/2!, x^3/3! ......
// or
// x^0/0!, x^1/1!, x^2/2!, x^3/3! ......