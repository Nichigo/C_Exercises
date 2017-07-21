#include <stdio.h>

/* This is a comment */
int main(int argc, char *argv[])
{
	int distance = 100;
	char * test_string = "\"I am a string bla bla\"";
	long long_number = 6123456;
	int * int_pointer;
	*int_pointer = 3;
	double double_number = 5.35123;

	//this is also a comment
	printf("You are %d miles away.\n",distance);
	printf("This is how you print a string: %s\n",test_string);
	printf("This is how you print a long number: %ld \n",long_number);
	printf("This is a pointer's address: %p\n",int_pointer);
	printf("This is a pointer's value: %d\n",*int_pointer);
	printf("This is a double number: %f\n", double_number);

	return 0;
}
