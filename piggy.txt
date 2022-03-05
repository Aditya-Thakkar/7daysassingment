#include<iostream>
#include<stdio.h>

using namespace std;
class amount
{
    public:
    
        int amt=50;
        amount()
        {
            cout<<"Amount is:"<<amt << "\n";
        }
        amount(int a)
        {
            if(amt<100)
            {
                amt=amt+a;
                cout << "Amount is:"<<amt << "\n";
            }
        }
};

int main()
{
    amount aaa,aa(2);
    return 0;
}