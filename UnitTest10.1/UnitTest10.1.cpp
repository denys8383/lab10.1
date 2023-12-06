#include "pch.h"
#include "CppUnitTest.h"
#include "../Project10.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101
{
	TEST_CLASS(UnitTest101)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char fname[] = "t";
			int result = ProcessTXT1(fname);
			Assert::AreEqual(0, result);
		}
	};
}
