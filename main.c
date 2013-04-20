#include "grafo.h"

#include <stdio.h>
#include <stdlib.h>

void imprime_trool(trool retorno);

int main(int argc, char *argv[])
{
   Grafo *a = (Grafo *) malloc (sizeof(Grafo));
   if (a == NULL)
		return 1;

   cria_grafo_vazio(a);
   imprime_grafo(a);

   //insere_aresta();
   printf("%d", insere_aresta(0, 1, a));
   printf("%d", insere_aresta(1, 0, a));
   printf("%d", insere_aresta(11, 1, a));
   printf("%d", insere_aresta(1, 11, a));
   printf("%d", insere_aresta(1, 3, NULL));
   printf("%d", insere_aresta(4, 4, a));
   printf("%d", insere_aresta(1, 10, a));
   printf("%d", insere_aresta(7, 5, a));

   printf("\ninsere_aresta()\n");
   imprime_grafo(a);
   getchar();

   //insere_arco();
   printf("%d", insere_arco(0, 1, a));
   printf("%d", insere_arco(1, 0, a));
   printf("%d", insere_arco(11, 1, a));
   printf("%d", insere_arco(1, 11, a));
   printf("%d", insere_arco(1, 3, NULL));
   printf("%d", insere_arco(6, 4, a));
   printf("%d", insere_arco(6, 10, a));
   printf("%d", insere_arco(9, 2, a));

   printf("\ninsere_arco()\n");
   imprime_grafo(a);
   getchar();

   //existe_aresta()
   printf("%d", existe_aresta(0, 1, a));
   printf("%d", existe_aresta(1, 0, a));
   printf("%d", existe_aresta(11, 1, a));
   printf("%d", existe_aresta(1, 11, a));
   printf("%d", existe_aresta(1, 3, NULL));
   printf("%d", existe_aresta(4, 4, a));
   printf("%d", existe_aresta(6, 10, a));
   printf("%d", existe_aresta(10, 6, a));

   printf("\nexiste_aresta()\n");
   getchar();

   //retira_aresta()
   printf("%d", retira_aresta(0, 1, a));
   printf("%d", retira_aresta(1, 0, a));
   printf("%d", retira_aresta(11, 1, a));
   printf("%d", retira_aresta(1, 11, a));
   printf("%d", retira_aresta(1, 3, NULL));
   printf("%d", retira_aresta(4, 4, a));
   printf("%d", retira_aresta(1, 10, a));
   printf("%d", retira_aresta(2, 9, a));

   printf("\nretira_aresta()\n");
   imprime_grafo(a);
   getchar();

   //retira_aresta()
   printf("%d", retira_arco(0, 1, a));
   printf("%d", retira_arco(1, 0, a));
   printf("%d", retira_arco(11, 1, a));
   printf("%d", retira_arco(1, 11, a));
   printf("%d", retira_arco(1, 3, NULL));
   printf("%d", retira_arco(10, 6, a));
   printf("%d", retira_arco(5, 7, a));
   printf("%d", retira_arco(7, 10, a));

   printf("\nretira_arco()\n");
   imprime_grafo(a);
   getchar();



   libera_grafo(a);
   
   return 0;
}

void imprime_trool(trool retorno) {
   if(retorno == false)
      printf("\nfalse");
   else if(retorno == true)
      printf("\ntrue");
   else if(retorno == error)
      printf("\nerror");
   else
      printf("\noutro?");
}
