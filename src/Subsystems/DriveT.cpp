/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "DriveT.h"
#include "../RobotMap.h"
#define max(x, y) (((x) > (y)) ? (x) : (y))

DriveT::DriveT() : frc::Subsystem("driveT") {

}

void DriveT::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void DriveT::SetLMot(double pwr){
	lDrive.Set(pwr);
}
void DriveT::SetRMot(double pwr){
	rDrive.Set(pwr);
}
double DriveT::Constrain(double lower, double num, double high){
	if(num<lower){
		num = lower;
		return num;
	}else if (num> high){
		num = high;
		return num;
	}
	else{
		return num;
	}
}
void DriveT::JoyDr(double dr,double tr){
	double lVal;
	double rVal;
	if(dr>0.0){
		if(tr>0.0){
			lVal = dr -tr;
			rVal = max(dr,tr);
		}else{
			lVal = max(dr,-tr);
			rVal = dr +tr;
		}
	}
	else{
		if(tr>0.0){
			lVal = -max(-dr,tr);
			rVal = dr+tr;

		}
		else
		{
			lVal = dr-tr;
			rVal = max(-dr,-tr);
		}
	}
	SetLMot(lVal);
	SetRMot(rVal);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
