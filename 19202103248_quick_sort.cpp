#include <iostream>
using namespace std;

int swap(int *a, int *b)
{
    int pivot;
    pivot = *a;
    *a = *b;
    *b = pivot;
}

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[high]);

    // cout<<a[i+1];

    return (i + 1);

    
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int q = partition(a, low, high);
        quickSort(a, low, q - 1);
        quickSort(a, q + 1, high);
    }
}

int main()
{
    int data[10]={4,1,3,2,16,9,10,14,8,7};
    int n=10;
    int i;


    cout << "Unsorted Array:\n";
    for (i = 0; i < n; i++)
        cout << " " << data[i];

    quickSort(data, 0, n - 1);
    cout << endl;
    cout << "\nSorted array in ascending order: \n";
    for (i = 0; i < n; i++)
        cout << " " << data[i];
}
