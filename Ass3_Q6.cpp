#include <iostream>
#include <string>

using namespace std;

class Student
{
    // by default private :
    string name;
    float marks[5];
    string subjects[5]={"Python","Data Science","C Programming","DSA","Cryptography"};
    public : 
    int roll_number;

    void add_details()
    {
        cout << endl << "Name : ";
        getline(cin,name);
        
        cout << endl << "Roll  No. : ";
        cin >> roll_number;

        

        for(int i=0 ; i<5 ; i++)
        {
            cout << endl << subjects[i] << " : ";
            cin >> marks[i];
        }
        cin.ignore();
    }

    float calculate_average()
    {
        float avg=0;

        for(float i : marks)
        avg+=i;

        avg/=5;
        return avg;
    }

    char get_grade()
    {

        float avg = calculate_average();
        if(avg >= 90 )
            return 'O';

        else if(avg >= 80 )
            return 'A';

        else if(avg >= 70 )
            return 'B';

        else if(avg >= 60 )
            return 'C';

        else if(avg >= 45 )
            return 'D';

        else 
            return 'F';
    }

    void performance_report()
    {
        cout << endl << "~ ~ ~ ~ ~ ~ ~ Performance Report ~ ~ ~ ~ ~ ~ ~";
        cout <<  "\n\nName : " << name;
        cout <<  "\nRoll No. : " << roll_number;
        cout <<  "\nAverage Marks : " << calculate_average();
        cout <<  "\nGrade : " << get_grade();
    }
};

Student students[5];

int main()
{
   cout <<endl <<  "~ ~ ~ ~ ~ Student Performance Management System ~ ~ ~ ~ ~\n\n";

   cout << "Enter Details of Students \n\n";

   for (Student &i : students )
   {
       cout  << endl ;
        i.add_details();
   }    
   
   for (int i=0 ; i<5 ; i++ )
   {
        for(int j=0 ; j<5 ; j++)
        {
            if (i!=j && students[i].roll_number == students[j].roll_number )
            {
                cout << "\n\nRoll Numbers can't be Duplicated";
                return 1;
            }
        }
   }     

   for (Student &i : students )
   {
        i.performance_report();
   }     

    return 0;
}