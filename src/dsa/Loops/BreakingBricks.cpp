#include <iostream>
using namespace std;
int main()
{

    int T;
    cin >> T;

    int S, W1, W2, W3;

    while (T > 0)
    {
        cin >> S >> W1 >> W2 >> W3;
        int Result = 0;

        if (W1 + W2 + W3 <= S)
        {
            Result = 1;
            cout << Result << endl;
            // break;
        }
        else if (W1 + W2 <= S || W2 + W3 <= S)
        {
            Result = 2;
            cout << Result << endl;
        }
        else
        {
            Result = 3;
            cout << Result << endl;
        }
        T--;
    }
    return 0;
}

// Ada stacked three bricks on top of each other. Initially, their widths (from top to bottom) are W1,W2,W3

// Adas strength is S. Whenever she hits a stack of bricks, consider the largest k≥0 such that the sum of widths of the topmost k bricks does not exceed S; the topmost k bricks break and are removed from the stack. Before each hit, Ada may also decide to reverse the current stack of bricks, with no cost.

// Find the minimum number of hits Ada needs in order to break all bricks if she performs the reversals optimally. You are not required to minimize the number of reversals.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains four space-separated integers SS,W1,W2,W3.
// Output
// For each test case, print a single line containing one integer ― the minimum required number of hits.

// Constraints
// 1≤T≤64
// 1≤S≤8
// 1≤Wi≤2 for each valid i
// it is guaranteed that Ada can break all bricks

// Input 1:
// 3
// 3 1 2 2
// 2 1 1 1
// 3 2 2 1

// Output 1:
// 2
// 2
// 2

// Explanation
// Example case 1: Ada can reverse the stack and then hit it two times. Before the first hit, the widths of bricks in the stack (from top to bottom) are (2,2,1). After the first hit, the topmost brick breaks and the stack becomes (2,1). The second hit breaks both remaining bricks.

// In this particular case, it is also possible to hit the stack two times without reversing. Before the first hit, it is (1,2,2). The first hit breaks the two bricks at the top (so the stack becomes (2) and the second hit breaks the last brick.

// Example
// Input
// 3
// 3 1 2 2
// 2 1 1 1
// 3 2 2 1
// Output
// 2
// 2
// 2