#include <iostream>
using namespace std;
void range(int value);
main()
{
    int value;
    cout << "enter number: ";
    cin >> value;
    range(value);
}
void range(int value)
{
    int num1;
    float count1 = 0;
    float count2 = 0;
    float count3 = 0;
    float per1 ;
    float per2;
    float per3;
    

    for (int count = 1; count <= value; count++)
        
    {
        cout << "enter number1: ";
           cin >> num1;
        if (num1 %2==0)
        {
            count1 = count1 + 1;
        }
         if (num1 %3==0)
        {
            count2 = count2 + 1;
        }
        if (num1 %4==0)
        {
            count3 = count3 + 1;
        }
       
    }
        per1 = (count1 / value)*100.00 ;
        per2 = (count2 / value) * 100.00;
        per3 = (count3 / value) * 100.00;
        
        cout << per1 << "%" <<endl;
        cout << per2 <<"%"<< endl;
        cout << per3 <<"%"<< endl;
        
}
    