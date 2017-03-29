
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              BURNSVIEW ROBOTICS                           */
/*                                                                           */
/*                          98549X VEX Brand Thermite                        */
/*                                                                           */
/*---------------------------------------------------------------------------*/

// Start facing the fence
void auto3()
{
	wait1Msec(10000);
	driveBack(1800);
	driveForward(400);
	driveBack(800);
	driveForward(400);
	driveBack(800);
	toStop();
}


void auto3Turn()
{
	driveBack(1800);
	strafeR(4000);
	motor[Lift] = 118;
	wait1Msec(2500);
	driveForward(400);
	driveBack(800);
	toStop();
}
