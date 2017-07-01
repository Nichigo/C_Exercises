#include <stdio.h>

int main (int argc, char* argv[])
{
    int i = 1;

    while (i < argc)
    {
        printf("Cmd Parameter %d : %s\n", i, argv[i]);
        i++;
    }

    char * states[3] = 
    {
        "randomState",
        "veryRandomState",
        "totallynotRandomState"
    };

    i = 0;

    while(i < 3)
    {
        printf("State index %d : %s\n", i, states[i]);
        i++;
    }

        
    return 0;
}