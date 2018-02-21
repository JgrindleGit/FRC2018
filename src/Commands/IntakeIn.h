#pragma once

#include <Commands/Command.h>

class IntakeIn : public frc::Command {
public:
	IntakeIn();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};
