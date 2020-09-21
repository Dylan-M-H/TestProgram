#include <stdio.h>

int main() {

  float num1;
  float num2;
  char operator;
  float answer;

  printf("This program is a simple calculator.\n");
  
  printf("Enter the first number of your calculation: ");
  scanf(" %f", &num1);
  /* printf("Using %f as the first number.\n", num1); */
  
  printf("Enter the operator of your calculation: ");
  scanf(" %c", &operator);
  /* printf("Using %c as the operator.\n", operator); */

  printf("Enter the second number of your calculation: ");
  scanf(" %f", &num2);
  /* printf("Using %f as the second number.\n", num2); */

  if( operator == 'x' ) {
    answer = num1 * num2;
    printf("%f %c %f = %f", num1, operator, num2, answer);}
  if( operator == '*' ) {
    answer = num1 * num2;
    printf("%f %c %f = %f", num1, operator, num2, answer);}
  if( operator == '/' ) {
    answer = num1 / num2;
    printf("%f %c %f = %f", num1, operator, num2, answer);}
  if( operator == '+' ) {
    answer = num1 + num2;
    printf("%f %c %f = %f", num1, operator, num2, answer);}
  if( operator == '-' ) {
    answer = num1 - num2;
    printf("%f %c %f = %f", num1, operator, num2, answer);}
}
