#include<iostream>
using namespace std;
main()
{
    int size;
    cout <<"enter the size of the array " << endl;
    cin >> size;
    int number[size];
    int sum=0;
    int average;
    for(int idx=0 ; idx < size ; idx++)
    {
       cout << "enter the value " << endl;
       cin >> number[idx];
       
    }
    for(int idx=0 ; idx < size ; idx++)
    {
        sum = sum + number[idx];
    }
    cout << "the sum of the numbers is : " << sum ;
    average = ( sum / size );
    cout <<  "the average of the number is : " << average ;
    

}