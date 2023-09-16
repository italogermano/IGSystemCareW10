
/* BIBLIOTECAS */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/*FUNÇÃO PRINCIPAL*/
main ()
{

/*LAYOUT*/
system ("color f0");
system ("title IG System Care 2.0.1 - criado por Italo Germano");

/*VARIAVEIS*/
int opcaop, opcaos; char digseg;

while (opcaop!=5)
{

	/*MENU*/
	system ("cls");
	puts ("OPCOES: \n");
	puts ("1-Exibir informacoes do sistema\n"); /*Linha 38-43*/
	puts ("2-Resolver problemas do sistema e disco rigido\n"); /*Linhas 46-153*/
	puts ("3-Configuracoes IP\n"); /*Linhas 156-207*/
	puts ("4-Desfragmentacao e limpeza de disco \n"); /*Linhas 210-273*/
	puts ("5-SAIR\n"); /*Linhas 275-280*/
	printf ("\nSUA OPCAO: ");
	scanf ("%d",&opcaop);
	fflush(stdin);
	printf ("\a");
	system ("cls");

	/*COMANDOS*/
	switch (opcaop)
	{

		case 1:
			puts ("INFORMACOES DO SISTEMA: \n");
			system ("systeminfo");
			printf ("\a\n");
			system ("pause");
			break;

		/*O caso 2 precisará de um "programa secundário"*/
		case 2:
			opcaos=0;
			/*Programa secundario*/
			while (opcaos!=8)
			{
				/*Menu do programa secundario*/
				system ("cls");
				puts ("RESOLVER PROBLEMAS DO SISTEMA E DISCO RIGIDO\n");
				puts ("1-Verificar a integridade de todos os arquivos protegidos do sistema e reparar\nos arquivos com problema, se for possivel\n");
				puts ("2-Apenas verificar a integridade de todos os arquivos protegidos do sistema\n");
				puts ("3-Corrigir erros do disco rigido\n");
				puts ("4-Localizar setores invalidos e recuperar informacoes legiveis\n");
				puts ("5-Abrir ferramenta de restauracao de sistema do Windows\n");
				puts ("6-Diagnostico de memoria do Windows\n");
				puts ("7-Configuracoes do sistema\n");
				puts ("8-VOLTAR PARA O MENU PRINCIPAL\n");
				printf ("\nSUA OPCAO: ");
				scanf ("%d",&opcaos);
				fflush(stdin);
				printf ("\a");
				system ("cls");

				/*Comandos do programa secundario*/
				switch (opcaos)
				{

					case 1:
						puts ("VERIFICAR E REPARAR ARQUIVOS DO SISTEMA\n");
						printf ("Iniciar verificacao? (S/N) ");
						scanf ("%c",&digseg);
						printf ("\a");
						fflush (stdin);
						digseg=tolower(digseg);
						if (digseg=='s')
						{
							system ("cls");
							puts ("VERIFICAR E REPARAR ARQUIVOS DO SISTEMA\n");
							system("sfc/scannow");
							printf ("\a\n\n");
							system ("pause");
						}
						break;

					case 2:
						puts ("VERIFICAR INTEGRIDADE DOS ARQUIVOS DO SISTEMA\n");
						printf ("Iniciar verificacao? (S/N) ");
						scanf ("%c",&digseg);
						printf ("\a");
						fflush (stdin);
						digseg=tolower(digseg);
						if (digseg=='s')
						{
							system ("cls");
							puts ("VERIFICAR INTEGRIDADE DOS ARQUIVOS DO SISTEMA\n");
							system("sfc/verifyonly");
						 	printf ("\a\n\n");
							system ("pause");
					 	}
						break;

					case 3:
						puts("CORRIGIR ERROS DO DISCO RIGIDO\n");
						printf ("A acao nao podera ser interrompida\nDeseja continuar? (S/N) ");
						scanf ("%c",&digseg);
						printf ("\a");
						fflush (stdin);
						digseg=tolower(digseg);
						if (digseg=='s')
						{
							system ("cls");
							puts("CORRIGIR ERROS DO DISCO RIGIDO\n");
							system("chkdsk/f");
							printf ("\a\n\n");
							system ("pause");
						}
						break;

					case 4:
						puts("LOCALIZAR SETORES INVALIDOS E RECUPERAR INFORMACOES LEGIVEIS\n");
						printf ("A acao nao podera ser interrompida\nDeseja continuar? (S/N) ");
						scanf ("%c",&digseg);
						printf ("\a");
						fflush (stdin);
						digseg=tolower(digseg);
						if (digseg=='s')
						{
							system ("cls");
							puts("LOCALIZAR SETORES INVALIDOS E RECUPERAR INFORMACOES LEGIVEIS\n");
							system("chkdsk/r");
							printf ("\a\n\n");
							system ("pause");
						}
						break;

					case 5: system ("rstrui"); break;

					case 6: system ("C:/WINDOWS/system32/MdSched.exe"); break;

					case 7: system ("msconfig"); break;

					case 8: break;

					default: puts ("OPCAO INVALIDA\n"); system ("pause");

				}

			}
			break;

		/*O caso 3 precisará de um "programa secundário"*/
		case 3:
			opcaos=0;
			/*Programa secundario*/
			while (opcaos!=3)
			{
				/*Menu do programa secundario*/
				system ("cls");
				puts ("CONFIGURACOES IP\n");
				puts ("1-Exibir informacoes completas sobre configuracao IP\n");
				puts ("2-Limpar o cache do DNS Resolver\n");
				puts ("3-VOLTAR PARA O MENU PRINCIPAL\n");
				printf ("\nSUA OPCAO: ");
				scanf ("%d",&opcaos);
				fflush(stdin);
				printf ("\a");
				system ("cls");

				/*Comandos do programa secundario*/
				switch (opcaos)
				{

					case 1:
						puts ("INFORMACOES COMPLETAS SOBRE CONFIGURACAO IP: \n");
						system("ipconfig/all");
						printf ("\a\n\n");
						system ("pause");
						break;
					case 2:
						puts ("LIMPAR CACHE DNS\n");
						printf ("A acao nao podera ser desfeita\nDeseja continuar? (S/N) ");
						scanf ("%c",&digseg);
						printf ("\a");
						fflush (stdin);
						digseg=tolower(digseg);
						if (digseg=='s')
						{
							system ("cls");
							puts ("LIMPAR CACHE DNS\n");
							system("ipconfig/flushdns");
							printf ("\a\n\n");
							system ("pause");
						}
						break;

					case 3: break;

					default: puts ("OPCAO INVALIDA\n"); system ("pause");

				}

			}
			break;

		/*O caso 4 precisará de um "programa secundário"*/
		case 4:
			/*Programa secundario*/
			while (opcaos!=5)
			{
				/*Menu do programa secundario*/
				system ("cls");
				puts ("LIMPEZA E DESFRAGMENTACAO\n");
				puts("1-Analisar fragmentacao do disco C\n");
				puts("2-Analisar e desfragmentar disco C\n");
				puts("3-Abrir ferramenta de desfragmentacao do Windows\n");
				puts("4-Abrir ferramenta de limpeza de disco do Windows\n");
				puts("5-VOLTAR PARA O MENU PRINCIPAL\n");
				printf ("\nSUA OPCAO: ");
				scanf ("%d",&opcaos);
				fflush (stdin);
				system ("cls");

				/*Comandos do programa secundario*/
				switch (opcaos)
				{
					case 1:
						puts("ANALISE DO DISCO C:\n");
						printf ("Iniciar analise? (S/N) ");
						scanf ("%c",&digseg);
						fflush (stdin);
						printf ("\a");
						digseg=tolower(digseg);
						if (digseg=='s')
						{
						system ("cls");
						puts("ANALISE DO DISCO C:\n");
						system ("defrag C: /A /U");
						printf ("\a\n\n");
						system ("pause");
						}
						break;

					case 2:
						puts ("ANALISAR E DESFRAGMENTAR DISCO C\n");
						printf ("Iniciar analise? (S/N) ");
						scanf ("%c",&digseg);
						fflush (stdin);
						printf ("\a");
						digseg=tolower(digseg);
						if (digseg=='s')
						{
						system ("cls");
						puts ("ANALISAR E DESFRAGMENTAR DISCO C\n");
						system ("defrag C: /D /U");
						printf ("\a\n\n");
						system ("pause");
						}
						break;

					case 3: system ("C:/WINDOWS/system32/dfrgui.exe"); break;

					case 4: system ("C:/WINDOWS/system32/cleanmgr.exe"); break;

					case 5: break;

					default: puts ("OPCAO INVALIDA\n"); system ("pause");
				}
			}
		break;

		case 5:
			puts ("FIM DO PROGRAMA\n");
			system ("time/t");
			system ("date/t");
			system ("ver");
			break;

		default: puts ("OPCAO INVALIDA\n"); system ("pause");

	}

}

printf ("\n\n");
system ("pause");
printf ("\a");
return (0);

}
