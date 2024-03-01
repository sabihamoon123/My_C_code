
#include <stdio.h>
int main()
{
    int num1, num2, num3;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("The 1st Number is the larger:%d\n", num1);
        }
        else
        {
            printf("The 3rd Number is the larger:%d\n", num3);
        }
    }
    else if (num2 > num3){
            printf("The 2nd Number is the larger:%d\n", num2);
    }
    else{
        printf("The 3rd Number is the larger:%d\n", num3);
    }
        return 0;
}
