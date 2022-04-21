#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "DataRx.h"
#include <stdio.h>

TEST_CASE("Test to check Receiver") 
{ 
    printf(" From the received data, The Maximum, Minimum and Average value of temperature is %.2f %.2f %.2f respectively and Maximum, Minimum and Average value of state of charge is %.2f %.2f %.2f respectively\n",Max.temperature,Min.temperature,Avg.temperature,Max.stateOfCharge,Min.stateOfCharge,Avg.stateOfCharge);

}
