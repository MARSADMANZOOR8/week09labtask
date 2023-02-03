#include<iostream>
using namespace std;
 main()
{
    bool istrue=false;
    int num;
    
    int size;
    cout <<"enter the size of the array " << endl;
    cin >> size;
    int number[size];
    for(int idx=0 ; idx < size ; idx++)
    {
       cout << "enter the value " << endl;
       cin >> number[idx];
    }
    cout << "enter the number you want to find out in the array " << endl;
    cin >> num;
    for(int idx=0 ; idx < size ; idx++)
    {
        if (num==number[idx])
        {
            istrue=true;
            break; 
        }
    }
    if (istrue==true)
    {
        
    }

}    