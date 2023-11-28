#include <bits/stdc++.h>
using namespace std;

// Number hasing

void numberHash()
{
    int n, check;
    cout << "Enter Length: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element :";
        cin >> arr[i];
    }

    // Pre calculate
    int hash[20] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    cout << "Enter the number you want to check: ";
    cin >> check;
    cout << hash[check];
}

// String hasing

void stringHashing()
{
    string str;
    char check;
    cout << "Enter the String: ";
    cin >> str;
    int n = str.length();
    int hash[256] = {0};
    for (int i = 0; i < n; i++)
    {
        // char Ch = str.at(i);
        hash[str[i]] += 1;
    }

    cout << "Enter the character you want to check: ";
    cin >> check;
    cout << hash[check];
    cout << endl;
}

//  HASHING USE MAP

void mapHashing()
{
    int n, check;
    cout << "Enter Length: ";
    cin >> n;
    int arr[n];
    ;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element :";
        cin >> arr[i];
    }

    //  Pre calculate logic 
    map<int , int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }

    cout << "Enter the number you want to check: ";
    cin >> check;
    cout << map[check];
}

int main()
{
    // numberHash();
    // stringHashing();

    // mapHashing();

    // DIVISION METHOD HASHING 
    return 0;
}