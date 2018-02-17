
#pragma once

#include <Commands/Command.h>
#include <Commands/Scheduler.h>
#include <IterativeRobot.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SmartDashboard.h>

//#include "Commands/Autonomous.h"
#include "OI.h"
#include "Subsystems/DriveT.h"


class Robot : public frc::IterativeRobot {
public:
	static DriveT dTrain;

	static OI oi;

private:
	//Autonomous m_autonomousCommand;
	frc::LiveWindow& m_lw = *frc::LiveWindow::GetInstance();

	void RobotInit() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;
};
