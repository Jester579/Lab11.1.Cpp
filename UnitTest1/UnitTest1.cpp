#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab11.1.C++/Source.cpp" 
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const char* testFileName = "t.txt";

			int result = CountCommaDashPairs(testFileName);

			int expectedCount = 0;

			Assert::AreEqual(expectedCount, result);
		}
	};
}
