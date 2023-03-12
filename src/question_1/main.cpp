#include "question1.h"

using std:: cin; using std::cout; 
int main()
{

int n;
    char choice = 'y';

    while (choice == 'y') 
    {
        cout << "Enter a positive integer between 1 and 15: ";
        cin >> n;

        while (n < 1 || n > 15) {
            cout << "Invalid input. Please enter a positive integer between 1 and 15: ";
            cin >> n;
        }

        string sequence = get_fib_sequence(n);
        cout << "The Fibonacci sequence up to " << n << " is: " << sequence << "\n";

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
        
    }

    return 0;
    }
