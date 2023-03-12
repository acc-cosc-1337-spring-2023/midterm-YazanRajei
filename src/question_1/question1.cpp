#include "question1.h"
#include <iostream>
using std::cout; using std::cin;
bool test_config()
{
    return true;
}

void run_fib_number()
{   
    auto choice = 0;
    do
    {
        
        cout<<"Please enter a number 1-15. Or 0 to Exit\n ";
        cin>>choice;
        if (choice == 0)
        {
            cout<<"Exiting...\n";
            return;
        }

        get_fib_number(choice);

    }while(choice >= 1 || choice <= 15);
}
    
    
int get_fib_number(int input)
{
    int num1 = 0;
    int num2 = 1;
    int fib_term;
   

   for (int i = 2; i <= input; i++)
   {
        fib_term = num1 + num2;
        num1 = num2;
        num2 = fib_term;

   }
   cout << fib_term << "\n";
   return fib_term;
    

}
