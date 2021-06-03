#include <stdio.h>
int main() {
double num1;
double num2;
char op;
printf("Enter First Number: ");
scanf("%lf", &num1);
printf("Enter Operator: ");
scanf("%s", &op);
printf("Enter Second Number: ");
scanf(" %lf", &num2);
 
if(op == '+' )
{
printf("%.2f", num1 + num2);
} 
else if(op == '-' )
{
printf("%.2f", num1 - num2);
}
if(num2 <= 0);
else if(op  == '/')
{
    printf("%.2f" ,num1/num2);
}
else if(op == '*' )
{
printf("%.2f", num1 * num2);
} else 
{
printf("\ninvalid operator ");
} 
return 0;
}