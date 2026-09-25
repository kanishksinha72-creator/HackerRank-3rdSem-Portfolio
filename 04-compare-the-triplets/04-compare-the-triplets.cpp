#include <iostream>
using namespace std;

int main()
{
    int a[3], b[3];

    for (int i = 0; i < 3; i++)
        cin >> a[i];

    for (int i = 0; i < 3; i++)
        cin >> b[i];

    int alice = 0;
    int bob = 0;

    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
            alice++;
        else if (a[i] < b[i])
            bob++;
    }

    cout << alice << " " << bob << endl;

    return 0;
}

/*
Test Case 1:

Input:
5 6 7
3 6 10

Expected Output:
1 1


Test Case 2:

Input:
17 28 30
99 16 8

Expected Output:
2 1
*/