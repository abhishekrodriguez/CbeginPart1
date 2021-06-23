#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter your age\n");
    scanf("%d", &a);

    if(a>=18){
        printf("You are eligiblr to vote\n");
    }
    else if(a>10){
        printf("You can vote for kids\n");
    }
    else {
        printf("You are not eligible to vote");
    }
    return 0;
}
