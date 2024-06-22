#include <iostream>
using namespace std;

void bubble(int *arr, int n);
int main()
{
    int arr[10] = {5, 9, 1, 7, 4, 10, 2, 8, 6, 9};
    bubble(arr, 10);
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    bubble(arr, 10);
    
}

void bubble(int *arr, int n)
{
    if (n == 1)
    {
        return;
    }
    bool swapped = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            swapped = true;
        }
    }
    if (!swapped)
    {
        cout << "Sorted" << endl;
        return;
    }
    bubble(arr, n - 1);
}
