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
   insere_aresta(0, 1, a);
   insere_aresta(1, 0, a);
   insere_aresta(11, 1, a);
   insere_aresta(1, 11, a);
   insere_aresta(1, 3, NULL);
   insere_aresta(4, 4, a); // Erro
   //insere_aresta(1, 10, a); // Erro
   insere_aresta(7, 5, a);

   printf("\n");
   imprime_grafo(a);
   getchar();

   //existe_aresta()
   /*imprime_trool(existe_aresta(0, 1, a));
   imprime_trool(existe_aresta(1, 0, a));
   imprime_trool(existe_aresta(11, 1, a));
   imprime_trool(existe_aresta(1, 11, a));
   imprime_trool(existe_aresta(1, 3, NULL));
   imprime_trool(existe_aresta(4, 4, a));
   imprime_trool(existe_aresta(1, 10, a)); // Erro
   imprime_trool(existe_aresta(7, 5, a));

   printf("\n");
   getchar();*/

   //retira_aresta()
   printf("%d", retira_aresta(0, 1, a));
   printf("%d", retira_aresta(1, 0, a));
   printf("%d", retira_aresta(11, 1, a));
   printf("%d", retira_aresta(1, 11, a));
   printf("%d", retira_aresta(1, 3, NULL));
   printf("%d", retira_aresta(4, 4, a));
   printf("%d", retira_aresta(1, 10, a)); // Erro
   printf("%d", retira_aresta(7, 5, a));
   //12123424

   printf("\n");
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
