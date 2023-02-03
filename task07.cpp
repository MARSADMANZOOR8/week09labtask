#include<iostream>
using namespace std;
main()
{
    char character;
    cout << "enter a character " << endl;
    cin >> character;
    string name;
    cout << "string batto : " << endl;
    cin >> name;
    cout << name.length();
    int counter= name.length();
    int counter1=counter-1;
    for(int counter2=counter1;counter2>=0;counter2=counter2-1)
    {

    if (name[counter2] == character)
    {
        cout << "character" <<   "" ""  << endl <<  character  ;
    }
    else{
        cout << "character not found " << endl;
    }
    }
}