#include<iostream>
using namespace std;
main()
{
    string name;
    cout << "enter the number" << endl;
    getline(cin,name);
    int count=name.length();
    int count1=0;
    
    for(int idx=0;idx<count;idx++)
    {
       
         if (name[idx]=='a' || name[idx]=='e' || name[idx]=='i' || name[idx]=='o' || name[idx]=='u')
        {
            continue;
        
        }
        cout<<name[idx];

        
    }
    
}
