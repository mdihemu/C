/**
@DarkMotion
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Give a number to determine whether even or odd: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("NUMBER IS EVEN\n");
    }
    if(n%2==1){
        printf("NUMBER IS ODD\n");
    }
    return 0;
}
