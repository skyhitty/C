
int main(int argc, char *argv[])
{
	char a;
	char b;
	*(&a + 1) = 0;
	/*
		Here, b may not be one byte past a. It may be one byte in front of a. Or, they
		may have three bytes between them because they get aligned to 32-bit boundaries.
	*/
	return 1;
}