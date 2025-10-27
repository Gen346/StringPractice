#include <iostream>
#include <cstring>
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

	std::cout << "Enter a string to reverse: ";
	
	std::string input = "";

	std::getline(std::cin, input);

	std::cout << StringReverseCpp(input);
}
