#include <iostream>
using namespace std;
void symbol(int rows);
main()
{
    int rows;
    cout << "enter desired number of rows";
    cin  >> rows;
    symbol (rows);

}
void symbol(int rows)
{
    
    for (int i=1; i <=rows; i++)
    {
        for (int j=1 ; j<= i;j++)
        {
            cout << "* ";
        }
        cout << endl;
    
    } 
    
}