/*JOGO DA VELHA*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//FLAG = verifica de qual jogador é a vez.
int FLAG = 1;

main()
{
	
// DECLARAÇÃO DE VARIÁVEIS
	// jogador1 recebe o nome do jogador 1
	// jogador2 recebe o nome do jogador 2
	// escolha1 recebe a escolha de ver o tutorial ou ir ao jogo
	// escolha2 recebe a escolha de simboló do jogador 1 (X ou O)
	// escolha3 recebe a escolha de símbolo do jogador 2 (X ou O)
	// jogo[3][3] matriz do jogo
	// repetir recebe a escolha de repetir o jogo ou finalizar
	char jogador1[50], jogador2[50], escolha1, escolha2, escolha3, jogo[3][3], repetir;
	
	//i e j são os contadores da matriz jogo[3][3]
	//cont recebe quantas vezes foi colocado um valor na matriz
	// ganhou1 recebe o valor de vezes que o jogador 1 ganhou, para ser imprimido no placar ao final do jogo.
	// ganhou2 recebe o valor de vezes que o jogador 2 ganhou, para ser imprimido no placar ao final do jogo.
	int i, j, cont = 0, resultado, ganhou1 = 0, ganhou2 = 0;

	setlocale(LC_ALL, "Portuguese");

//INÍCIO DO JOGO
	printf("\n\n\t\t\t\t\t  Bem Vindo\n\n\t\t\t\t\t     ao\n\n\t\t\t\t\tJOGO DA VELHA\n\n\n\n");
	printf("\n\n\t  Para saber como jogar aperte S \t\tPara iniciar Jogo da Velha aperte J\n\n\t\t\t\t    --->");
	scanf("%c", &escolha1);

	do
	{
		if (escolha1 != 'S' && escolha1 != 's' && escolha1 != 'J' && escolha1 != 'j')
		{

			system("cls");
			printf("\n\n\t\t\t\t\tJOGO DA VELHA\n\n\n\n");
			printf("\n\t\t\t\t +----------------+\n\t\t\t\t | Opçãoo invalida |\n\t\t\t\t +----------------+\n\n\t   ");
			printf("\n\n\t  Para saber como jogar aperte S \t\tPara iniciar Jogo da Velha aperte J\n\n\t\t\t\t    --->");
			scanf("%c", &escolha1);
		}
	} while (escolha1 != 'S' && escolha1 != 's' && escolha1 != 'J' && escolha1 != 'j');

//ENSINANDO A JOGAR
	if (escolha1 == 'S' || escolha1 == 's')
	{
		system("cls");
		printf("\t\t\tJOGO DA VELHA\n\n\t\t\tComo jogar?\n\n");
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
		printf("\n\t\tSelecione a linha que quer colocar o X, por exemplo 1.\n\n\t\tSelecione a coluna que quer colocar o X, por exemplo 0.\n\n");

		printf("\t\t\tJOGO DA VELHA\n\n");
		printf("\t\t     0      1     2  \n\n");
		printf("\t\t         |     |     \n");
		printf("\t\t0        |     |     \n");
		printf("\t\t    _____|_____|_____\n");
		printf("\t\t         |     |     \n");
		printf("\t\t1     X  |     |     \n");
		printf("\t\t    _____|_____|_____\n");
		printf("\t\t         |     |     \n");
		printf("\t\t2        |     |     \n");
		printf("\t\t         |     |     \n");
		printf("\n\n\n\t\tJogadores estão preparados?\n\n\n");
		system("pause");
	}
	
//INFORMANDO OS NOMES
	system("cls");
	printf("\n\n\t\t\t\t\tJOGO DA VELHA\n\n\n\n");
	printf("\t\tInforme o nome do jogador 1:");
	scanf("%s", &jogador1);

	do
	{
		printf("\n\t\tVocê quer ser o X ou O?  ");
		fflush(stdin);
		scanf("%c", &escolha2);

		if (escolha2 == 'x' || escolha2 == 'X')
		{
			escolha2 = 'X';
			printf("\n\n\t\tInforme o nome do jogador 2: ");
			scanf("%s", &jogador2);
			escolha3 = 'O';
			printf("\n\t\t%s você é a O \n\n", jogador2);
		}
		else if (escolha2 == 'o' || escolha2 == 'O')
		{
			escolha2 = 'O';
			printf("\n\n\t\tInforme o nome do jogador 2: ");
			scanf("%s", &jogador2);
			escolha3 = 'X';
			printf("\n\t\t%s você é o X \n\n ", jogador2);
		}
		else
		{
			system("cls");
			printf("\n\n\t\t\t\t\tJOGO DA VELHA\n\n\n\n");
		printf("\n\t\t\t+----------------+\n\t\t\t| Opção invalida |\n\t\t\t+----------------+\n\n\t\t\tTente denovo!\n");
			printf("\n\t\tJogador 1: %s\n", jogador1);
		}
	} while (escolha2 != 'X' && escolha2 != 'O' && escolha2 != 'x' && escolha2 != 'o');

//LIMPANDO A MATRIZ DO JOGO
	do
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				jogo[i][j] = '\0';
			}
		}
		
//MATRIZ DO JOGO
		
		if( repetir == 'S' || repetir == 's'){
			system("cls");
		}else{
			printf("\n\n\t\t");
			system("pause");
			system("cls");
		}	
			
			printf("\n\n\t\t\tJOGO DA VELHA\n\n");
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
			
//INÍCIA O JOGO DA VELHA
		do
		{

			if (cont % 2 == 0 && FLAG == 1)
			{
				printf("\n\t\tVez do jogador: %s\n", jogador1);
				printf("\n\t\t%s digite a sua linha: ", jogador1);
				fflush(stdin);
				scanf("%d", &i);
				printf("\n\t\t%s digite a sua coluna: ", jogador1);
				fflush(stdin);
				scanf("%d", &j);
				if (jogo[i][j] != '\0' || i > 2 || j > 2)
				{
					printf("\n\t\t\t+----------------+\n\t\t\t| Opção invalida |\n\t\t\t+----------------+\n\n\t   ");
					system("pause");
				}
				else
				{
					jogo[i][j] = escolha2;
					FLAG = 2;
					cont++;
				}
			}
			else
			{
				printf("\n\t\tVez do jogador: %s\n", jogador2);
				printf("\n\t\t%s digite a sua linha: ", jogador2);
				fflush(stdin);
				scanf("%d", &i);
				printf("\n\t\t%s digite a sua coluna: ", jogador2);
				fflush(stdin);
				scanf("%d", &j);
				if (jogo[i][j] != '\0' || i > 2 || j > 2)
				{
					printf("\n\t\t\t+----------------+\n\t\t\t| Opção invalida |\n\t\t\t+----------------+\n\n\t   ");
					system("pause");
				}
				else
				{
					jogo[i][j] = escolha3;
					FLAG = 1;
					cont++;
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
			
//VERIFICANDO VENCEDOR
			if(jogo[0][0] != '\0' && jogo[0][0] == jogo[0][1] &&  jogo[0][0] == jogo[0][2] ||
				jogo[1][0] != '\0' && jogo[1][0] == jogo[1][1] &&  jogo[1][0] == jogo[1][2] ||
				jogo[2][0] != '\0' && jogo[2][0] == jogo[2][1] &&  jogo[2][0] == jogo[2][2] ||
				jogo[0][0] != '\0' && jogo[0][0] == jogo[1][0] &&  jogo[0][0] == jogo[2][0] ||
				jogo[0][1] != '\0' && jogo[0][1] == jogo[1][1] &&  jogo[0][1] == jogo[2][1] || 
				jogo[0][2] != '\0' && jogo[0][2] == jogo[1][2] &&  jogo[0][2] == jogo[2][2] ||
				jogo[0][0] != '\0' && jogo[0][0] == jogo[1][1] &&  jogo[0][0] == jogo[2][2] ||
				jogo[0][2] != '\0' && jogo[0][2] == jogo[1][1] &&  jogo[0][2] == jogo[2][0]){
				if(FLAG == 2){
					printf("\n\n\t\t\t%c GANHOU!! \n\n\t\t\tPARABÉNS %s!", escolha2, jogador1);
					ganhou1 = ganhou1 + 1;
				}else if(FLAG == 1) {
					printf("\n\n\t\t\t%c GANHOU!! \n\n\t\t\tPARABÉNS %s!", escolha3, jogador2);
					ganhou2 = ganhou2 + 1;
				}
				resultado = 1;
			}
			else if(cont == 8)
			{
				printf("\n\n\t\t\tVELHA");
				resultado = 1;
			}
		}while (cont < 9 && resultado != 1);
		
//REPETIR O JOGO	
		do 
		{
			printf("\n\n\tPara jogar novamente precione S. \t\tPara Finalizar o Jogo Da Velha precione F. ");
			printf("\n\t\t\t\t\t  ---> ");
			fflush(stdin);
			scanf("%c", &repetir);

			if(repetir != 'S' && repetir != 's' && repetir != 'F' && repetir != 'f' ){
				printf("\n\t\t\t+----------------+\n\t\t\t| Opção invalida |\n\t\t\t+----------------+\n\n\t   ");
				system("cls");
				printf("\n\n\t\t\t\t\tJOGO DA VELHA\n\n");
			}
		}while(repetir != 'S' && repetir != 's' && repetir != 'F' && repetir != 'f' );
		if( repetir == 'S' || repetir == 's'){
			FLAG = 1;
			cont  = 0;
			resultado = 0;
		}
	}while(repetir == 'S' || repetir == 's');
	
//FINALIZANDO O JOGO
	system("cls");
	printf("\n\n\t\t\tJOGO DA VELHA\n\n");
	printf("\n\t\t\tPLACAR DO JOGO\n\n\t\t%s %d\tX\t%d %s\n\n", jogador1,  ganhou1, ganhou2, jogador2);
	printf("\n\n\t\t\tFIM DO JOGO\n\n\t\t Obrigada por jogar :)\n\n");
	system("pause");
}
