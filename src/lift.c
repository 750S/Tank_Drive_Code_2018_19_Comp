#include "main.h"
#include "global.h"

#define threshholdForLiftMotor 5

void twoBarLift(int speed){
  if(abs(speed) < threshholdForLiftMotor)
    speed = 0;
  motorSet(ARML, speed);
  motorSet(ARMR, -1 * speed);
}
