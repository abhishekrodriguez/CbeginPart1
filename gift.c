#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter 1 if u passed in maths and science, 2 if u passed in maths and 3 if u passed in science\n");
    scanf("%d", &a);

    if(a == 1){
        printf("You get rs 45");
    }
    else if(a == 2){
        printf("You get RS 15");
    }
    else if(a == 3){
        printf("You get RS 15");
    }
    return 0;
}
