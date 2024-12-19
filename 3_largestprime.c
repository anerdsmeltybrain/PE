#include "stdio.h"

//testing if this changes the text on github

int main() {
  long prime = 600851475143;
  long result = 0;
  int temp = 0;

  for (int i = 2; i < 1000000; i++) {
    if ( prime % i == 0) {
      result = prime / i;
      prime = result;
      printf("%d\n", i);
    }
  }

again:
  for (int i = 2; i < 1000000; i++) {
    if ( prime % i == 0) {
      result = prime / i;
      prime = result;
      printf("%d\n", i);
      goto again;
    } else {
      goto done;
    }
  }

done:

  printf("Program Done!!!");
   return 0;
}
