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
	if(GetTopLim()){
		printf("TopLimGot");
		if(speed < 0){
			SetDrive(speed);
			//printf("ESpeed: %f", speed);
		}else{
			SetDrive(0);
			//printf("ESpeed: %f", speed);
		}
	}else if(botLimit->Get()){
		printf("BotLimGot");
		if (speed > 0){
			SetDrive(speed);
			//printf("ESpeed: %f", speed);
		}else{
			SetDrive(0);
			//printf("ESpeed: %f", speed);
		}
	}else {
		SetDrive(speed);
		//printf("ESpeed: %f", speed);
	}
}
void Elevator::SetDrive(double speed){
	eDrive->Set(speed);
	printf("Espeed: %f \n", speed);
}
bool Elevator::GetTopLim(){
	if(topLimit1->Get() && topLimit2->Get()){
		return true;
	}
	else {
		return false;
	}
}
