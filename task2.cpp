#include <iostream>
using namespace std;
void symbol(int rows);
main()
{
    int rows;
    cout << "enter desired number of rows";
    cin >> rows;
    symbol(rows);
}
void symbol(int rows)
{
    for (int i = rows; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    } 
}