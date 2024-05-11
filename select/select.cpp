#include <iostream>
using namespace std;

int list[5] = {15, 11, 1, 3, 8};

void select(int list[], int n)
{
    int min, tmp;

    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (list[j] < list[min])
            {
                min = j;
            }
        }
        tmp = list[i];
        list[i] = list[min];
        list[min] = tmp;
    }
}

int main()
{
    select(list, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << list[i] << " ";
    }

    return 0;
}