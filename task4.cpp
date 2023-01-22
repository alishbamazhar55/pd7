#include <iostream>
using namespace std;
void amplified (int number);
main()
{
    int number ;
    cout << "enter number : ";
    cin >> number;
    amplified (number);
}
void amplified (int number)
{
    
    for (int i=1;i <=number ; i++)
    {
        if (i%4==0)
        {
           
            cout << i*10 << " , ";
        
        }
        else
        {
            cout << i << " , ";
        }
    }

}