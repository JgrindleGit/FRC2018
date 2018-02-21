#include "Elevator.h"
#include "../Robot.h"
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
