#include <iostream>
using namespace std;

void q1()
{
    cout << "Hello World";
    cout << "\nHere I implemented newline";
    cout << endl << "Here I implemented endl" << endl;
    cout << "Here\tI\timplemented\ttab" << endl ;
    cout << "Here I implemented alarm \a \a \a";
    cout << endl << "There I implemented carriage return\rHere ";
    cout << endl ;//to flush the /r effecttttttt
}

void q2()
{
    float C,F;
    cout << endl << "Enter Temp in C : ";
    cin >> C ; 
    F=(9*C)/5+32;
    cout << "Temp in F : " << F;
}

void q3()
{
    float base,gorss,da,ta,hra ;
   cout << endl << "Enter Basic Salary : ";
   cin >> base ;
   da = 0.46 * base ;
   ta = 0.08 * base ;
   hra = 0.09 * base ;
   gorss = base + da + ta + hra ;
   cout << "Gross Salary : " << gorss;

}

void q4()
{
    float h,t,c;
    cout << endl <<"Enter Hardness : ";
    cin >> h;
    cout << endl <<"Enter Carbon Content : ";
    cin >> c;
    cout << endl <<"Enter Tensile Strength : ";
    cin >> t;
    if ( h > 50 )
    {
        if ( c < 0.7)
        {
            if (t > 5600)
            cout << "\nSteel Quality : Grade 10";
            else
            cout << "\nSteel Quality : Grade 9"; 
        }
        else
        {
            if (t>5600)
            cout << "\nSteel Quality : Grade 7";
            else
            cout << "\nSteel Quality : Grade 6";
        }


    }
    else
    {
        if (c<0.7)
        {
            if (t>5600)
            cout << "\nSteel Quality : Grade 8";
            else 
            cout << "\nSteel Quality : Grade 6";
        }
        else if (t>5600)
        cout << "\nSteel Quality : Grade 6";
        else 
        cout << "\nSteel Quality : Grade 5";
    }

}

void q5()
{
    unsigned int days;
    cout << endl <<"Enter No. of Late Days : ";
    cin >> days ;
    if (days == 0)
    cout << "\nFine  : Zero";
    else if (days <= 5)
    cout << "\nFine  : 50 paisa";
    else if (days <= 10)
    cout << "\nFine  : 1 rupee";
    else if (days < 30)
    cout << "\nFine  : 5 rupees";
    else
    cout << "\nMEMBERSHIP CANCELLED ! \nFine : 5 rupees\n";
}

void q6()
{
    cout << endl <<  "\nFor Loop\nCase I\n";
    for(int i=0;i<5;i++)
    {cout << endl << i ;}

    cout << endl <<  "\nFor Loop\nCase II\n";
    int i = 0;
    for(;i<5;i++)
    {cout << endl << i ;}

    cout << endl <<  "\nFor Loop\nCase III\n";
    int j;
    for(j=0;j<5;j++)
    {cout << endl << j ;}

    cout << endl <<  "\nFor Loop\nCase IV\n";
    int k = 0;
    for(;k<5;)
    {cout << endl << k ;k++;}

    cout << endl <<  "\nWhile Loop\nCase I\n";
    int l = 0;
    while(l<5)
    {cout << endl << l ;l++;}

    cout << endl <<  "\nDo-While Loop\nCase I\n";
    int h = 0;
    do
    {cout << endl << h ;h++;}while(h<5);

}

namespace meow 
{
    string var = "Yoooooooooooooo Broooooooooooo !";

    void q7()
    {
        cout << endl <<"I'm a fn built inside a namespace !";
    }
}



int main()
{
    int q=67;
    do
   { cout << endl <<  "Select Question from 1-13 (Enter 0 to EXIT) : ";
    cin >> q;
    if (q==1)
    q1();
    else if (q==2)
    q2();
    else if (q==3)
    q3();
    else if (q==4)
    q4();
    else if (q==5)
    q5();
    else if (q==6)
    q6();
    else if (q==7)

    {meow::q7();
    cout << "\nI'm a variable inside namespace : " << meow::var;
    }
    else if (q==8)
    q2();
    else if (q==9)
    q2();
    else if (q==10)
    q2();
    else if (q==11)
    q2();
    else if (q==12)
    q2();
    else if (q==13)
    q2();
    }while(q!=0);
    cout << "\n\nBye Bye Bye Bye !\n\n";
    return 0;
}
 