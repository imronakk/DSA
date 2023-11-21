#include <bits/stdc++.h>
using namespace std;

// Problem 1
int totalDigits(int n)
{
    int i = 0;
    while (n > 0)
    {
        n = n / 10;
        i++;
    }
    return i;
}

// Problem 2

int reverseNumber(int n)
{
    int n1;
    string revString;
    // while(n>0){
    //     n1 = n%10;
    //     revString += to_string(n1);
    //     n = n/10;
    // }

    int N = n;
    int reverse = 0;

    while (N != 0)
    {
        int digit = N % 10;
        reverse = reverse * 10 + digit;
        N = N / 10;
    }

    return reverse;
    // return stoi(revString);
}

// Problem 3

int reverseNumberforPali(int n)
{
    int reverse = 0;
    int temp = n;
    while (temp > 0)
    {
        int d = temp % 10;
        reverse = (reverse * 10) + d;
        temp = temp / 10;
    }
    return reverse;
}

bool palindrome(int n)
{
    int output = reverseNumberforPali(n);
    return (n == output);
}

// Problem 4

bool ArmstrongNumber(int n)
{
    int temp = n;
    int cubeDigits = 0;
    while (temp > 0)
    {
        int d = temp % 10;
        cubeDigits += d * d * d;
        temp = temp / 10;
    }
    cout << cubeDigits;
    return (n == cubeDigits);
}

bool checkArmstrong(int n)
{
    int temp = n;
    int cubeDigits = 0;
    int len = log10(n) + 1;
    while (temp > 0)
    {
        int d = temp % 10;
        cubeDigits += pow(d, len);
        temp = temp / 10;
    }
    return (n == cubeDigits);
}

//  Problem 5

int sumOfAllDivisors(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int j = i;
        while (j >= 1)
        {
            if (i % j == 0)
            {
                sum = sum + j;
                j--;
            }
        }
    }
    return sum;
}

// Problem 6

void isPrimeOrNot(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Number " << n << " is Prime ";
    }
    cout << "Number " << n << " is Not Prime ";
}

//  Problem 7

int findGCD(int n1, int n2)
{
    for (int i = min(n1, n2); i >= 1; i--)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            return i;
        }
    }
}
int main()
{
    // Problem 1
    // cout << "Total Digits " << totalDigits(910292) << endl;  //Oh(n)
    // cout << "Total Digits " << int(log10(910292) + 1); //Oh(1)

    // Problem 2
    // cout<<"Reversed String: "<< reverseNumber(7890);

    // Problem 3
    // cout<<"Palindrome Number bool: "<< palindrome(121);

    // Problem 4
    // cout<<"Armstrong Number bool: "<< ArmstrongNumber(371);

    // Problem 5
    // cout<<"Sum Division Problem: "<<sumOfAllDivisors(3);

    // Problem 6
    // isPrimeOrNot(21);
 
    // Problem 7
    // cout << "GCD Is: " << findGCD(9, 12);
    return 0;
}