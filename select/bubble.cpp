#include <iostream>
using namespace std;

int list[5] = {15, 11, 1, 3, 8};

void bubble(int list[], int n)
{
    int key, j;

    for (int i = 1; i < n; i++)
    {
        key = list[i];
        j = i - 1;

        if (list[j] > key)
        {
            
        }
        
    }
}

int main()
{
    bubble(list, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << list[i] << " ";
    }

    return 0;
}