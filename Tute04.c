/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/
 #include <stdio.h>
int minimum(int no1,int no2);
int maximum(int no1,int no2);
int multiply(int no1,int no2);

int main() {
   int num1, num2;
  
   printf("Enter a value for no 1 : ");
   scanf("%d", &num1);
  
   printf("Enter a value for no 2 : ");
   scanf("%d", &num2);

  printf("Maximum number is");
   printf("%d ", minimum(num1, num2));
  printf("\nMinimum number is");
   printf("%d ", maximum(num1, num2));
  printf("\nMultiply is ");
   printf("%d ", multiply(num1, num2));
  
   return 0;
}
int maximum(int no1,int no2)
{
  if(no1 > no2)
  {
    return no1;
  }
  else
  {
    return no2;
  }
 }
int minimum(int no1,int no2)
{
  if(no1 < no2)
  {
    return no1;
  }
  else
  {
    return no2;
  }
}
int multiply(int no1,int no2)
{
  return no1 * no2;
}