#include "Triple.h"
int main() {
	Triple<int> t(1, 2, 3);
	Triple<double> t2 = Triple<double>::make_triple(2.3, 0, 6.6);
	Triple<double> t3 = Triple<double>::make_triple(2.3,-1,3);
	Triple<double> t4 = Triple<double>::make_triple(2.3,2,3);
	std::cout << std::boolalpha << (t3 == t4) <<std::endl;
	std::vector<Triple<double>> triples;
	triples.push_back(t2);
	triples.push_back(t3);
	triples.push_back(t4);
	Triple<double>::sort(triples);
}