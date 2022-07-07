#include <stdio.h>
/**
 * main - Solution for Fizz-Buzz problem.
 *
 * Return: 0 - Success
 */
int main(void)
{
  int i;
  for (i=1; i<=100; i++)
  {
    // number divisible by 3 and 5 will
    // always be divisible by 15, print
    // 'FizzBuzz' in place of the number
    if (i%15 == 0)  
      printf ("FizzBuzz\t");
    else if ((i%3) == 0)
      printf("Fizz\t");        
    else if ((i%5) == 0)          
      printf("Buzz\t");        
    else    
      printf("%d\t", i);        
  }
  return 0;
}
