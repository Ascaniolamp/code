#include <stdio.h>

//definiamo le variabili
int base = 0;
int numero = 0;
int ex_quoziente = 0;
int quoziente = 999;
int resto = 0;

int main(void) {
  
  //assegnamo alla variabile "numero" l'input del numero da convertire
  printf("Inserisci il numero (in base decimale) da convertire:\n");
  scanf("%d",&numero);

  //assegnamo alla variabile "base" l'input della base in cui vogliamo convertire il numero
  printf("Inserisci la base in cui vuoi convertire il numero:\n")
  scanf("%d",&base);
  
  printf("\nPassaggi:\n");
  
  //definiamo il totale di numero/base
  quoziente = numero/base;
  
  //definiamo il resto di numero/base
  resto = numero%base;
  printf("%d:%d=%d resto di %d\n",numero,base,quoziente,resto);
  
  //definiamo l'ex-quoziente, ovvero il totale della vecchia divisione
  ex_quoziente=quoziente;
  
  //controlliamo se il quoziente e' maggiore di 0, se la condizione e' vera allora ripetiamo il processo
  while(quoziente>0){
    quoziente = ex_quoziente/base;
    resto = ex_quoziente%base;
    printf("%d:%d=%d resto di %d\n",ex_quoziente,base,quoziente,resto);
    ex_quoziente=quoziente;
  }
  
  //quando il quoziente e' 0 allora controllando i resti delle operazioni dal basso all'alto
  //avremo il risultato della conversione
  
  return 0;
}
