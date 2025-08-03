//Calculator using Switch in C
#include<stdio.h>
int main()
{
int input;
float a,b,result;

printf("\n1 for addition\n");
printf("2 for subtraction\n");
printf("3 for multiplication\n");
printf("4 for division\n");
scanf("%d", &input);
printf("Enter two number-\n");
scanf("%f%f", &a, &b);
switch(input)
 {
    case 1: result=a+b;
printf("%f", result);
break;
 case 2: result= a-b;
printf("%f", result);
break;
case 3: result= a*b;
printf("%f", result);
break;
case 4: result= a/b;
printf("%f", result);
break;
 }
return 0;
} 