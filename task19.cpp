#include<iostream>
using namespace std;
main()
{
    int number;
    cout <<"enter the number you want to check:" << endl;
    cin >> number;
    int check[number];
    int smallest=1;
    for(int idx=0; idx<number ; idx++)
    {
        cout << "enter the digit you want to check : " << endl;
        cin >> check[idx];
        if(check[idx] < smallest)
        {
            smallest= check[idx];
        }
        
    }
    cout << "the smallest number is : " << smallest << endl;
}