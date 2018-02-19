/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Elevator.h"
#include "../RobotMap.h"
#include <iostream>
Elevator::Elevator() : Subsystem("ExampleSubsystem") {

}

void Elevator::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}
void Elevator::Move(double speed){
	if(topLimit->Get()){
		if(speed < 0){
			eDrive->Set(speed);
		}else{
			eDrive->Set(0);
		}
	}else if(botLimit->Get()){
		if (speed > 0){
			eDrive->Set(speed);
		}else{
			eDrive->Set(0);
		}
	}else {
		eDrive->Set(speed);
	}
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
