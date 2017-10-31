#include <stdio.h>

int main()
{
    int n;
    int m=0;
    int p=1;
    int c;

    printf("Enter a binary= ");
    scanf("%d", &n);

    while(n!=0)
    {
        c=n%10;
        m=m+c*p;
        p=p*2;
        n=n/10;
    }
    printf("m= %d", m);
}
