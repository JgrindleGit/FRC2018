#pragma once

#include <Commands/Command.h>

class TeleEle : public frc::Command {
public:
	TeleEle();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};
