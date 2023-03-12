#include "question3.h"
#include <iostream>

using std::cout;

int main()
{
    std::string dna1 = "GAGCCTACTAACGGGAT";
    std::string dna2 = "CATCGTAATGACGGCCT";

    double p_distance = get_dna_p_distance(dna1,dna2);

    cout << "The p-distance between "<< dna1 << " and "<< dna2 <<" is "<< p_distance <<"\n";

    return 0;
}