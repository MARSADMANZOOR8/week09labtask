#include<iostream>
using namespace std;
main()
{
int array1[2];
cout << "enter the value of the integers " << endl;
cin >> array1[0];
cout << "enter the value of the integers " << endl;
cin >> array1[1];
int number;
cout <<"enter the number of the digit you want to store in the array2" << endl;
cin >> number;
int array2[number];
for(int idx=0; idx<number;idx++)
{
    cout << "enter the values you want to store in array 2 " << endl;
    cin >> array2[idx];
}

cout << array1[0] << ","; 
for(int idx=0; idx<number;idx++)
{
    cout << array2[idx] << ",";
}
cout << array1[1] ;

}