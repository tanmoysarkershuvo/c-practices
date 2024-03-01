#include<stdio.h>
int main(){

printf("Input Section \n");    

int num1;
float num2;
double num3;
char num4;
printf("Enter Integer Number:");
scanf("%d", &num1);
printf("Enter Float Number:");
scanf("%f", &num2);
printf("Enter Double Number:");
scanf("%lf", &num3);
printf("Enter Charecter Name:");
scanf(" %c", &num4);

printf("Output Section \n");
printf("Integer Number: %d\n", num1);
printf("Float Number: %f\n", num2);
printf("Double Number: %lf\n", num3);
printf("Charecter Number: %c\n", num4);

printf("Single Character To ASCII Value Converter \n");
char name;
printf("Enter Single Character Name:");
scanf(" %c", &name);
printf("ASCII Value: %d\n", name);

printf("Size of Variables");
printf("Size of Integer: %lu bytes\n", sizeof(num1));
printf("Size of Float: %lu bytes\n",sizeof(num2) );
printf("Size of Double: %lu bytes\n",sizeof(num3) );
printf("Size of Character: %lu bytes",sizeof(num4) );
return 0;
}
