#pragma once
#include <iostream>
#include <string>

class Question {
private:
	std::string question;
	std::string correctAnswer;
protected:
	std::string answer;
public:
	Question(std::string question, std::string ans="");
	void print();
	virtual void ask();
	virtual int grade() const=0;
	static bool validYesNoAnswer(const std::string& ans);
	static bool correctYesNoAnswer(const std::string& ans, bool correct_is_yes);
	static const std::string YES;
	static const std::string NO;
	std::string getAnswer() const;
	std::string getCorrectAnswer() const;
	std::string getQuestion() const;
};