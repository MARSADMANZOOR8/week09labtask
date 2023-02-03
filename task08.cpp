#include<iostream>
using namespace std;
main()
{
    string name;
    cout << "enter the name" << endl;
    getline(cin,name);
    int count=name.length();
    int count1=0;
    
    for(int idx=0;idx<count;idx++)
    {
       
         if (name[idx]=='a' || name[idx]=='e' || name[idx]=='i' || name[idx]=='o' || name[idx]=='u')
        {
            count1 = count1 + 1;
        
        }

        
    }
    cout<<"Vowels Letters came "<<count1<<" times";
}
