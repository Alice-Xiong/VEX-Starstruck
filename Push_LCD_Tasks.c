
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              BURNSVIEW ROBOTICS                           */
/*                                                                           */
/*                          98549X VEX Brand Thermite                        */
/*                                                                           */
/*---------------------------------------------------------------------------*/


task tAutoSelection
{
	int nLastLCDBtn = 0;

	while (true)
	{
		bLCDBacklight = true;
		clearLCDLine(0);
		clearLCDLine(1);
		displayLCDPos(0,0);
		displayNextLCDString("Select an auto:");
		displayLCDPos(1,0);
		displayNextLCDString(autoNames[nAutoModes]);

		switch (nLCDButtons)
		{
		case 1:
			if (nLastLCDBtn != nLCDButtons && nAutoModes > 0)
				nAutoModes--;
			else if (nLastLCDBtn != nLCDButtons && nAutoModes == 0)
				nAutoModes = Num_Of_Auto_Modes;
			break;

		case 4:
			if (nLastLCDBtn != nLCDButtons && nAutoModes < Num_Of_Auto_Modes)
				nAutoModes++;
			else if (nLastLCDBtn != nLCDButtons && nAutoModes == Num_Of_Auto_Modes)
				nAutoModes = 0;
			break;

		default:
			break;
		}

		nLastLCDBtn = nLCDButtons;
		wait1Msec(25);
	}
}


task tDriverLCD()
{
  while (true)
  {
    bLCDBacklight = true;
		clearLCDLine(0);
		clearLCDLine(1);
		displayLCDPos(0,0);
		displayNextLCDString("Battery:");
		displayLCDPos(1,0);
		displayNextLCDNumber(nAvgBatteryLevel);

		wait1Msec(25);
  }
}
