#include "stdio.h"

int main() {
   int one, two, temp, i, sum;
      one = 1;
      two = 2;
   for (i = 0; i < 1000; i++) {
      if (two > 4000000) {
      break;
    }
      if (two % 2 == 0 ) {
      printf("%d\n", two);
      sum += two;
    }
      temp = one + two;
      one = two;
      two = temp;
   }
  printf("%d\n", sum);
  return 0;
}
