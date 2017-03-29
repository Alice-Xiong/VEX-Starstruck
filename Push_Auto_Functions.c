
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              BURNSVIEW ROBOTICS                           */
/*                                                                           */
/*                          98549X VEX Brand Thermite                        */
/*                                                                           */
/*---------------------------------------------------------------------------*/


void turnRight(int nTime)
{
	motor[Left1] = 115;
	motor[Left2] = 115;
	motor[Left3] = 115;
	motor[Right1] = -115;
	motor[Right2] = -115;
	motor[Right3] = -115;
	wait1Msec(nTime);
}

void turnRight1(int nTime)
{
	motor[Left1] = 115;
	motor[Left2] = 115;
	motor[Left3] = 115;
	motor[Right1] = 0;
	motor[Right2] = 0;
	motor[Right3] = 0;
	wait1Msec(nTime);
}

void turnLeft(int nTime)
{
	motor[Left1] = -115;
	motor[Left2] = -115;
	motor[Left3] = -115;
	motor[Right1] = 115;
	motor[Right2] = 115;
	motor[Right3] = 115;
	wait1Msec(nTime);
}

void turnLeft1(int nTime)
{
	motor[Left1] = 0;
	motor[Left2] = 0;
	motor[Left3] = 0;
	motor[Right1] = 115;
	motor[Right2] = 115;
	motor[Right3] = 115;
	wait1Msec(nTime);
}

void driveForward(int nTime)
{
	motor[Left1] = 115;
	motor[Left2] = 115;
	motor[Left3] = 115;
	motor[Right1] = 115;
	motor[Right2] = 115;
	motor[Right3] = 115;
	wait1Msec(nTime);
}

void driveBack(int nTime)
{
	motor[Left1] = -115;
	motor[Left2] = -115;
	motor[Left3] = -115;
	motor[Right1] = -115;
	motor[Right2] = -115;
	motor[Right3] = -115;
	wait1Msec(nTime);
}

void toStop(int nTime = 500)
{
	motor[Left1] = 0;
	motor[Left2] = 0;
	motor[Left3] = 0;
	motor[Right1] = 0;
	motor[Right2] = 0;
	motor[Right3] = 0;
	wait1Msec(nTime);
}

void extendArmL(int nTime = 700)
{
	motor[ArmL] = 115;
	wait1Msec(nTime);
}

void extendArmR(int nTime = 800)
{
	motor[ArmR] = 115;
	wait1Msec(nTime);
}

void extendArms(int nTime = 800)
{
	motor[ArmL] = 115;
	motor[ArmR] = 115;
	wait1Msec(nTime);
}

void strafeL(int nTime)
{
  motor[Strafe] = -118;
  wait1Msec(nTime);
}

void strafeR(int nTime)
{
  motor[Strafe] = 118;
  wait1Msec(nTime);
}
