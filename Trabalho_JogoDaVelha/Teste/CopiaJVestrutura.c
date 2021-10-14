#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int FLAG = 1;

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
			printf("\n\t\tJogador 1 digite a sua linha: ");
			scanf("%d", &i);
			fflush(stdin);
			printf("\n\t\tJogador 1 digite a sua coluna: ");
			scanf("%d", &j);
            fflush(stdin);
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
			printf("\n\t\tJogador 1 digite a sua linha: ");
			scanf("%d", &i);
			fflush(stdin);
			printf("\n\t\tJogador 1 digite a sua coluna: ");
			scanf("%d", &j);
            fflush(stdin);
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
		
        if(jogo[0][0] != '\0' && jogo[0][0] == jogo[0][1] &&  jogo[0][0] == jogo[0][2] ||
           jogo[1][0] != '\0' && jogo[1][0] == jogo[1][1] &&  jogo[1][0] == jogo[1][2] ||
           jogo[2][0] != '\0' && jogo[2][0] == jogo[2][1] &&  jogo[2][0] == jogo[2][2] ||
           jogo[0][0] != '\0' && jogo[0][0] == jogo[1][0] &&  jogo[0][0] == jogo[2][0] ||
           jogo[0][1] != '\0' && jogo[0][1] == jogo[1][1] &&  jogo[0][1] == jogo[2][1] || 
           jogo[0][2] != '\0' && jogo[0][2] == jogo[1][2] &&  jogo[0][2] == jogo[2][2] ||
           jogo[0][0] != '\0' && jogo[0][0] == jogo[1][1] &&  jogo[0][0] == jogo[2][2] ||
           jogo[0][2] != '\0' && jogo[0][2] == jogo[1][1] &&  jogo[0][2] == jogo[2][0]){
               printf("Ganhou: %c ", jogo[i-1][j-1]);
               exit(0);

        }else if(cont == 8){
            printf("VELHA");
            }

	} while (cont < 9 || resultado != 1);
	printf("\n\t\tFIM DO JOGO\n\n");

	system("pause");
}
