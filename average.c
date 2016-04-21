#include <stdio.h>
int main() {
  /* code */
  int num1;
  int num2;
  float average;
  printf("Number1?");
  scanf("%d", &num1);
  printf("Number2?");
  scanf("%d", &num2);
  average = (float)(num1 + num2) / 2;
  printf("%f\n",average );
  return 0;
}