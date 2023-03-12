#include "question2.h"
#include <iostream>

using std::cout;

int main()
{
    int p2 = 10;
    val_param(p2);
    std::cout << p2 << "\n";

    int p3 = 10;
    ref_param(p3);
    std::cout << p3 << "\n";

    return 0;
}