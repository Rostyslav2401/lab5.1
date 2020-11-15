#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			const double a = 0;
			const double b = 0;
			c = g(a, b,c);
			Assert::AreEqual(c, 1.);

		}
	};
}
