#include "QuestionFactory.h"
 
Question* QuestionFactory::createQuestion()
{
	std::string type;
	std::cin >> type;
	if (type == "YesNo") {
		std::string question;
		std::cin >> question;
		int points;
		std::cin >> points;
		std::string corr;
		std::cin >> corr;
		return new YesNoQuestion(question,points,corr);
	}
	else if (type == "MultipleChoice") {
		std::string question;
		int points;
		std::vector<std::string> statements;
		std::vector<int> bv;
		int numberOfStatements;
		int numberOfAnswers;
		std::cin >> question;
		std::cin >> points;
		std::cin >> numberOfStatements;
		for (int i = 0; i < numberOfStatements; i++)
		{
			std::cin >> statements[i];
		}
		std::cin >> numberOfAnswers;
		for (int i = 0; i < numberOfAnswers; i++)
		{
			std::cin >> bv[i];
		}
		return new MultipleChoiceQuestion(question, points, statements, bv);
	}
	else if (type == "Open") {
		std::string question;
		int points;
		std::cin >> question;
		std::cin >> points;
		return new OpenQuestion(question, points);
	}
}
