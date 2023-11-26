#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/ConsoleApplication1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int myArray[23];
			fillArray(myArray);
			for (int i = 0; i < 23; i++) {
				Assert::IsTrue(myArray[i] >= 4 && myArray[i] <= 16);
			}
		}
		TEST_METHOD(TestProcessArray)
		{
			int array[23] = { 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
			int sum = 0;
			int count = 0;
			processArray(array, sum, count);
			Assert::AreEqual(18, count);
			Assert::AreEqual(167, sum);
			for (int i = 0; i < 23; i++)
			{
				if (!(i % 3 == 0 && array[i] % 2 == 0))
				{
					Assert::AreEqual(0, array[i]);
				}
			}
		}
	};
}
