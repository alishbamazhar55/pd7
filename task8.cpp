#include <iostream>
using namespace std;
void symbol1(int rows);
void symbol2(int rows);
main()
{
    int rows;
    cout << "enter rows: ";
    cin >> rows;
    symbol1(rows);
    symbol2(rows);
}
void symbol1(int rows)
{ 
    int even=rows/2;
    for (int i=1 ;i<=even ;i++)
    {
        for (int j=even;j>=i ;j--)
        {
            cout << " ";

        }
        for (int j=1;j<=i ;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void symbol2(int rows)
{
    int even=rows/2;
    for (int i=even;i>=1 ;i--)
    {
        for (int j=even;j>=i ;j--)
        {
            cout << " ";

        }
        for (int j=1;j<=i ;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}