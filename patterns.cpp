// https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/

#include <bits/stdc++.h>
using namespace std;

void patternPr1(int n)
{

    // * * *
    // * * *
    // * * *
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void patternPr2(int n)
{
    // *
    // * *
    // * * *

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void patternPr3(int n)
{
    //    Result:
    // 1
    // 1 2
    // 1 2 3

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void patternPr4(int n)
{
    //    Result:
    // 1
    // 2 2
    // 3 3 3

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void patternPr5(int n)
{
    //    Result:
    // 1
    // 2 2
    // 3 3 3

    for (int i = n; i > 0; i--)

    {

        for (int j = 0; j < i; j++)

        {

            cout << "* ";
        }
        cout << endl;
    }
}

void patternPr6(int n)
{
    //    Result:
    // 1 2 3
    // 1 2
    // 1

    for (int i = n; i > 0 ; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}

int main()
{
    // FUNCTION CALLS OF EVERY PROBLEMS FROM PROBLEM SET

    // patternPr1(4);
    // patternPr2(4);
    // patternPr3(4);
    // patternPr4(4);
    // patternPr5(4);
    patternPr6(4);
    return 0;
}