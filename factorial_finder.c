#include <stdlib.h>
#include <stdio.h>

int main (void) {
  int num;
  printf("enter a number you wish to find factorial of: ");
  scanf("%d", &num);
  for (int i=num/2; i>0; i--) {
    if (num%i == 0) {
      printf("%d\n", i);
    }
  }
  return 0;
}
