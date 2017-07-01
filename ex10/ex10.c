#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    //param 0 -> program name - we skip that one
    for (i = 1 ; i < argc; i++)
    {
        printf("Cmd Parameter %d : %s\n", i, argv[i]);
    }

    char * states[4] = {"state1", "state2", "state3", "state4"};

    for(i = 0; i < 4; i++ )
    {
        printf("printing string number %d : %s\n", i, states[i]);
    }

    return 0;
}