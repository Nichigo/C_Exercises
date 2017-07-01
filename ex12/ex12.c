#include <stdio.h>

int main (int argc, char *argv[])
{
    int i = 0;

    if(argc == 1)
    {
        printf("You have zero arguments - you suck !\n");
    }
    else if(argc > 1 && argc < 4)
    {
        printf("Here are your arguments :\n");
        for(i = 1 ; i < argc; i ++)
        {
            printf("%s\n",argv[i]);
        }
    }
    else 
    {
        printf("Too many arguments : %d\n",argc - 1);
    }
    return 0;
}