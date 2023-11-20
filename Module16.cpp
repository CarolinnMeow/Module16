#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    const int size = 6;
    int arr[size][size];

    // заполнение массива и вывод на экран
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = i + j;
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }

    // нахождение сегодняшнего дня
    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);

    int DayNumber = buf.tm_mday;
    cout << "Today: " << DayNumber << endl;

    // нахождение остатка от деления
    int numberStr = buf.tm_mday % size;
    cout << "String index: " << numberStr << endl;

    // сумма чисел в строке
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[numberStr][i];
    }
    cout << "Sum of elements: " << sum;
}

