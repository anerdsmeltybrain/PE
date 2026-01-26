#include <stdio.h>

int main() {
  long primeFactor = 600851475143;
  int i = 2;

  for(int i = 2; i < primeFactor; i++) {
    if(primeFactor % i == 0) {
      printf("%d\n", i);
    }
   }
  return 0;
}
