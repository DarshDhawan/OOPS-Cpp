#include <iostream>
#include <string>
#include <cctype>

using namespace std ;

int main()
{
    string color,action;
    cout << endl << "Enter traffic light color : ";
    cin >> color ;
    for ( char &c:color)
    {
        c=tolower(c);
    }
    if (color=="red")
        cout << "STOP !";
    else if (color == "green")
        cout << "GO !";
    else if (color =="yellow")
        cout << "Get Ready...";
    else
        cout << "Invalid Input !";

    return 0;
}

