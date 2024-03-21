#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP2.6/Date.h"
#include "../OOP2.6/Date.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest26
{
	TEST_CLASS(UnitTest26)
	{
	public:

		TEST_METHOD(TestLessThanOperator)
		{
			Date::Triad triad1(1, 2, 3);
			Date::Triad triad2(4, 5, 6);

			Assert::IsTrue(triad1 < triad2); // перевірка, чи виконується triad1 < triad2
		}
	};
}