#include "pch.h"
#include "CppUnitTest.h"
#include "../PR1.5/Number.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT15
{
	TEST_CLASS(UT15)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number a;
			a.SetFirstNum(1);
			a.SetSecondNum(1);

			Assert::AreEqual(1.0, a.Mul(1, 1));
		}
	};
}