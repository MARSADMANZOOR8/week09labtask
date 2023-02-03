#include<iostream>
using namespace std;
main()
{
    string name;
    cout << "string batto : " << endl;
    cin >> name;
    cout << name.length();
    int counter= name.length();
    for(int idx=counter ; idx>=0 ;idx--)
    {
        cout << name[idx];
    }
    
}