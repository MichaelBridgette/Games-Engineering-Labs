// Lotto.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include<iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include"LottoFunctions.h"


int main()
{
	int num1, num2, num3, num4, num5,num6;
	std::vector<int> myNumbers;
	std::vector<int> lottoNumbers;
	while (true)
	{
		std::cout << "Enter 6 numbers" << std::endl;

		while (true)
		{
			std::cout << "Enter your first number" << std::endl;
			std::cin >> num1;
			if (!std::cin) {
				std::cout << "Bad value!" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}


			//first num cant be a dup so just push
			if (numCheck(num1) == true)
			{
				myNumbers.push_back(num1);
				break;
			}
			
		}
		while (true)
		{
			std::cout << "Enter your second number" << std::endl;
			std::cin >> num2;
			if (!std::cin) {
				std::cout << "Bad value!" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			if (numCheck(num2)==true)
			{
				if (checkForDuplicate(num2, myNumbers) == false)
				{
					break;
				}
				else
				{
					std::cout << "Try again, no duplicate numbers allowed" << std::endl;
				}
			}
		}
		while (true)
		{
			std::cout << "Enter your third number" << std::endl;
			std::cin >> num3;
			if (!std::cin) {
				std::cout << "Bad value!" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			if (numCheck(num3)==true)
			{
				if (checkForDuplicate(num3, myNumbers) == false)
				{
					break;
				}
				else
				{
					std::cout << "Try again, no duplicate numbers allowed" << std::endl;
				}
			}
		}
		while (true)
		{
			std::cout << "Enter your fourth number" << std::endl;
			std::cin >> num4;
			if (!std::cin) {
				std::cout << "Bad value!" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			if (numCheck(num4)==true)
			{
				if (checkForDuplicate(num4, myNumbers) == false)
				{
					break;
				}
				else
				{
					std::cout << "Try again, no duplicate numbers allowed" << std::endl;
				}
			}
		}
		while (true)
		{
			std::cout << "Enter your fifth number" << std::endl;
			std::cin >> num5;
			if (!std::cin) {
				std::cout << "Bad value!" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			if (numCheck(num5)==true)
			{
				if (checkForDuplicate(num5, myNumbers) == false)
				{
					break;
				}
				else
				{
					std::cout << "Try again, no duplicate numbers allowed" << std::endl;
				}
			}
		}
		while (true)
		{
			std::cout << "Enter your sixth number" << std::endl;
			std::cin >> num6;
			if (!std::cin) {
				std::cout << "Bad value!" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			if (numCheck(num6)==true)
			{
				if (checkForDuplicate(num6, myNumbers) == false)
				{
					break;
				}
				else
				{
					std::cout << "Try again, no duplicate numbers allowed" << std::endl;
				}
			}
		}

		std::cout << "Your numbers are: ";
		for (int i = 0; i < myNumbers.size(); i++)
		{
			std::cout << myNumbers.at(i)<< " ";
		}



		system("PAUSE");

		generateLottoNumbers(lottoNumbers);

		/*for (int i = 1; i < 7; i++)
		{
			lottoNumbers.push_back(i);
		}*/

		system("PAUSE");

		int matches = getMatches(myNumbers, lottoNumbers);

		std::cout << "You got " << matches<< " matching numbers"<<std::endl;

		if (matches == 6)
		{
			std::cout << "Congratulations!!! You Won The Lottery!" << std::endl;
		}
		else
		{
			std::cout << "Better Luck Next Time!" << std::endl;
		}
		system("PAUSE");
		break;
	}
}

