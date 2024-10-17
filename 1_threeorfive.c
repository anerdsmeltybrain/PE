#include "stdio.h"

int main() {

  int sum = 0;
  for (int i = 0; i < 1000; i++) {
    if (i % 3 == 0) {
      //printf("%d\n", i);
      sum += i;
      printf("%d : is the new sum\n", sum);
    } else if (i % 5 == 0) {
      //printf("%d\n", i);
      sum += i;
      printf("%d : is the new sum\n", sum);
    }
  }
return 0;
}
