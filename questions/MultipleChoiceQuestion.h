#pragma once
#include "YesNoQuestion.h"
#include <vector>

class MultipleChoiceQuestion :public Question {
private:
	std::vector <std::string> statements;
	std::vector <int> bv;
	int points;
public:
	MultipleChoiceQuestion(std::string question, int points, std::vector<std::string> statements, std::vector<int> bv);
	int grade() const override;
};
