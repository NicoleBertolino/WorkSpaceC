#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int FLAG = 1;
char mVencedor1[3][3] = {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'};
char mVencedor2[3][3] = {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'};

int main()
{
	setlocale(LC_ALL, "Portuguese");

	char jogo[3][3];
	int i, j, cont = 0, resultado, jogada1 = 0;

	//Limpa matriz jogo
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			jogo[i][j] = '\0';
		}
	}
	printf("\n\t\t     JOGO DA VELHA\n\n");
	printf("\t\t     0      1     2  \n\n");
	printf("\t\t         |     |     \n");
	printf("\t\t0        |     |     \n");
	printf("\t\t    _____|_____|_____\n");
	printf("\t\t         |     |     \n");
	printf("\t\t1        |     |     \n");
	printf("\t\t    _____|_____|_____\n");
	printf("\t\t         |     |     \n");
	printf("\t\t2        |     |     \n");
	printf("\t\t         |     |     \n");

	do
	{

		if (cont % 2 == 0 && FLAG == 1)
		{
			fflush(stdin);
			printf("\n\t\tJogador 1 digite a sua linha: ");
			scanf("%d", &i);
			fflush(stdin);
			printf("\n\t\tJogador 1 digite a sua coluna: ");
			scanf("%d", &j);
			if (jogo[i][j] != '\0' || i > 2 || j > 2)
			{
				printf("\n\t\t\t+----------------+\n\t\t\t| Opção invalida |\n\t\t\t+----------------+\n\n\t   ");
				system("pause");
			}
			else
			{
				jogo[i][j] = 'O';
				FLAG = 2;
				cont++;
			}
		}
		else
		{
			fflush(stdin);
			printf("\n\t\tJogador 1 digite a sua linha: ");
			scanf("%d", &i);
			fflush(stdin);
			printf("\n\t\tJogador 1 digite a sua coluna: ");
			scanf("%d", &j);
			if (jogo[i][j] != '\0' || i > 2 || j > 2)
			{
				printf("\n\t\t\t+----------------+\n\t\t\t| Opção invalida |\n\t\t\t+----------------+\n\n\t   ");
				system("pause");
			}
			else
			{
				jogo[i][j] = 'X';
				FLAG = 1;
				cont++;
			}
		}
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (jogo[i][j] != '\0')
				{
					if (jogo[i][j] == 'X')
					{
						jogada1 = jogada1 + 1;
					}
				}
			}
		}

		system("cls");
		printf("\n\t\t     JOGO DA VELHA\n\n");

		printf("\t\t     0      1     2  \n\n");
		for (i = 0; i < 3; i++)
		{
			printf("\t\t\t|      |\n");
			printf("\t\t%d    ", i);
			for (j = 0; j < 3; j++)
			{
				if (j <= 1)
				{
					if (jogo[i][j] != '\0')
					{
						printf("%c  |", jogo[i][j]);
						printf("   ");
					}
					else
					{
						printf("  %c |", jogo[i][j]);
						printf("   ");
					}
				}
				else
				{
					if (jogo[i][j] != '\0')
					{
						printf("%c", jogo[i][j]);
						printf("   ");
					}
					else
					{
						printf(" %c  ", jogo[i][j]);
						printf("   ");
					}
				}
			}
			if (i <= 1)
			{
				printf("\n\t\t   _____|______|_____\n");
			}
			else
				printf("\n\t\t        |      |\n");
		}
		/*	if (cont >= 3 && mVencedor[0][0] == escolha2 && mVencedor1[0][0] == escolha3)
		{
			int deVencedor = 0;//declarar no topo
			int edVencedor = 0;//declarar no topo
			for (i = 0; i < 3; i++)
			{
				int lVencedor = 0;// declarar no topo 
				int cVencedor = 0;// declarar no topo
				if(jogo[i][i] != '\0' && mVencedor[i][i] == jogo[i][i] ){
					deVencedor++;
				}
				for (j = 0; j < 3; j++)
				{
					if(jogo[i][j] != '\0' && mVencedor[i][j] == jogo[i][j] ){
						lVencedor++;
					}
					if(jogo[j][i] != '\0' && mVencedor[j][i] == jogo[j][i] ){
						cVencedor++;
					}

				}
				for(j = 2; j >= 0; j--, i++){
					if(jogo[i][j] != '\0' && mVencedor[i][j] == jogo[i][j]){
						edVencedor++;
					}
				}

				if(lVencedor == 3 || cVencedor == 3 || deVencedor == 3 || edVencedor == 3){
					printf("Venceu");
				}
				printf("\n");
			}*/
		//	}else if(cont >= 3 && mVencedor[0][0] == escolha3 && mVencedor1[0][0] == escolha2)

		//Validando vencedor
		if (cont >= 3)
		{
			int deVencedor_O = 0;
			int edVencedor_O = 0;
			int deVencedor_X = 0; //declarar no topo
			int edVencedor_X = 0; //declarar no topo
			for (i = 0; i < 3; i++)
			{
				int lVencedor_X = 0; // declarar no topo
				int cVencedor_X = 0; // declarar no topo
				int lVencedor_O = 0;
				int cVencedor_O = 0;

				//confere diagonal direita-esquerda O
				if (jogo[i][i] != '\0' && mVencedor1[i][i] == 'O')
				{
					deVencedor_O++;
				}
				//confere diagonal direita-esquerda X
				if (jogo[i][i] != '\0' && mVencedor2[i][i] == 'X')
				{
					deVencedor_X++;
				}

				for (j = 0; j < 3; j++)
				{
					//confere linha O
					if ((jogo[i][j] != '\0') && (mVencedor1[i][j] == 'O'))
					{
						printf(" %d, %d = ", i, j);
						printf("jogo: %c - ", jogo[i][j]);
						printf("Vencedor: %c\n", mVencedor1[i][j]);
						lVencedor_O++;
					}
					//confere coluna O
					if (jogo[j][i] != '\0' && mVencedor1[j][i] == 'O')
					{
						cVencedor_O++;
					}

					//confere linha X
					if (jogo[i][j] != '\0' && mVencedor2[i][j] == 'X')
					{
						lVencedor_X++;
					}
					//confere coluna X
					if (jogo[j][i] != '\0' && mVencedor2[j][i] == 'X')
					{
						cVencedor_X++;
					}
				}
				//Venceu linha/coluna O
				if (lVencedor_O == 3 || cVencedor_O == 3)
				{
					printf("1 Venceu jogador O\n");
				}
				//Venceu linha/coluna X
				if (lVencedor_X == 3 || cVencedor_X == 3)
				{
					printf("2 Venceu jogador X\n");
				}
				printf("\n");
			}
			
			for (i = 0, j = i + 2; j >= 0, i < 3; j--, i++)
			{
				//confere diagonal esquerda-direita O
				if (jogo[i][j] != '\0' && mVencedor1[i][j] == 'O')
				{
					edVencedor_O++;
				}

				//confere diagonal esquerda-direita X
				if (jogo[i][j] != '\0' && mVencedor2[i][j] == 'X')
				{
					edVencedor_X++;
				}
			}

			//Venceu diagonal direita-esquerda O
			if (deVencedor_O == 3)
			{
				printf("3 Venceu jogador O \n");
			}
			//Venceu diagonal direita-esquerda X
			if (deVencedor_X == 3)
			{
				printf("4 Venceu jogador X\n ");
			}

			//Venceu diagonal esquerda-direita O
			if (edVencedor_O == 3)
			{
				printf("5 Venceu jogador O\n");
			}
			//Venceu diagonal esquerda-direita X
			if (edVencedor_X == 3)
			{
				printf("6 Venceu jogador X\n");
			}
		}

	} while (cont < 9 || resultado != 1);
	printf("\n\t\tFIM DO JOGO\n\n");

	system("pause");
}
