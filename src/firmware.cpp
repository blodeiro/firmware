#include "firmware.h"

double pulsesToDegrees(int pulses)
{
    return double(pulses) * 4096 / 360;
}