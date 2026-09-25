#include <iostream>
#include <string>
using namespace std;

int main()
{
    string time;
    cin >> time;

    int hour = stoi(time.substr(0, 2));
    string period = time.substr(8, 2);

    if (period == "AM")
    {
        if (hour == 12)
            hour = 0;
    }
    else
    {
        if (hour != 12)
            hour += 12;
    }

    if (hour < 10)
        cout << "0";

    cout << hour << time.substr(2, 6) << endl;

    return 0;
}

/*
Test Case 1:
Input:
07:05:45PM

Expected Output:
19:05:45


Test Case 2:
Input:
12:01:00AM

Expected Output:
00:01:00
*/