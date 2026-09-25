#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 2;

    vector<vector<int>> arr(n);
    int lastAnswer = 0;

    vector<vector<int>> queries =
    {
        {1, 0, 5},
        {1, 1, 7},
        {1, 0, 3},
        {2, 1, 0},
        {2, 1, 1}
    };

    cout << "Answers: ";

    for (auto query : queries)
    {
        int type = query[0];
        int x = query[1];
        int y = query[2];

        int index = (x ^ lastAnswer) % n;

        if (type == 1)
        {
            arr[index].push_back(y);
        }
        else if (type == 2)
        {
            lastAnswer = arr[index][y % arr[index].size()];
            cout << lastAnswer << " ";
        }
    }

    cout << endl;

    return 0;
}

/*
Test Case 1:

Input:
n = 2
queries =
1 0 5
1 1 7
1 0 3
2 1 0
2 1 1

Expected Output:
7 3


Test Case 2:

Input:
n = 2
queries =
1 0 1
1 0 2
2 0 1

Expected Output:
2
*/