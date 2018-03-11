
#pragma once

#include <Commands/Subsystem.h>
#include "../RobotMap.h"
#include <WPILib.h>
class Elevator : public frc::Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	SpeedController* eDrive = new frc::Spark(kLift);
	DigitalInput* botLimit = new frc::DigitalInput(kBotLim);
	DigitalInput* topLimit1 = new frc::DigitalInput(kTopLim1);
	DigitalInput* topLimit2 = new frc::DigitalInput(kTopLim2);
public:
	Elevator();
	void InitDefaultCommand() override;
	void Move(double speed);
	void SetDrive(double speed);
	bool GetTopLim();
};
