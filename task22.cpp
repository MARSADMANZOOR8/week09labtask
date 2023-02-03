#include<iostream>
using namespace std;
main()
{
    int total_due;
    bool istrue=false;
    cout << "enter the total due :" << endl;
    cin >> total_due;
    float array[4];
    cout <<"enter the number of the cents of quarter: " << endl;
    cin >> array[0];
    cout <<"enter the number of the cents of dime   : " << endl;
    cin >> array[1];
    cout <<"enter the number of the cents of nickel : " << endl;
    cin >> array[2];
    cout <<"enter the number of the cents of penny  : " << endl;
    cin >> array[3];
    float due;
    due = (array[0] * 0.25) + (array[1] * 0.10) + (array[2] * 0.05) + (array[3] * 0.01);
    if (total_due > due)
    { 
        
        cout << "false";
    }
    else
    {
        
        cout << "true";
    }


}
