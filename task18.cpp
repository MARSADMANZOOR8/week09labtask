#include<iostream>
using namespace std;
main()
{
    string name;
    cout << "enter the name" << endl;
    getline(cin,name);
    int count=name.length();

    
    for(int idx=0;idx<count;idx++)
    {
       
    name[idx]=name[idx]+1;    

        cout << name[idx];
    }
}