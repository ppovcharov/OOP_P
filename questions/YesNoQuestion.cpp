#include "YesNoQuestion.h"

YesNoQuestion::YesNoQuestion(std::string question, int points, std::string corr):Question(question,corr),points{points}
{

}

int YesNoQuestion::grade() const
{
	if (Question::getAnswer() == Question::getCorrectAnswer()) {
		return points;
	}
	return 0;
}
