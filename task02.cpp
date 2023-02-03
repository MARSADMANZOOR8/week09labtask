#include<iostream>
using namespace std;
 main()
{

    int size;
    cout <<"enter the size of the array " << endl;
    cin >> size;
    int number[size];
    for(int idx=0 ; idx < size ; idx++)
    {
       cout << "enter the value " << endl;
       cin >> number[idx];
       
    }
    for (int idx = size - 1; idx>=0 ; idx= idx - 1  )
    {
        cout << number[idx] << "  "  ;
    }
}    