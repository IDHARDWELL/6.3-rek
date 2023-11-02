#include "pch.h"
#include "CppUnitTest.h"
#include "../FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int a[n] = { -3,-1,5,-5,0 };
			int sum = Sum(a, n, 0, 0);
			Assert::AreEqual(sum, -9);
		}
	};
}
