#include <stdio.h>

int main() {
  int n;
  int i = 0;
  printf("Enter the number of rows: ");
  scanf("%d", &n);

  while (i < n) { // Loop for each row
    int j = 0;

    // Print spaces for right alignment
    while (j < n - i - 1) {
      printf("  "); // Two spaces for each position to align with '* '
      j++;
    }

    // Print stars
    j = 0;
    while (j <= i) {
      printf("* ");
      j++;
    }

    printf("\n"); // Move to the next row
    i++;
  }

  return 0;
}

