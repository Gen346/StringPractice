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

	char str[6] = {'H', 'e', 'l','l','o','\0'};
	std::string hello = "Hello";

	StringReverseC(str);

	std::cout << str << std::endl;

}
