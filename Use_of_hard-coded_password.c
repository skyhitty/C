
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char password[256];
	gets(password);
	if (strcmp(password, "Mew!"))
	{
		printf("Incorrect Password!\n");
		return(0);
	}
	printf("Entering Diagnostic Mode...\n");
	return 1;
}

