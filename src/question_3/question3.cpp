#include "question3.h"
#include <cmath>



bool test_config()
{
    return true;
}

double get_dna_p_distance(const std::string& dna1, const std::string& dna2)
{
    int count = 0;
    int length = dna1.length();

    for (int i = 0; i < length; i++)
    {
        if (dna1[i] != dna2[i])
        {
            count++;
        }
    }
    double p_distance = static_cast<double>(count) / length;
    p_distance = round(p_distance * 10000) / 10000;

    /*std::ostringstream ss;
    ss.precision(4);
    ss << std::fixed << p_distance;
    std::string p_distance_str = ss.str();*/

    return p_distance;
  

    

}