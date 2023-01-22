#include <iostream>
using namespace std;
int total(int number);
main()
{
    int number;
    int final;
    cout << "enter nmber: ";
    cin >> number ;
    final=total(number);
    cout << final;
}
int total(int number)
{ 
    int result =0;
    for (int i=number ; i >=1 ; i--)
    {
      result=result+i;
    
    }
    return result;
}