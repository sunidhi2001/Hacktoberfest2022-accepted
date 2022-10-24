#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2, temp;
    printf("Enter Two Numbers:-\n");
    printf("First Number: ");
    scanf("%d", &num1);
    printf("Second Number: ");
    scanf("%d", &num2);
    printf("\nBefore Swap:\n");
    printf("First Number = %d\tSecond Number = %d", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\n\nAfter Swap:\n");
    printf("First Number = %d\tSecond Number = %d", num1, num2);
    getch();
    return 0;
}
