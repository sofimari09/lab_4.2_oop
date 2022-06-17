#include "pch.h"
#include "CppUnitTest.h"
#include "../Element.h"
#include "../ARprog.cpp"
#include "../GEOprog.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Element* el = new ARprog(0, 5);
			Assert::AreEqual((int)el->element(3), 15);

		}
	};
}
