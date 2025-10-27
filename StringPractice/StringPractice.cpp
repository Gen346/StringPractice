#include <iostream>
#include <cstring>

std::string StringReverseCpp(const std::string& stringToReverse)
{
	std::string reverseString(stringToReverse.size(), ' ');

	for (int i = 0; i < stringToReverse.size(); ++i)
	{
		reverseString[i] = stringToReverse[stringToReverse.size() - i];
	}

	return reverseString;
}

char* StringReverseC(char* stringToReverse)
{
	int stringSize = strlen(stringToReverse);

	char* start = stringToReverse;

	char* end = stringToReverse + stringSize - 1;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
	}

	return stringToReverse;
}


int main()
{
	std::cout << "Hello World!\n";
}
