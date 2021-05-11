#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab7.2/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest72
{
	TEST_CLASS(UnitTest72)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::list<int> a = { 7, 10, 1, 10, 8, 45, 10, 10, 10, 27, 3 };
			del_after(a, 10);
			std::list<int>::iterator iter = a.begin();
			Assert::AreEqual(*iter++, 7);
			Assert::AreEqual(*iter++, 10);
			Assert::AreEqual(*iter++, 10);
			Assert::AreEqual(*iter++, 45);
			Assert::AreEqual(*iter++, 10);
			Assert::AreEqual(*iter++, 3);
		}
	};
}
