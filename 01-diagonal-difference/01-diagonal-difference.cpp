#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int primary = 0;
    int secondary = 0;

    for (int i = 0; i < n; i++)
    {
        primary += arr[i][i];
        secondary += arr[i][n - 1 - i];
    }

    int difference = primary - secondary;

    if (difference < 0)
    {
        difference = -difference;
    }

    cout << difference << endl;

    return 0;
}

/*
Test Case 1:

Input:
3
11 2 4
4 5 6
10 8 -12

Expected Output:
15


Test Case 2:

Input:
2
1 2
3 4

Expected Output:
0
*/