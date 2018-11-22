#include "stdafx.h"
#include "CppUnitTest.h"
#include"../Lotto/LottoFunctions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestForDuplicate)
		{
			// TODO: Your test code here
			std::vector<int> coll;
			coll.push_back(1);

			Assert::AreEqual(checkForDuplicate(1, coll), true);
		}
		TEST_METHOD(TestForDuplicate2)
		{
			// TODO: Your test code here
			std::vector<int> coll;
			coll.push_back(1);
			coll.push_back(2);
			coll.push_back(3);

			Assert::AreEqual(checkForDuplicate(4, coll), false);
		}
		TEST_METHOD(NumberBoundaryCheck)
		{
			int myNum = 600000000;

			Assert::AreEqual(numCheck(myNum), false);
		}
		TEST_METHOD(NumberBoundaryCheck2)
		{
			int myNum = -600000000;

			Assert::AreEqual(numCheck(myNum), false);
		}
		TEST_METHOD(NumberBoundaryCheck3)
		{
			int myNum = 12;

			Assert::AreEqual(numCheck(myNum), true);
		}

		TEST_METHOD(NumberMatchCheck)
		{
			std::vector<int> myNumbers;
			std::vector<int> lotto;

			myNumbers.push_back(1);
			myNumbers.push_back(2);
			myNumbers.push_back(3);

			lotto.push_back(1);
			lotto.push_back(2);
			lotto.push_back(3);

			Assert::AreEqual(getMatches(myNumbers, lotto), 3);
		}
		TEST_METHOD(NumberMatchCheck2)
		{
			std::vector<int> myNumbers;
			std::vector<int> lotto;

			myNumbers.push_back(1);
			myNumbers.push_back(2);
			myNumbers.push_back(3);

			lotto.push_back(4);
			lotto.push_back(5);
			lotto.push_back(6);

			Assert::AreEqual(getMatches(myNumbers, lotto), 0);
		}
		TEST_METHOD(NumberMatchCheck3)
		{
			std::vector<int> myNumbers;
			std::vector<int> lotto;

			myNumbers.push_back(1);
			myNumbers.push_back(2);
			myNumbers.push_back(3);

			lotto.push_back(3);
			lotto.push_back(4);
			lotto.push_back(5);

			Assert::AreEqual(getMatches(myNumbers, lotto), 1);
		}
		TEST_METHOD(LottoGenNumCount)
		{
			std::vector<int> lotto;
			generateLottoNumbers(lotto);
		
			int size = lotto.size();
			Assert::AreEqual(size , 6);
		}
		TEST_METHOD(LottoGenBoundaryCheck)
		{
			std::vector<int> lotto;
			generateLottoNumbers(lotto);

			for (int i = 0; i < lotto.size(); i++)
			{
				Assert::AreEqual(numCheck(lotto.at(i)), true);
			}
		}
	};
}