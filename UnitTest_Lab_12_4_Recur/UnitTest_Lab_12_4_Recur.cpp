#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_12_4_Recur/Lab_12_4_Recur.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab124Recur
{
	TEST_CLASS(UnitTestLab124Recur)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Elem* L = NULL;
			LAdd(L, L, 3);
			LAdd(L, L, 4);
			LAdd(L, L, 3);
			LAdd(L, L, 3);
			LAdd(L, L, 5);
			LAdd(L, L, 3);
			Assert::AreEqual(LCount(L, L, 3, 0), 4);
		}
	};
}
