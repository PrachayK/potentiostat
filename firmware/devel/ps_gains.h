#ifndef PS_GAINS_H
#define PS_GAINS_H

namespace ps
{
    enum VoltGain // Analog output voltage scaling factor 
    {
        VoltGain1X,   // [-1V,  +1V]   w/ default resisotors
        VoltGain2X,   // [-2V,  +2V]
        VoltGain5X,   // [-5V,  +5V]
        VoltGain10X,  // [-10V  +10V]
    };

    enum CurrGain // TransImpedance Amplifiler Current gain path
    {
        CurrGainPathIn1 = 0,  // [-1uA,    +1uA]    w/ default resistors
        CurrGainPathIn2 = 1,  // [-10uA,   +10uA]   
        CurrGainPathIn3 = 2,  // [-100uA,  +100uA]  
        CurrGainPathIn4 = 3,  // [-1000uA, +1000uA] 
        CurrGainPathErr = 4   // Incorrect path setting
    };

}
#endif
