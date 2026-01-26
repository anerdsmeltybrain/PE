#include <stdio.h>

int main() {

  int a, b, swap1, swap2;
  a = 0;
  b = 1;
  swap1 = 0;
  swap2 = 0;

  for(int i = 0; i < 10000; i++) {

    swap1 = a + b;
    a = b;
    b = swap1;

    if(swap2 > 4000000)
      goto end;
    
    if(swap1 % 2 == 0)
      swap2 += swap1;

    
    printf("%d \n", swap1);
  }

  end:

  printf("%d", swap2);
  return 0;
}
