#pragma once

using namespace std;

class Number
{
private:
	double firstNum,secondNum;

public:
	double GetFirstNum() { return firstNum; }
	void SetFirstNum(double firstNum) { this->firstNum = firstNum; }
	double GetSecondNum() { return secondNum; }
	void SetSecondNum(double secondNum) { this->secondNum = secondNum; }

	void Init(double firstNum, double secondNUm);
	void Display()const;
	void DisplayRes();
	void Read();

	double Mul(double firstNum, double secondNum);
	double Sub(double firstNum, double secondNum);
};