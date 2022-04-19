#include <stdio.h>
#include "DataTx.h"

bool TxBatt_SoC()
{
    for(int snsr_val_read=0;snsr_val_read<50;snsr_val_read++)
    {
        BatParam_val.Temperature = (float)snsr_val_read;
        BatParam_val.Soc = (float)(snsr_val_read*2);
        float BattTemp = BatParam_val.Temperature;
        float BattSoC = BatParam_val.Soc;
        printf("{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n",BattTemp,BattSoC); // print in the console    
    }
    return true;
}
