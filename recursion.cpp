#include <bits/stdc++.h>
using namespace std;

//  Problem 1
vector<int> printNos(int x)
{
    vector<int> v1;

    if (x == 0)
    {
        return v1;
    }
    v1 = printNos(x - 1);
    v1.push_back(x);
    return v1;
}

vector<string> printNTimes(int n)
{
    vector<string> str;
    if (n == 0)
    {
        return str;
    }
    str = printNTimes(n - 1);
    str.push_back("Coding Ninjas, ");
    return str;
}

// PROBLEM 3

void printNumber(vector<int> &ans, int x)
{

    if (1 > x)
    {
        return;
    }
    ans.push_back(x);
    printNumber(ans, x - 1);
}

vector<int> printNosss(int x)
{
    vector<int> ans;
    printNumber(ans, x);
    return ans;
}

int sumofN(int i, int sum)
{
    if (i < 1)
    {
        return sum;
    }
    sumofN(i - 1, sum + i);
}

long long sumFirstN(long long n)
{
    return sumofN(n, 0);
}

// Problem 5

long long findFactorial(long long n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * findFactorial(n - 1);
}

vector<long long> factorialNumbers(long long n)
{
    vector<long long> factArray;
    long long i = 1;
    long long fact = findFactorial(i);
    while (fact <= n)
    {
        factArray.push_back(fact);
        ++i;
        fact = fact * i;
    }
    return factArray;
}

//  Problem 6

void swapArray(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    swapArray(i + 1, arr, n);
}

// Problem 7

#include <bits/stdc++.h>
using namespace std;

void reverseHelper(int n, vector<int> &nums, int i)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(nums[i], nums[n - i - 1]);
    reverseHelper(n, nums, i + 1);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    reverseHelper(n, nums, 0);
    return nums;
}

int main()
{
    // PROBLEM 1
    // Problem 2

    // vector<int> result = printNos(7);
    // vector<string> result = printNTimes(3);
    // for (int i = 0; i < result.size(); i++){
    //     cout << result[i] << " ";
    // }

    // Problem 3

    // sumFirstN(4);

    // Problem 5 -- returns factorial values which is less than or equals to the n;

    vector<long long> result = factorialNumbers(7);
    for (int i = 0; i < result.size(); i++)
    {
        // cout << result[i] << " ";
    }

    // Problem 6 --Swap the array

    int i = 0, size;
    cout << "Enter size of the array: ";
    cin >> size;
    int a[size];
    while (i < size)
    {
        cout << "Enter Elements of the array: ";
        cin >> a[i];
        i++;
    }
    cout<<"Before swap: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
    swapArray(0, a, size);
    cout << "After swap: " << endl;

    for (int i = 0; i < size; i++){
        cout << a[i] << " ";
    }

    
    return 0;
}