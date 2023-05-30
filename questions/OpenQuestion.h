#pragma once
#include "Question.h"

class OpenQuestion :public Question {
private:
	int points;
public:
	OpenQuestion(std::string question, int points);
	void ask() override;
	int grade() const override;
};