#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "DataTx.h"

FILE* fptr;
int sensorData[NUMBERS_OF_READINGS];

TEST_CASE("Sending data to console")
{
    REQUIRE(BMS_DataSender() == true);
}

TEST_CASE("File is correct")
{
    fptr = fopen("temparatue_sensor.txt","r");
    REQUIRE(readDataFromFile(fptr, sensorData) == true);
}

TEST_CASE("File is corrupted")
{
    fptr = fopen("stateofcharge_sensor.txt","r");
    REQUIRE(readDataFromFile(fptr, sensorData) == false);
}
