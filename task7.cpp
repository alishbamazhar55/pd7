 #include <iostream>
 using namespace std;
 void average (int number);
 main()
 {
    int number;
    cout << "enter number: ";
    cin >> number;
    average(number);
    
 }
 void average(int number)
 {
    int tons;
    float tons1=0;
    float tons2=0;
    float tons3=0;
    float bus =0;
    float truck=0;
    float train=0;
        float  total;
        float total_weight;
        float average;
        float per1;
        float per2;
        float per3;
    for (int i=1 ;i <=number;i++)
    {
    cout << "enter current cargo number: ";
    cin >> tons;
    if (tons <=3)
    {
        tons1=tons1+tons;
        bus=tons1*200;
    } 
    if (tons>3&& tons <11)
    {
        tons2=tons2+tons;
        truck=tons2*175;
    }
    if (tons>=11)
    {
        tons3=tons3+tons;
        train=tons3*120;
    }
    }
total=bus+truck+train;;
total_weight=tons1+tons2+tons3;
average=total/(total_weight);
cout << average<<endl;
  per1= tons1/total_weight*100;
  per2= (tons2/total_weight)*100;
  per3= (tons3/total_weight)*100;
  cout << per1 << endl << per2 << endl<< per3 << endl;

 }