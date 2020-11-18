#include <stdio.h>

int base = 0;
int numero = 0;
int ex_quoziente = 0;
int quoziente = 999;
int resto = 0;

int main(void) {
  printf("Inserisci il numero (in base decimale) da convertire:\n");
  scanf("%d",&numero);
  printf("Inserisci la base in cui vuoi convertire il numero:\n");
  scanf("%d",&base);
  printf("\nPassaggi:\n");
  quoziente = numero/base;
  resto = numero-quoziente*base;
  printf("%d:%d=%d resto di %d\n",numero,base,quoziente,resto);
  ex_quoziente=quoziente;
  while(quoziente>0){
    quoziente = ex_quoziente/base;
    resto = ex_quoziente%base;
    printf("%d:%d=%d resto di %d\n",ex_quoziente,base,quoziente,resto);
    ex_quoziente=quoziente;
  }

  return 0;
}
