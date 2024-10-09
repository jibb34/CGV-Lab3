#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int n;
  int sum = 0;
  n = atoi(argv[1]);
  int squares[n]; // can this work?

  for (int i = 1; i < n; i++) {
    squares[i] = i * i;
    printf("%d %d\n", i, squares[i]);
    sum += squares[i];
  }
  printf("The sum of %d squares is %d\n", n, sum);
  return 0;
}
