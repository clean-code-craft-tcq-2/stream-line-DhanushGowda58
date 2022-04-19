#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "DataTx.h"


TEST_CASE("Test to check Sender") 
{
  printf("Data checking\n");
  //Read the first and last values of the text file and assert they have been properly added to batteryParameters 
  float expectedBatteryParameters[2][2] = {{3.42, 11.06}, {1.34, 64.52}};

   REQUIRE(BatParam_val[0].Temperature  == expectedBatteryParameters[0][0]);
   REQUIRE(BatParam_val[0].Soc == expectedBatteryParameters[0][1]);

   REQUIRE(BatParam_val[49].Temperature  == expectedBatteryParameters[1][0]);
   REQUIRE(BatParam_val[49].Soc == expectedBatteryParameters[1][1]);
                         

}
