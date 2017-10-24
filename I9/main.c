#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    char PIRATES;
    char STEELERS;
    char PENGUINS;

    puts("Enter the name of the sports team: "); scanf("%s", &x);

    if(x==PIRATES)

        puts("Home run!\n");

    else if (x==STEELERS)

        puts("Touchdown!\n");

    else if (x==PENGUINS)

        puts("Goal!\n");

    else

        puts("You lose!\n");


    return 0;
}
