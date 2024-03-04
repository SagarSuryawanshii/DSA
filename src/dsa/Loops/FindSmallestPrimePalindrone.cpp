#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isPalindrome(int x)

{
    int temp1 = x, res = 0, temp2;

    while (temp1)
    {
        temp2 = temp1 % 10;
        temp1 /= 10;
        res = res * 10 + temp2;
    }

    if (res == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int N;
    cin >> N;
    int Result, temp;

    while (N <= 1000000)
    {
        if (isPrime(N))
        {
            if (isPalindrome(N))
            {   
                cout<<N;
                break;
            }
        }
        N++;
    }
    return 0;
}


// Palindrome Integer

// An integer is said to be a palindrome if it is equal to its reverse. For example, 79197 and 324423 are palindromes. In this task you will be given an integer N, 1≤N≤1000000. You must find the smallest integer M≥N such that M is a prime number and M is a palindrome.

// Constraints
// 1≤N≤1000000

// Output Format
// Your output must consist of a single integer, the smallest prime palindrome greater than or equal to N.

// Sample Input 1
// 31

// Sample Output 1
// 101

// Explanation
// 101 is the smallest prime palindrome number which is greater than equal to 31

// Example
// Input
// 31
// Output
// 101