//#include <iostream>
//#include <math.h>
//
//double e = 0.001;
//class Triangle
//{
//private:
//	double a;
//	double b;
//	double c;
//public:
//	void setA(double a) {
//		this->a = a;
//	}
//	void setB(double b) {
//		this->b = b;
//	}
//	void setC(double c) {
//		this->c = c;
//	}
//	bool isRight() {
//		if (abs(a * a + b * b - c * c) < e || abs(b * b + c * c - a * a) < e || abs(a * a + c * c - b * b) < e) {//malkoe shibano sori
//			return true;
//		}
//		return false;
//	}
//	bool isIsosceles() {
//		if (a == b || b == c || a == c) {
//			return true;
//		}
//		return false;
//	}
//	double getArea() {
//		double p = (a + b + c) / 2;
//		return sqrt(p * (p - a)*(p - b)*(p - c));
//	}
//	double getP() {
//		return a + b + c;
//	}
//	double getHeight(double side) {
//		return (2 * getArea()) / side;
//	}
//	double getRadius() {
//		return (2 * getArea()) / getP();
//	}
//
//};
//
//
//
//int main() {
//	Triangle t;
//	t.setA(14);
//	t.setB(10);
//	t.setC(8);
//	std::cout << t.getArea() << std::endl;
//	std::cout << t.getP() << std::endl;
//	std::cout << t.getRadius();
//}