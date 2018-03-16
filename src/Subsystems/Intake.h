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
//#include <iostream>
class Intake : public frc::Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	//double mSpeed = 0.75;
	SpeedController* inLeft = new frc::Spark(kLeftIn);
	SpeedController* inRight = new frc::Spark(kRightIn);

	DigitalInput* dropCheck = new frc::DigitalInput(kDropCheck);
	SpeedController* dropper = new frc::Spark(kDropper);

	bool isDown = false;
public:
	Intake();
	void InitDefaultCommand() override;
	void mIn();
	void mOut();
	void mStop();
	void DropIn();
	void DropStop();
	bool GetDropCheck();
};
