#include "MultipleChoiceQuestion.h"

MultipleChoiceQuestion::MultipleChoiceQuestion(std::string question, int points, std::vector<std::string> statements, std::vector<int> bv):Question(question),points{points}
{
	int size = std::min(statements.size(), bv.size());
	statements.resize(size);
	bv.resize(size);
}

int MultipleChoiceQuestion::grade() const
{
	int points = 0;
	int count = 1;
	for (int i = 0; i < bv.size(); i++)
	{
		if (bv[i]) {
			points += this->points / count;
			count++;
		}
	}
	return points;
}
