#include "Number.h"
#include <iostream>

using namespace std;

void Number::Init(double firstNum, double secondNum)
{
	SetFirstNum(firstNum);
	SetSecondNum(secondNum);
}

void Number::Display()const
{
	cout << endl;
	cout << "First Number = " << firstNum << endl;
	cout << "Second Number = " << secondNum << endl;
	cout << endl;
}

void Number::DisplayRes()
{
	cout << firstNum << " * " << secondNum << " = " << Mul(firstNum, secondNum) << endl;
	cout << firstNum << " - " << secondNum << " = " << Sub(firstNum, secondNum) << endl;
}

void Number::Read()
{
	double firstNum, secondNum;

	cout << "First Number = ";
	cin >> firstNum;
	cout << "Second Number = ";
	cin >> secondNum;

	Init(firstNum, secondNum);
}

double Number::Mul(double firstNum, double secondNum)
{
	return firstNum * secondNum;
}

double Number::Sub(double firstNum, double secondNum)
{
	return firstNum - secondNum;
}