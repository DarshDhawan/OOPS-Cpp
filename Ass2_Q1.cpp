#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pass,strength="Weak";
    int u=0,l=0,d=0,s=0;
    int U=0,L=0,D=0,S=0;
    cout << "\n\nPassword Strength Checker\n\nEnter Password : ";
    getline(cin, pass);
    int len=pass.length();
    for(char ch:pass)
    {
        if(ch >= 'a' && ch<='z')
            {l++;L=1;}

        else if(ch >= 'A' && ch<='Z')
            {u++;U=1;}

        else if(ch >= '0' && ch<='9')
            {d++;D=1;}

        else 
            {s++;S=1;}
    }
    int sum=U+D+L+S;

    if(len >= 8 && sum==4 )
    strength="Strong";
    else if (len >=6 && sum>=2)
    strength = "Moderate";

    cout << endl << "\nUppercase Letters: "<< u << "\nLowercase Letters: "<< l << "\nDigits: "<< d << "\nSpecial Characters: " << s << "\nPassword Strength: " << strength;
    return 0;
}