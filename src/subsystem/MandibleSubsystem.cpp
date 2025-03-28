#include "MandibleSubsystem.h"

MandibleSubsystem::MandibleSubsystem(int indexLeft, int indexRight, ServoHandler &servos)
    : indexLeft(indexLeft),
      indexRight(indexRight),
      servos(servos) {}

void MandibleSubsystem::Begin()
{
    CloseLeft();
    CloseRight();
}

void MandibleSubsystem::Open()
{
    servos.WriteServoAngle(indexLeft, MandibleSubsystem::Positions::LEFT_OPEN);
    servos.WriteServoAngle(indexRight, MandibleSubsystem::Positions::RIGHT_OPEN);
}


void MandibleSubsystem::Close()
{
    servos.WriteServoAngle(indexLeft, MandibleSubsystem::Positions::LEFT_CLOSE);
    servos.WriteServoAngle(indexRight, MandibleSubsystem::Positions::RIGHT_CLOSE);
}