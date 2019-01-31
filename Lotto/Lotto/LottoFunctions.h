
#include <vector>
#include<iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h> 

//check if number is between 1 and 46 inclusive
bool numCheck(int number)
{
	if (number <= 46 && number >= 1)
	{
		return true;
	}
	else
	{
		std::cout << "Number not between 1 and 46" << std::endl;
		return false;
	}
}

bool checkForDuplicate(int number, std::vector<int> &collection)
{
	for (int i = 0; i < collection.size(); i++)
	{
		if (collection.at(i) == number)
		{
			return true;
		}
	}

	collection.push_back(number);
	
	if (collection.size() > 6)
	{
		collection.pop_back();
	}                                                                                                                                                         
	

	return false;
}

void generateLottoNumbers(std::vector<int> & lotto)
{
	srand(time(NULL));

	while (lotto.size() < 6)
	{
		checkForDuplicate(rand() % 46 + 1, lotto);
	}


	std::cout << "The lotto numbers are: ";
	for (int i = 0; i < lotto.size(); i++)
	{
		std::cout << lotto.at(i) << " ";
	}
}

int getMatches(std::vector<int> numbers, std::vector<int> lotto)
{
	int matches = 0;
	for (int i = 0; i < numbers.size(); i++)
	{
		for (int j = 0; j < lotto.size(); j++)
		{
			if (numbers.at(i) == lotto.at(j))
			{
				matches++;
			}
		}
	}
	return matches;
}
