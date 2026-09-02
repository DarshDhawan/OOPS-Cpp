#include <iostream>

using namespace std;

class theclass
{
    //by default private :

    static int var2;
    void private_fn()
    {
        cout << "\nHi ! I'm in Private member function";
    }
    public:
        static void public_fn()
        {
            cout << "\nYo ! I'm inside Public Member Function.";
            cout <<  "\nHere I accessed private data member inside Public Member fn  \n";
            cout << "var2 is : "  << var2;
        }
};

int theclass::var2=2;

int main()
{

    theclass::public_fn();
    return 0;
}