#include<iostream>
using namespace std;
main()
{
    int number;
    cout << " enter the number of the resistor that are connected in the series " << endl;
    cin >> number;
    int resistor[number];
    int sum=0;
    for (int idx=0 ; idx < number ; idx=idx+1)
    {
        cout << "enter the value of the resistor" << endl;
        cin >> resistor[idx];
    }
    for (int idx=0 ; idx < number ; idx=idx+1)
    {
      sum = sum + resistor[idx];
    }
    cout << " the sum of the resistance of the all resistor " << endl << sum;
}