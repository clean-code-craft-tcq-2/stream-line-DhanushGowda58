#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUMBERS_OF_READINGS    50

extern int TemperatureData[NUMBERS_OF_READINGS];
extern int SOCData[NUMBERS_OF_READINGS];

typedef struct {
  float temperature;
  float stateOfCharge;
} BatteryChargingParameters;

void printToConsole(int batteryData[]);
bool readDataFromFile(FILE* filePtr, int sensorData[]);
bool BMS_DataSender(void);
int writeToFile(void);
