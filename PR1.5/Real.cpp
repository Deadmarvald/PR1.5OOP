#include "Real.h"
#include <math.h>
#define M_PI 3.14159265358979323846

void Real::Init(double KorStep, int PiStep, double RandNum, Number number)
{
	SetKorStep(KorStep);
	SetPiStep(PiStep);
	SetRandNum(RandNum);
	SetNumber(number);
}

void Real::Display()const
{
	cout << endl;
	cout << "Degree of root = " << KorStep << endl;
	cout << "Degree of the number pi = " << PiStep << endl;
	cout << "Random number under the root = " << RandNum << endl;
	number.Display();
	cout << endl;
}

void Real::DisplayRes()
{
	cout << endl;
	cout << "The root of the " << KorStep << "th degree of a "
		 << RandNum << " = " << Root(KorStep, RandNum) << endl;
	cout << PiStep << " degree of the number pi = " << DegPi(PiStep) << endl;
	number.DisplayRes();
	cout << endl;
}

void Real::Read()
{
	double KorStep;
	int PiStep, RandNum;
	Number number;

	cout << endl;
	cout << "Degree of root = ";
	cin >> KorStep;
	cout << "Degree of the number pi = ";
	cin >> PiStep;
	cout << "Random number under the root = ";
	cin >> RandNum;
	number.Read();
	cout << endl;

	Init(KorStep, PiStep, RandNum, number);
}

double Real::Root(double KorStep, double RandNum)
{
	return pow(RandNum, (1. / KorStep));
}

double Real::DegPi(int PiStep)
{
	return pow(M_PI, PiStep);
}