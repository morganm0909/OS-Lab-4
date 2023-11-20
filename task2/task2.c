#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtracts(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int Exit(int a, int b);

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  char user_inp;
  int (*operation[])(int,int) = {add, subtracts, multiply, divide, Exit};
  printf("Operand 'a' : | Operand 'b' : 3\nSpecify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
  scanf(" %c", &user_inp);
  int index = user_inp - '0';
  (index <= 4) ? printf("%d\n", operation[index](6,3)) : printf("Invalid");
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { 
  printf ("Adding 'a' and 'b'\n"); 
  return a + b; }
int subtracts (int a, int b) { 
  printf ("Subtracting 'b' from 'a'\n"); 
return a - b; }
int multiply (int a, int b) { 
  printf ("Mutliplying 'a' and 'b'\n"); 
  return a * b; }
int divide (int a, int b) { 
  printf ("Dividing 'a' by 'b'\n"); 
return a / b; }
int Exit (int a, int b) { 
  printf ("Exiting program\n"); 
  exit(0); 
  return 0; }
