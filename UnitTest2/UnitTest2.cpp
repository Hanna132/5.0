#include "pch.h"
#include "CppUnitTest.h"
#include "../pr5.1/5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		double k;
          k = p (1.);
       Assert::AreEqual(k, 2, 4189);


		}
	};
}
