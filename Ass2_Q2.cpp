#include <iostream>

using namespace std ;

int main()
{
    float total = 0 , price, discount = 0  ;
    do 
    {
        cout << endl << "Enter item price (0 to checkout) : " ;
        cin >> price ;
        if (price < 0) 
        {
            cout << "\nInvalid price ! Skipped. \n";
            continue;
        }
        else if (price==0)
            break;
        else
        total += price ;
    } while( price != 0 ); 
    if (total > 5000)
    discount = total*0.1 ;
    cout << "\n\nTotal Bill (before discount): Rs. " << total << "\nDiscount Applied: Rs.  " << discount << "\nFinal Bill: " << total - discount ;
    return 0;
}