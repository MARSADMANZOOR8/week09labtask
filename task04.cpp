#include<iostream>
using namespace std;
main()
{
    int num;
    cout << "enter a number you want to multiple " << endl;
    cin >> num;
    int size;
    cout <<"enter the size of the array " << endl;
    cin >> size;
    int multiplication[size];
    int number[size];
    
    for(int idx=0 ; idx < size ; idx++)
    {
       cout << "enter the value " << endl;
       cin >> number[idx];
       
    }
    for(int idx=0 ; idx < size ; idx++)
    {
        multiplication[idx] = num * number[idx];
    }
    for(int idx=size-1;idx>=0;idx=idx-1)
    {
        cout << "the number in the reverse form " << multiplication[idx]<< endl;
    }
    
    

}
