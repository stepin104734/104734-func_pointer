#include "factorial.h"
//Used same header file and included calci function
int factorial(int number)
{
  /* Return -1 for negative numbers */
  if(number < 0)
    return -1;

  /* Return 1 for 0 */
  if(number == 0)
    return 1;

  /* Recursively calculate Factorial of the number */
  return number * factorial(number-1);
}

/* input 2 number with choice of opperator*/
/*this programme uses function Pointer array */
int calc(int num1,int num2,int choice)
{



int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);



  int  result;
  int (*op[4])(int, int);

  op[0] = add;//choice 1 for add
  op[1] = sub;//choice 2 for sub
  op[2] = mul;//choice 3 for multiplication
  op[3] = div;// choice 4 for divide



  result = op[choice](num1, num2);


  return result;
}
/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*/
// functions to add, mull, sub, divide

int add(int num1, int num2) {
  return(num1 + num2);
}

int sub(int num1, int num2) {
  return(num1 - num2);
}

int mul(int num1, int num2) {
  return(num1 * num2);
}

int div(int num1, int num2) {
  if (num2 != 0)
    return (num1 / num2);
  else
    return 0;
}
