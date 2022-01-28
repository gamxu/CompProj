#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <conio.h>

using namespace std;

int main()
{
    srand(time(0));
    int elapTicks;
    int N;
    cin >> N;
    double elapMilli, elapSeconds, elapMinutes;
    clock_t Begin, End;
    Begin = clock() * CLK_TCK;
    vector<int> number;
    if (N == 5 || N == 4)
    {
        for (int i = 0; i < N; i++)
        {
            number.push_back(rand() % 10);
        }
        for (int i = 0; i < N; i++)
        {
            cout << number[i] << " ";
        }
    }
    //กดปุ่มอะไรก็ได้เพื่อหยุดเวลา
    getch();
    End = clock() * CLK_TCK;
    elapTicks = End - Begin;
    elapMilli = elapTicks / 1000;
    elapSeconds = elapMilli / 1000;
    elapMinutes = elapSeconds / 60;
    //แสดงเวลา
    if (elapSeconds < 1)
        cout << "\nIt took " << elapMilli << " milliseconds.";
    else if (elapSeconds == 1)
        cout << "\nIt took  1 second.";
    else if (elapSeconds > 1 && elapSeconds < 60)
        cout << "\nIt took  " << elapSeconds << " seconds.";
    else if (elapSeconds >= 60)
        cout << "\nIt took  " << elapMinutes << " minutes.";
    return 0;
}
