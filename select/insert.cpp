#include <iostream>
using namespace std;

int list[5] = {15, 11, 1, 3, 8};

void insert(int list[], int n)
{
    int key, j;

    for (int i = 1; i < n; i++)
    {
        key = list[i];
        j = i - 1;

        if (j >= 0 && list[j] > key)
        {
            list[j + 1] = list[j];
            j = j - 1;
        }
        list[j + 1] = key;
    }
}

int main()
{
    insert(list, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << list[i] << " ";
    }

    return 0;
}