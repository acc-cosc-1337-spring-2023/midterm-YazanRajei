#include "question_4"
#include <iostream>
using std::cout;
using std::cin;

int get_seconds(int seconds_since_1970)
{
    int leftover_seconds;
    int minutes;

    minutes = seconds_since_1970 / 60;

    leftover_seconds = seconds_since_1970 - (minutes * 60);

    return leftover_seconds;
}

int get_minutes(int seconds_since_1970)
{
    int leftover_minutes;
    float minutes;
    int hours;

    minutes = seconds_since_1970 / 60;

    hours = (seconds_since_1970 / 60) / 60;

    leftover_minutes = minutes - (hours * 60);

    return leftover_minutes;
}

int get_hours(int seconds_since_1970)
{
    int leftover_hours;
    float hours;
    int days;

    hours = (seconds_since_1970 / 60) / 60;

    days = ((seconds_since_1970 / 60) / 60) / 24;

    leftover_hours = hours - (days * 24);

    return leftover_hours;
}
