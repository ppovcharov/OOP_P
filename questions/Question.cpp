#include "Question.h"
Question::Question(std::string question, std::string ans):question{question},correctAnswer{ans}
{
}

void Question::print()
{
	std::cout << question << std::endl;
}

void Question::ask()
{
	print();
	std::cin >> answer;
}

bool Question::validYesNoAnswer(const std::string& ans)
{
	return ans=="yes"||ans=="no";
}

bool Question::correctYesNoAnswer(const std::string& ans, bool correct_is_yes)
{
	return (correct_is_yes == true && ans == YES) || (correct_is_yes == false && ans == NO);
}

std::string Question::getAnswer() const
{
	return answer;
}

std::string Question::getCorrectAnswer() const
{
	return correctAnswer;
}

std::string Question::getQuestion() const
{
	return question;
}
