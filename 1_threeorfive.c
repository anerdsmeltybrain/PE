#include "stdio.h"

//adding a comment to test things

int main()
{
  int sum = 0;
  for (int i = 0; i < 1000; i++) {
    int container[] = {0};
    sum += container[i];
    printf("\n%d", container[i]);
  }
  return 0;
}
