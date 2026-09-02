#include <iostream>

using namespace std ;

//q1
float rec_area(float l = 1 , float b = 1)
{
    return l*b;
}

//q2
double power(double n, int p =2)
{
    double ans = 1;
    if (p<0)
    {
       for(int i = 0; i > p ; i--)
        ans/=n;
        return ans;
    }
    
    for(int i = 0; i < p ; i++)
    ans*=n;
    return ans;
}

//q3
inline float cube(float a)
{
    return a*a*a;
}

//q4
float Volume(float a)
{
    return a*a*a;
}

double Volume(double r)
{
    return 4.0/3*22/7*r*r*r;
}

float Volume(float l, float b , float h )
{
    return l*b*h;
}

//q5
class Students
{
    //By default private :
    string Name;
    string Degree;
    string Hostel;

    protected :

    float CurrentCGPA;

    public :
    int RollNo;

    static int studentNumber;
    void addDetails()
    {
        cout << endl << "\nEnter Name : ";
        cin.ignore();
        getline(cin,Name);
        cout << endl << "Enter Roll No. : ";
        cin >> RollNo;
        cout << endl << "Enter Degree : ";
        cin.ignore();
        getline(cin,Degree);
        cout << endl << "Enter Hostel : ";
        cin.ignore();
        getline(cin,Hostel);
        cout << endl << "Enter Current CGPA : ";
        cin >> CurrentCGPA;
        studentNumber++;

    }
    void updateDetails()
    {
        int x;
        cout << endl << "\nUpdate MENU\n\n1 : Name\n2 : Roll No.\n3 : Degree\n4 : Hostel\n5 : Current CGPA\nChoose : ";
        cin >> x;
        if (x==1)
        {
            cout << endl << "\nEnter New Name : ";
            cin.ignore();
            getline(cin,Name);
        }
        else if (x==2)
        {
            cout << endl << "Enter new Roll No. : ";
            cin >> RollNo;
        }
        else if (x==3)
        {
            cout << endl << "Enter new Degree : ";
            cin.ignore();
            getline(cin,Degree);
        }
        else if (x==4)
        {
            cout << endl << "Enter new Hostel : ";
            cin.ignore();
            getline(cin,Hostel);
        }
        else if (x==5)
        {
            cout << endl << "Enter new Current CGPA : ";
            cin >> CurrentCGPA;
        }
        else 
        cout << "\nPlease Enter No. from 1 to 5 only !\n";
    }

    inline void updateCGPA();

    void updateResidentInfo()
    {
        cout << endl << "Enter new Hostel : ";
        cin.ignore();
        getline(cin,Hostel);
    }

    void displaydetails()
    {
        cout << "\n\n~ ~ ~ ~ ~ ~ Details ~ ~ ~ ~ ~ ~\n";
        cout << "Name : " << Name << "\nRoll No. : " << RollNo << "\nDegree : " << Degree << "\nHostel : " << Hostel << "\nCurrent CGPA : " << CurrentCGPA; 
    }

};

void Students::updateCGPA()
{
        cout << endl << "Enter new Current CGPA : ";
        cin >> CurrentCGPA;
}


int Students::studentNumber = 0;

int main()
{
    int ch ;


    do
   {    

    cout << endl << "\n\nPress\n1 : Rect. Area\n2 : Power\n3 : Cube\n4 : Volume\n5 : class Student\n0 : EXIT\nEnter Choice : ";
    cin >> ch ;
    if (ch == 1)
    {
        cout << "\nDefault Case \n" ;
        float l,b,area;
        cout << "Default Area : " << rec_area();

        cout << "\nEnter L : ";
        cin >> l ; 
        cout << "Enter B : ";
        cin >> b ;
        area = rec_area(l,b);
        cout << "Area : " << area << endl;


    }

    else if (ch ==2)
    {double n,ans ; int p  ;
 
    cout << "\nFor Square\nEnter n  : ";
        cin >> n ;
    ans=power(n);
        cout << "\nAns  : " << ans;

    
        cout << endl << "For any integral power\n" << "\nEnter n  : ";
        cin >> n ;
        cout << "\nEnter p  : ";
        cin >> p ;
        ans=power(n,p);
        cout << "\nAns  : " << ans;}

    else if(ch==3)
    {
        float a , ans ; 
        cout << "\nEnter No. : ";
        cin >> a ;
        cout << "Cube  : " << cube(a);
    } 

    else if (ch==4)
    {
        int c;
        do
        {cout << endl << "\n\nPress\n1 : Cube\n2 : Cuboid\n3 : Sphere\nAny other to EXIT\nEnter Choice : ";
        cin >> c ; 

        if(c==1)
        {
        float a ; 
        cout << "\nEnter Side : ";
        cin >> a ;
        cout << "Volume of Cube : " << Volume(a);
        }
        else if (c==2)
        {
        float l,b,h ; 
        cout << "\nEnter L : ";
        cin >> l ;
        cout << "\nEnter B : ";
        cin >> b ;
        cout << "\nEnter H : ";
        cin >> h ;
        cout << "Volume of Cuboid : " << Volume(l,b,h);
        }
        else if(c==3)
        {
        double r ; 
        cout << "\nEnter Radius : ";
        cin >> r ;
        cout << "Volume Of Sphere: " << Volume(r);
        }
        else
        break;}while(c!=0);
        }
    
    else if (ch==5)
    {
        int choic,stu;
        Students a , b ;
        cout << endl << "\nEnter Details of Student A : ";
        a.addDetails();
        cout << endl << "\nEnter Details of Student B : ";
        b.addDetails();
        do{cout << "\nPress\n1 : Update Details\n2 : Update CGPA\n3 : Update Resident Info\n4 : Display Details\n0 : EXIT\nChoose : " ;
        cin >> choic ;
        if(choic==0)
        break;
        cout << "\nPress\n1 : Student A\n2 : Student B\nChoose :";
        cin >> stu;
        if (choic==1 && stu==1)
        a.updateDetails();
        else if (choic==2 && stu==1)
        a.updateCGPA();
        else if (choic==3 && stu==1)
        a.updateResidentInfo();
        else if (choic==4 && stu==1)
        a.displaydetails();


        else if (choic==1 && stu==2)
        b.updateDetails();
        else if (choic==2 && stu==2)
        b.updateCGPA();
        else if (choic==3 && stu==2)
        b.updateResidentInfo();
        else if (choic==4 && stu==2)
        b.displaydetails();}while (choic!=0);

        cout << "\nExtra Experimantatin\n";
       // cout << a.CurrentCGPA; // Would give error as it's protected , cannot be accessed directly in main
        cout << endl << "Displaying Roll No. of B directly : " << b.RollNo;
       // cout << endl << a.Name;  // Would give error as it's protected , cannot be accessed directly in main
        cout << "\nCount of students through static : " << a.studentNumber;



    }

    else if (ch!=0){
        cout << "\n\nInvalid Input !\n";
        continue;
    }
        
    }while (ch!=0);
    return 0;
}