#include <stdio.h>
#include <string.h>

void palindromeTracker(char *, char *);

int main() {
  for(int i = 100; i <= 999; i++) {
    for(int j = 100; j <= 999; j++) {

      long product = i * j;
      char original[100];
      char reversed[100];
      
      // printf("%d * %d = %ld\n", i, j, product);

      sprintf(original,"%ld",product);
      // printf("%s\n", original);
      // printf("%ld", strlen(original));
      //
      palindromeTracker(original, reversed);
    }
  }
}

void palindromeTracker(char * ori, char * rev) {
  
  int j = 0;
  int i = strlen(ori) - 1;
  for(; i >= 0; --i, j++) {
    *(rev + j) = *(ori + i);
  }

  // printf("%ld", strlen(ori));

  int counter = 0;
  for(int k = 0; k <= strlen(ori); k++) {
    if(ori[k] == rev[k] && ori[k] != '\0') {
      // printf("match\n");
      counter++;
    }

    if(counter == strlen(ori)) {
      printf("original: %s, reverse: %s\n", ori, rev);
      printf("WE HAVE PALINDROME\n");
    }
  }

}
