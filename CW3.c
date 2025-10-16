// A program to calculate the Square and Cube of a Number
#include<stdio.h>

// Function Declaration
int CalcS(int n, int n);
int CalcC(int n, int n);

int main(void)
{
// Declaring variables
int n, s, c;

// Taking Input from user
printf("Enter the number to get its square and cube:");
scanf(" %d", &n);

// Calling function and displaying area
s= CalcS( n, n);
printf("Square: %d", s);

c= CalcC( n, n);
printf("Cube: %d", c);

return 0;
}

// Function Definition
int CalcS(int n, int n)
{
int s= n*=n;
int s;
}
int CalcC(int n, int n)
{
int c= n*=n*=n;
int c;
}
