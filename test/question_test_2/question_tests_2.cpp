#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test value paramater")
{
	int p1 = 3;
	val_param(p1);

	REQUIRE(p1 == 3);

	int p2 = 1;
	val_param(p1);

	REQUIRE(p2 == 1);
}

TEST_CASE("test reference paramater")
{
	int p1 = 3;
	ref_param(p1);

	REQUIRE(p1 == 5);

	int p2 = 1;
	ref_param(p2);

	REQUIRE(p2 == 5);
}
