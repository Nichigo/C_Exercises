#include<stdio.h>

int main (int argc, char * argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'A';
	char first_name[] = "Zed";
	char last_name[] = "Shaw";
	
	printf("You are a %d miles away.\n",distance);
	printf("You have %f levels of power.\n",power);
	printf("You have %f awasome super powers.\n",super_power);
	printf("I have an initial %c.\n",initial);
	printf("I have a first name %s.\n",first_name);
	printf("I have a last name %s.\n",last_name);
	printf("My whole name is %s %c. %s.\n",
		    first_name, initial, last_name);

	//Exotic stuff?
	printf("%10s\n", "Hello"); //string minimal length
	printf("%08.2f\n", 10.3456); // zero filled , 2 digits after decimal point
	printf("Octal 100 = %o\n",100); //octal
	printf("Hexidecimal 100 = %x",100); //hex
	char * empty_string = "";
	printf("%s\n",empty_string);
	
	return 0;
}
