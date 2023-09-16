/* BIBLIOTECAS */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/*FUNÇÃO PRINCIPAL*/
main ()
{

/*LAYOUT*/
system ("color f0");
system ("title IG System Care 1.0 - criado por Italo Germano");

/*VARIAVEIS*/
int opcao;
char digseg;

while (opcao!=8)
{

	/*MENU*/
	puts ("OPCOES: \n");
	puts ("1-Exibir informacoes do sistema\n");
	puts ("2-Verificar a integridade de todos os arquivos protegidos do sistema e reparar\nos arquivos com problema, se for possivel\n");
	puts ("3-Apenas verificar a integridade de todos os arquivos protegidos do sistema\n");
	puts ("4-Corrigir erros do disco\n");
	puts ("5-Localizar setores invalidos e recuperar informacoes legiveis\n");
	puts ("6-Exibir informacoes completas sobre configuracao IP\n");
	puts ("7-Limpar o cache do DNS Resolver\n");
	puts ("8-SAIR\n");
	printf ("\nSUA OPCAO: ");
	scanf ("%d",&opcao);
	fflush(stdin);
	printf ("\a");
	system ("cls");
	
	/*COMANDOS*/
	switch (opcao)
	{
		
		case 1:
			system ("systeminfo");
			printf ("\a");
			puts (" ");
			system ("pause");
			system ("cls");
			break;
			
		case 2:
			printf ("Iniciar verificacao? (S/N) ");
			scanf ("%c",&digseg);
			printf ("\a");
			fflush (stdin);
			digseg=tolower(digseg);
			if (digseg=='s')
			{			
				system("sfc/scannow");
				printf ("\a");
			}
			puts (" ");
			system ("pause");
			system ("cls");
			break;
	
		case 3:
			printf ("Iniciar verificacao? (S/N) ");
			scanf ("%c",&digseg);
			printf ("\a");
			fflush (stdin);
			digseg=tolower(digseg);
			if (digseg=='s')
			{			
				system("sfc/verifyonly");
			 	printf ("\a");
		 	}
			puts (" ");
			system ("pause");
			system ("cls");
			break;
	
		case 4:
			printf ("A acao nao podera ser interrompida\nDeseja continuar? (S/N) ");
			scanf ("%c",&digseg);
			printf ("\a");
			fflush (stdin);
			digseg=tolower(digseg);
			if (digseg=='s')
			{
				system ("cls");
				system("chkdsk/f");
				printf ("\a");
			}
			puts (" ");
			system ("pause");
			system ("cls");
			break;
			
		case 5:
			printf ("A acao nao podera ser interrompida\nDeseja continuar? (S/N) ");
			scanf ("%c",&digseg);
			printf ("\a");
			fflush (stdin);
			digseg=tolower(digseg);
			if (digseg=='s')
			{		
				system ("cls");
				system("chkdsk/r");
				printf ("\a");
			}
			puts (" ");
			system ("pause");
			system ("cls");
			break;
			
		case 6:
			system("ipconfig/all");
			printf ("\a");
			puts (" ");
			system ("pause");
			system ("cls");
			break;
											
		case 7:
			printf ("A acao nao podera ser desfeita\nDeseja continuar? (S/N) ");
			scanf ("%c",&digseg);
			printf ("\a");
			fflush (stdin);
			digseg=tolower(digseg);
			if (digseg=='s')
			{		
				system ("cls");
				system("ipconfig/flushdns");
				printf ("\a");
			}			
			puts (" ");
			system ("pause");
			system ("cls");
			break;
		
		case 8:
			puts ("FIM DO PROGRAMA\n");
			system ("time/t");
			system ("date/t");
			system ("ver");
			break;	
		
		default:
			puts ("OPCAO INVALIDA\n");
			system ("pause");
			system ("cls");
				
	}

}

printf ("\n\n");
system ("pause");
printf ("\a");
return (0);

}


