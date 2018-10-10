#include "main.h"
#include "global.h"
#define threshholdForDriveMotor 10

void TankDriveFourWheel(int speed, int turn){
  if(abs(speed) < threshholdForDriveMotor)
    speed = 0;
  if(abs(turn) < threshholdForDriveMotor)
      turn = 0;
  motorSet(BL, (speed-turn));
  motorSet(TL, (speed-turn));
  motorSet(TR, -1 * (speed+turn));
  motorSet(BR, -1 * (speed+turn));
}
