#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test distance calculations")
{
	double result = get_dna_p_distance("GAGCCTACTAACGGGAT","CATCGTAATGACGGCCT");
	REQUIRE(result == .4118);
}

TEST_CASE("Second verification of distance")
{
	double outcome = get_dna_p_distance("GAGCCTACTAACGGGAT","GATCGTAATGACGGCCT");
	REQUIRE(outcome ==  .3529);
}
