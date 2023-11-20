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

    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void patternPr7(int n)
{
    //     Result:
    //      *
    //     ***
    //    *****
    //   *******
    //  *********
    // ***********

    // OUTER LOOP

    for (int i = 0; i < n; i++)
    {
        // FOR PRINTING SPACE BEFORE THE STARTS
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // FOR PRINTING STARTS
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // FOR PRINTING SPACE AFTER THE STARTS

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void patternPr8(int n)
{
    //     Result:
    //  *****
    //  ***
    //   *

    // OUTER LOOP

    for (int i = 0; i < n; i++)
    {
        // SPACE BEFORE STARTS
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // FOR STARTS
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // SPACE AFTER
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void patternPr9(int n)
{
    //     Input Format: N = 3
    // Result:
    //   *
    //   **
    //   ***
    //   **
    //   *

    // OUTER LOOP
    int stars;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void patternPr10(int n)
{
    //     Input Format: N = 6
    // Result:
    // 1
    // 01
    // 101
    // 0101
    // 10101
    // 010101

    int dgt = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << dgt;
            if (dgt == 1)
            {
                dgt = 0;
            }
            else
            {
                dgt = 1;
            }
        }
        cout << endl;
    }
}

void patternPr11(int n)
{
    //     Input Format: N = 3
    // Result:
    // 1    1
    // 12  21
    // 123321
    int space = 2 * (n - 1);
    for (int i = 0; i < n; i++)
    {
        
        // DIGIT BEFORE SPACES
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }   
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        // DIGIT AFTER SPACES
        for (int j = i; j>=0; j--){
            cout << j+1;
        }
        cout<<endl;
        space -= 2;
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
    // patternPr6(4);
    // patternPr7(4);
    // patternPr8(4);
    // patternPr9(4);
    // patternPr10(4);
    patternPr11(4);

    return 0;
}