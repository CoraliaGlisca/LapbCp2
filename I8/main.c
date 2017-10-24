#include <stdio.h>

int main()
{
    int age,min;
    printf("Enter the age: "); scanf("%d", &age);
    printf("Enter the length of the movie: "); scanf("%d", &min);
    if((age<=17) && (min<=90))
    {
        printf("DISCOUNT APPLIES");
    }
    else
    {
        printf("NO DISCOUNT");
    }
    return 0;
}
