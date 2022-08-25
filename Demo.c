#include <stdio.h>

int main(){

    int a=18,age;

    printf("Hello Ashish..\n");
    printf("Enter Your Age : ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("your Age is %d. allow to vote.",age);
    }
    else
    {
        printf("your Age is %d. not allow to vote.",age);
    }

    return 0;
}