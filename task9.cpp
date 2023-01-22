#include <iostream>
using namespace std;
void symbol1(int rows);
main()
{
    int rows;
    cout << "enter rows: ";
    cin >> rows;
    symbol1(rows);

}
void symbol1(int rows)
{ 
    int shape =1;
    int blank=rows;
    for (int i=1;i<=rows ;i++)
    {
        for (int j=1 ;j<=i ; j++)
        {
            cout  << "*";
        }
        for (int j=1 ;j<blank ; j++)
        {
            cout  << " ";
        }
        for (int j=1 ;j<blank ; j++)
        {
            cout  << " ";
        }
        blank--;
        for (int k=1 ; k<=shape; k++)
        {
            cout  << "*";
        }
        shape++;
        cout << endl;
    }
    
    }