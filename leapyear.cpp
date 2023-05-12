#include <stdio.h>
#include <stdbool.h>

bool checkYear(int year)
{
	if (year % 400 == 0)
		return true;

	if (year % 100 == 0)
		return false;

	if (year % 4 == 0)
		return true;
	return false;
}
int main()
{
	int year = 2000;

	checkYear(year)? printf("Leap year"):
					printf("Not a Leap Year");
	return 0;
}
