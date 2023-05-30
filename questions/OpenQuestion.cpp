#include "OpenQuestion.h"

OpenQuestion::OpenQuestion(std::string question, int points):Question(question),points{points}
{
}

void OpenQuestion::ask()
{
	std::cout << Question::getQuestion() << std::endl;
	std::cout << points;
	std::cin >> Question::answer;
}

int OpenQuestion::grade() const
{
	if (Question::answer == "") {
		return 0;
	}
	int points;
	std::cin >> points;
	return points;
}
