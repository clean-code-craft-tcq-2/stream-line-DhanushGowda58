#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "DataTx.h"

TEST_CASE("Sending data to console")
{
    REQUIRE(Temp_SoC_Data() == true);
}
