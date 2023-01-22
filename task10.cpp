#include <iostream>
using namespace std;
main()
{
    int number1;
    int untreated = 0;
    int treated =0;
    int doc = 7;
    int sum1 = 0;
    int sum2 = 0;
    cout << "enter number1: ";
    cin >> number1;
    for (int i = 1; i <= number1; i++)
    {
        int num;
        cout << " enter number of patients: ";
        cin >> num;
        untreated = num - doc;
        treated = num - untreated;
        if (i%3==0 && untreated > treated)
        {
            doc++;
        }
        if (num > doc)
        {
            treated = doc;
            untreated = num - doc;
            sum1 = treated + sum1;
            sum2 = untreated + sum2;
        }
        else
        {
            treated = num;
            untreated = 0;
            sum1 = treated + sum1;
            sum2 = untreated + sum2;
        }
    }
    cout << sum1 << endl;
    cout << sum2 << endl;
}