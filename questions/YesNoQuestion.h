#pragma once
#include "Question.h"

class YesNoQuestion :public Question{
private:
	int points;
public:
	YesNoQuestion(std::string question, int points, std::string corr);
	int grade() const override;
};