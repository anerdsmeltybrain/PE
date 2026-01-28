#include <stdio.h>

int main() {
  int sumProducts = 0;
  int Counter = 0;
  int sumI = 0;
  int sumProdI = 0;

  for(int i = 0; i <= 100; i++) {
    Counter = i * i;
    sumProducts += Counter;
    sumI += i;

    if(i == 100) {
      sumProdI = sumI * sumI;
    }
  }

  printf("%d\n", sumProducts);
  printf("%d\n", sumProdI);
  printf("%d", sumProdI - sumProducts);
}
