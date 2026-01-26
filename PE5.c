#include <stdio.h>

int main() {

  int counter = 0;
  long number = 20;

  for(int i = 20; i >= 1; i--) {

    if(number % i == 0) {
      printf("yea yea %ld\n", number);
      counter++;
    } else if(number % i != 0) {
      counter = 0;
      i = 20;
      number++;
    }
    if(counter == 10) {
      printf("10 div: %ld\n", number);
    }

    // if(counter == 20) {
    //   printf("%ld\n", number);
    // }

  }
}
