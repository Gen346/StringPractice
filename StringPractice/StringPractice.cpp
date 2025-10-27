#include <cstring>
#include <iostream>
#include <string>


std::string StringReverseCpp(const std::string& stringToReverse)
{
	std::string reverseString(stringToReverse.size(), ' ');

	for (int i = 0; i < stringToReverse.size(); ++i)
	{
		reverseString[i] = stringToReverse[stringToReverse.size() - 1 - i];
	}

	return reverseString;
}

std::string ToUpper(const std::string& stringToUpper)
{
	std::string upperString(stringToUpper.size(), ' ');

	for (int i = 0; i < stringToUpper.size(); ++i)
	{
		if ((int)stringToUpper[i] > 96 && (int)stringToUpper[i] < 123)
		{
			upperString[i] = (int)stringToUpper[i] - 32;
		}
		else
		{
			upperString[i] = stringToUpper[i];
		}
	}
	return upperString;
}

std::string ToLower(const std::string& stringToLower)
{
	std::string lowerString(stringToLower.size(), ' ');

	for (int i = 0; i < stringToLower.size(); ++i)
	{
		if ((int)stringToLower[i] > 64 && (int)stringToLower[i] < 91)
		{
			lowerString[i] = (int)stringToLower[i] + 32;
		}
		else
		{
			lowerString[i] = stringToLower[i];
		}
	}
	return lowerString;
}

char* StringReverseC(char* stringToReverse)
{
	int stringSize = strlen(stringToReverse);

	char* start = stringToReverse;

	char* end = stringToReverse + stringSize - 1; // stringToReverse + stringSize = '\0'; stringToReverse + stringSize - 1 = actual end

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		++start;
		--end;
	}

	return stringToReverse;
}


int main()
{

	/*std::cout << "Enter a string to reverse: ";

	std::string input = "";

	std::getline(std::cin, input);

	std::cout << StringReverseCpp(input);*/

	/*std::cout << "Enter a string to upper: ";
	std::string input = " ";
	std::getline(std::cin, input);
	std::cout << ToUpper(input) << std::endl;*/

	std::cout << "Enter a string to upper: ";
	std::string input = " ";
	std::getline(std::cin, input);
	std::cout << ToLower(input) << std::endl;
}
