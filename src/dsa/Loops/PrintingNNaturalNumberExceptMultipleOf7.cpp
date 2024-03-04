#include <iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter N = ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (i % 7 != 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}