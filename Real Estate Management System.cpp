#include <iostream>
#include <string>

using namespace std;

class Property 
{
    //by default private :
    unsigned int propertyID;
    string propertyType;
    double price;
    bool isAvailable;

    public :
    void setDetails(int id, string type, double p,bool avail=true)
    {
        propertyID=id;
        propertyType=type;
        price=p;
        isAvailable=avail;
    }
    void updatePrice(double newPrice)
    {
        price=newPrice;
    }
    void markAsSold() 
    {
        isAvailable=false;
    }
    void display()
    {
        string avail = isAvailable?"Yes":"No";
        cout << endl << "\nProperty ID : " << propertyID
        << "\nProperty Type : " << propertyType
        << "\nPrice : " << price
        << "\nAvailablity : " << avail;
    }
};

int main()
{
    cout << endl << "~ ~ ~ ~ ~ ~ ~ ~ Real Estate Management System ~ ~ ~ ~ ~ ~ ~ ~";
    
    Property p1,p2;
    int id1,id2; 
    string type1,type2; 
    double pr1,pr2;
    bool avail1,avail2;

    cout << "\n\nProperty 1\nProperty ID : ";
    cin >> id1;
    cout << "\nProperty Type : ";
    cin >> type1 ;
    cout << "\nProperty Price : ";
    cin >> pr1;
    p1.setDetails(id1,type1,pr1);

    label : 
    cout << "\n\nProperty 2\nProperty ID : ";
    cin >> id2;
    while(id1==id2)
    {cout << "\nProperty ID can't be duplicated";
        goto label;
    }
    cout << "\nProperty Type : ";
    cin >> type2 ;
    cout << "\nProperty Price : ";
    cin >> pr2;
    p2.setDetails(id2,type2,pr2);
    
    cout << "\n\nInitial Details\n" ;
    p1.display();
    p2.display();

    cout << "\nEnter New Price of 1st Property : ";
    cin >> pr1;
    p1.updatePrice(pr2);

    cout << "\nPress Any Key and Enter to Change the Status of 2nd Property : ";
    cin >> type2;
    p2.markAsSold();

    cout << "\nUpdated Details\n";
    p1.display();
    p2.display();



    return 0;
}