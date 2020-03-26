/*
  PLOVER: BUFF.OVER
*/

/*
	No bounds checking
*/

#include <stdio.h>
#include <string.h>

#define MAXSIZE 10

void test(char *str){
	char buf[MAXSIZE];
	strcpy(buf, str);
	printf("results: %s\n", buf);
}

int main(int argc, char **argv){
	char *userstr;
	if(argc > 1){
		userstr = argv[1];
		test(userstr);
	}
	return 0;
}
