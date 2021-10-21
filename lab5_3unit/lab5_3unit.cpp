#include "pch.h"
#include "CppUnitTest.h"
#include "D:/Університет/АП/Лабораторні/Тема 5/vs/lab5_3/lab5_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab5_3unit
{
	TEST_CLASS(lab5_3unit)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int fk = 3;
			int fp = 2;
			int n = 1;
			int fg = (fk - fp) * (1.) / n;
			Assert::AreEqual(fg, 1);
		}
	};
}
