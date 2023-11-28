#include <bits/stdc++.h>
using namespace std;

void selectionSortCode(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void bubbleSortCode(int arr[], int n)
{
    int didSwap = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didSwap = 1;
            }
        }
        if (!didSwap)
        {
            break;
        }
    }
}

void insertionSort(int arr[], int n)
{
    int j;
    for (int i = 0; i <= n - 1; i++)
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
}

void mergeCode(int arr[], int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    //  For copying left part if remaining
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    //  For copying Right part if remaining
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }


    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

//  Merge Sort Function
void mergeSort(int arr[], int low, int high)
{
    if (low == high)
    {
        return;
    }
    int mid = (low + high) / 2;
    // Divide array into two halves
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    mergeCode(arr, low, mid, high);
}

int main()
{
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // selectionSortCode(arr,size);
    // bubbleSortCode(arr, size);
    // insertionSort(arr, size);
    mergeSort(arr, 0, size - 1);

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}