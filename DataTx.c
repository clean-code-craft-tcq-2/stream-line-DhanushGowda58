#include <stdio.h>
#include "DataTx.h"

void Transmitting(BatParam_val)
{
    float BattTemp = BatParam_val.Temperature;
    float BattSoC = BatParam_val.Soc;
    printf("{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n",BattTemp,BattSoC); // print in the console
    
}

int main()
{
    for(int snsr_val_read=0;snsr_val_read<50;snsr_val_read++)
    {
        BatParam_val.Temperature = (float)snsr_val_read;
        BatParam_val.Soc = (float)(snsr_val_read*2);
        
        Transmitting(BatParam_val);        
    }
    return 0;
}
