#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int total = 1000000;
  int inside = 0;

  srand(time(0));
  for (int i = 0; i < total; i++) {
    double x = (double)rand() / RAND_MAX;
    double y = (double)rand() / RAND_MAX;
    if (x * x + y * y <= 1)
      inside++;
  }

  double pi = 4.0 * inside / total;
  printf("Estimated pi: %f\n", pi);
}