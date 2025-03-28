#ifndef MANDIBLESUBSYSTEM_H
#define MANDIBLESUBSYSTEM_H

#include <Arduino.h>
#include "../handler/ServoHandler.h"

int openAngle = 100;
int closeAngle = 0;

class MandibleSubsystem
{
public:
    MandibleSubsystem(int indexLeft, int indexRight, ServoHandler &servos);
    void Begin();
    // void Update();
    void Open();
    void Close();
    void SetState();

    enum Positions : uint8_t
    {
        LEFT_OPEN = openAngle,
        LEFT_CLOSE = closeAngle,
        RIGHT_OPEN = openAngle,
        RIGHT_CLOSE = closeAngle
    };

private:
    int indexLeft;
    int indexRight;
    ServoHandler &servos;
};

#endif