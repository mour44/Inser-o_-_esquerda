#include <stdio.h>
#include <stdlib.h>

struct valores{
  int valor_a;
  int *valor_prox;
};
typedef struct valores valores;

int main()
{  
  valores *lista, *p;
  int vn;
  lista = NULL;

  do{
    p = malloc(sizeof(valores));
    printf("Digite um valor: \n");
    scanf("%i", &p->valor_a);
    p->valor_prox = lista;
    lista = p;

    printf("Deseja inserir outro valor? (1-sim/0-nao): \n");
    scanf("%i", &vn);
  }while (vn == 1);

  return 0;
}