#pragma once
#include <iostream>
#include "Number.h"

using namespace std;

class Real
{
private:
	double KorStep;
	int PiStep;
	double RandNum;
	Number number;

public:
	double GetKorStep() { return KorStep; }
	int GetPiStep() { return PiStep; }
	double GetRandNum() { return RandNum; }
	Number GetNumper(){ return number; }

	void SetKorStep(double KorStep) { this->KorStep = KorStep; }
	void SetPiStep(int PiStep) { this->PiStep = PiStep; }
	void SetRandNum(int RandNum) { this->RandNum = RandNum; }
	void SetNumber(Number number) { this->number = number; }

	void Init(double KorStep, int PiStep, double RandNum, Number number);
	void Display()const;
	void DisplayRes();
	void Read();

	double Root(double KorStep, double RandNum);
	double DegPi(int PiStep);
};