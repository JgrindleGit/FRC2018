#pragma once

#include <Commands/Command.h>

class IntakeOut : public frc::Command {
public:
	IntakeOut();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};
