#include <iostream>
#include "question_4"
//#include "question4.cpp"
using std::cout;
using std::cin;

int main()
{
    int seconds_since_1970;

    cout << "Hello, enter the number to determine the amount of hours, minutes, and seconds. ";
    cin >> seconds_since_1970;

    cout<<"\nThe hours since 1970 : " << get_hours(seconds_since_1970) << "\n";

    cout<<"The minutes since 1970 : " << get_minutes(seconds_since_1970) << "\n";

    cout<<"The seconds since 1970 : " << get_seconds(seconds_since_1970) << "\n\n";
    
    return 0;
}
