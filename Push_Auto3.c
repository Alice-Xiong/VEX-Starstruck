
void auto3()
{
	wait1Msec(10000);
	driveBack(1800);
	strafeR(4000);
	motor[Lift] = 118;
	wait1Msec(4000);
	driveBack(800);
	toStop();
}


void auto3Turn()
{
  toStop();
}
