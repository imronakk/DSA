#include <bits/stdc++.h>
using namespace std;

int problem1(int arr[], int n)
{

    int Largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (Largest < arr[i])
        {
            Largest = arr[i];
        }
    }
    return Largest;
}

int problem2Part1(int arr[], int n)
{
    int Largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (Largest < arr[i])
        {
            Largest = arr[i];
        }
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] != arr[i - 1])
        {
            return arr[i - 1];
        }
    }
    return Largest;
}

int problem2Part2(int arr[], int n)
{
    int Largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (Largest < arr[i])
        {
            Largest = arr[i];
        }
    }

    int secondLargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secondLargest && arr[i] != Largest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int problem2Part3(int arr[], int n)
{
    int Largest = arr[0];
    int secondLargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > Largest)
        {
            secondLargest = Largest;
            Largest = arr[i];
        }
        else if (arr[i] < Largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

vector<int> LEFTproblem3(vector<int> arr, int k)
{
    vector<int> temp;
    k = k % arr.size();
    for (int i = 0; i < k; i++)
    {
        temp.push_back(arr[i]);
    }
    arr.erase(arr.begin(), arr.begin() + k);
    for (int i = k; i < arr.size(); i++)
    {
        arr[i - k] = arr[i];
    }
    // arr.insert(arr.end(), temp.begin(), temp.end());

    for (int i = arr.size() - k; i < arr.size(); i++)
    {
        arr[i] = temp[i - (arr.size() - k)];
    }
    return arr;
}

vector<int> LEFTproblem3_2nd(vector<int> arr, int d, int n)
{
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
    return arr;
}

vector<int> RIGHTproblem4(vector<int> arr, int d, int n)
{
    vector<int> arrNew;

    // Reverse the last 'd' elements
    reverse(arr.begin() + n - d, arr.end());

    // Copy the reversed portion to arrNew
    for (int i = 0; i < n; i++)
    {
        arrNew.push_back(arr[i]);
    }

    return arrNew;
}

vector<int> moveZerosPART_1(int n, vector<int> a)
{
    int nonZeroInex = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[nonZeroInex], a[i]);
            nonZeroInex++;
        }
    }
    return a;
}

vector<int> moveZerosPART_2(int n, vector<int> arr)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
    {
        return arr;
    }
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[j], arr[i]);
            j++;
        }
    }
    return arr;
}

// HELPER
void itertationOFSET(vector<int> arr, set<int> &S)
{
    for (int i = 0; i < arr.size(); i++)
    {
        S.insert(arr[i]);
    }
}

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    set<int> s1;
    itertationOFSET(a, s1);
    itertationOFSET(b, s1);
    return vector<int>(s1.begin(), s1.end());
}
int main()
{
    int size;
    // cout << "Enter Size: ";
    // cin >> size;
    int arr[size];

    // int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> array1 = {2, 4, 12, 4, 0, 43, 0, 44, 55, 23, 11, 0, 23, 44, 2, 0, 42, 89, 76, 45, 32, 22, 0, 0, 0};
    vector<int> array;
    int val;

    // INPUT ELEMENTS
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter " << i + 1 << " Element: ";
    //     cin >> val;
    //     array.push_back(val);
    // }

    int rotateAmount;
    // cout << "\nRotate by how many elements? ";
    // cin >> rotateAmount;

    // ROTATE ELEMENTS BY K PLACES
    // vector<int> rotatedArray = LEFTproblem3_2nd(array1, rotateAmount, array1.size());
    vector<int> rotatedArray = moveZerosPART_2(array1.size(), array1);
    cout << "Moved zero to the right Array: ";

    // OUTPUT ELEMENTS
    for (int num : rotatedArray)
    {
        cout << num << " ";
    }
    cout << endl;

    // FIND LARGEST IN THE ARRAY
    // cout << problem1(arr, n);

    // FIND SECOND LARGEST IN THE ARRAY
    // cout << problem2Part1(arr, n);
    // cout << problem2Part2(arr, n);
    // cout << problem2Part3(arr, n);

    return 0;
}