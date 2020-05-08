#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <iostream>
#include <cstdlib>

using namespace std;


int main(){

    // Variáveis e comandos iniciais
    int i, j, laco = 1, diff;
    float tempo;
    time_t t_ini, t_fim;
	// Inclusão necessária para o funcionamento
	// do comando rand.
	srand(time(NULL));


	// Matrizes Estáticas
	int matriz1[10][10], matriz2[10][10], matriz3[10][10];

	// Matrizes Dinamicas
	int **p1 = (int**)malloc(10 *sizeof(int));
	int **p2 = (int**)malloc(10 *sizeof(int));
	int **p3 = (int**)malloc(10 *sizeof(int));

	for(i = 0; i < 10; i++){
		p1[i] = (int*)malloc(10*sizeof(int));
	}

	for(i = 0; i < 10; i++){
		p2[i] = (int*)malloc(10*sizeof(int));
	}

	for(i = 0; i < 10; i++){
		p3[i] = (int*)malloc(10*sizeof(int));
	}

	// Preenchimento de duas matrizes estáticas
	// com números de 0 a 10
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			matriz1[i][j] = rand()%11;
		}
	}

	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			matriz2[i][j] = rand()%11;
		}
	}

	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			matriz3[i][j] = 0;
		}
	}


	/*
	// Preenchimento de duas matrizes dinamicas
	// com números de 0 a 10
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			p1[i][j] = rand()%10;
		}
	}

	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			p2[i][j] = rand()%10;
		}
	}

	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			p3[i][j] = p1[i][j] * p2[j][i];
		}
	}

	// Exibe as Matrizes Dinamicas
	printf("Matriz Dinamica 1\n\n");
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf(" %d", p1[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");

	printf("Matriz Dinamica 2\n\n");
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf(" %d", p2[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");

	printf("Matriz Dinamica 3\n\n");
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf(" %d", p3[i][j]);
		}
		printf("\n");
	}
*/

	// Exibe as Matrizes Estaticas
	printf("Matriz Estatica 1\n\n");
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf(" %d", matriz1[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");

	printf("Matriz Estatica 2\n\n");
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf(" %d", matriz2[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");



    t_ini = time(NULL);
	while(laco <= 20){
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			matriz3[i][j] = matriz3[i][j] + (matriz1[i][j] * matriz2[j][i]);
		}
	}
	laco++;
	}
	t_fim = time(NULL);
    tempo = difftime(t_fim, t_ini);


	printf("Matriz Estratica RESULTADO apos 20 operações \n\n");
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf(" %d", matriz3[i][j]);
		}
		printf("\n");
	}

	printf("\nTempo de Execução: %f ms.", tempo));


  return 0;

}
