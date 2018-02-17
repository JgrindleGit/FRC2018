/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Subsystem.h>
#include <WPILib.h>
#include "../RobotMap.h"
class DriveT : public frc::Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	frc::Spark lDrive{kLeftDr};
	frc::Spark rDrive{kRightDr};

	bool defined;
public:
	DriveT();
	void InitDefaultCommand() override;

	void SetMot(double pwr,int mot);
	double Constrain(double,double,double);
	void JoyDr(double dr,double tr);
};

