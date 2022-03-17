#include <stdio.h>

int main(void) {
  int liczba;
  int max;
  int min;
  int n = 5;

  printf("Podaj liczbe: ");
  scanf("%d", &liczba); 
  max = liczba;
  min = liczba;

  for(int i=0; i<n-1; i++) {
    printf("Podaj liczbe: ");
    scanf("%d", &liczba); 
    if(liczba > max) {
      max = liczba;
    }
    else if(liczba < min) {
      min = liczba;
    }
  }

  printf("\nNajwiększa: %d", max);
  printf("\nNajmniejsza: %d", min);
  return 0;
}