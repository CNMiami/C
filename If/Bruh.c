#include <stdio.h>


int main()
{
	int choice = 1;
	int YES_OPTION = 1;
	int NO_OPTION = 2;

	printf("Is this a bruh moment?\n");
	printf("[%i] Yes\n", YES_OPTION );
	printf("[%i] No\n", NO_OPTION);
	scanf("%i", &choice);

	if (choice == YES_OPTION)
	{
		printf("Bruh Moment");
	}

	else if (choice == NO_OPTION)
	{
		printf("Understandable, have a great day.");
	}

	else
	{
		printf("Nah nigga, that ain't it.");
	}

	return 0;
}
