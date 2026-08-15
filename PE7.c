#include <stdio.h>
#include <stdlib.h>

int main() {

  int divisbilityCounter = 0;
  int primeCounter = 0;
  int isPrime = 0;

  for(int i = 0; i < 100000; i++) {

    divisbilityCounter = 0;
    isPrime = 0;

    for(int j = 1; j <= i; j++) {
      if (i % j == 0) {
        divisbilityCounter++;
      }
    }

    if (divisbilityCounter == 2) {
      primeCounter++;
      isPrime++;
    }

    if(isPrime)
      printf("%d | dc : %d | pc : %d \n", i, divisbilityCounter, primeCounter);

    if(primeCounter >= 10001)
      break;
  }

  return 0;
}
