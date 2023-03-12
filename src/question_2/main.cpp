#include "question2.h"
#include <iostream>

using std::cin; using std::cout;

bool test_config()
{
    return true;
}


 

int get_fib_number(int num)
{
   int num1 = 0;
   int num2 = 1 ;
   int next_term = 0;
    
         if(num < 2) 
            return num;

        for(int i = 1; i < num; i++)
        {
            next_term = num1 + num2;
            num1 = num2;
            num2 = next_term;
        }
        return next_term;
}


void menu()
{
    cout << "1- Fib sequence \n";
    cout << "2- Exit program  \n";
}

void display_get_fib_number()
{
    auto option = 0;
do
    {
        menu();
       
        cout << "Enter number: ";
        cin >> option;
        handle_menu_option(option);
       

    } while ( option >= 1 || option <=15 || option == 0);
}


void handle_menu_option(int option)
{

    auto number = 0;

   switch (option)
    {
        case 1:
            cout << "Enter a number: ";
            cin >> number;
            cout << get_fib_number(number) << "\n";
            break;

        case 2:
            cout << "Exiting Program... ";
            abort();
            break;

        default:
        cout << "Invalid number!\n";

}

}
