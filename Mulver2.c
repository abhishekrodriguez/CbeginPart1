#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    b=1;
    printf("Multiplication table of\n");
    scanf("%d", &a);

    for (b=1;b<=10;b++){
        printf("%d * %d = %d\n", a,b,a*b);
    }
     
    return 0;
}
