#include<iostream>
using namespace std;
main()
{

    int size;
    cout <<"enter the size of the array " << endl;
    cin >> size;
    int smalllest;
    
    
    for(int idx=0 ; idx < size ; idx++)
    {
      
      cout << "enter the value " << endl;
      cin >> number[idx];
       
    }
    smalllest=number[0];
    for(int idx=0 ; idx < size ; idx++)
    {
      if (smalllest<number[idx])
      {
         cout << "the smallest number is " << smalllest;
      }
      else()
      {
         smalllest=number[idx];
          cout << "the smallest number is " << smalllest;
      }
    
    }
}