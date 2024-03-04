#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter a number = ";
    cin >> N;
    int temp = N;
    int Result = 0;
    int d;

    while (temp)
    {
        d = temp % 10;
        temp /= 10;
        Result = Result*10 + d; 

    }   
    cout<<Result;

    return 0;
}

//Reverse of a number : 54123 -> 32154