#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h>  //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string
int registro()
{
	

	 char arquivo [40];
     char cpf[40];
     char nome [40];
     char sobrenome [40];
     char cargo [40];
     
    printf("Digite o CPF a ser cadastrado: ");
    scanf("%s", cpf);

    strcpy(arquivo,cpf);//Responsavel por copiar os valores das strings

    FILE *file; //cria o arquivo
    file = fopen(arquivo, "w");//cria arquivofprint
    fprintf(file,cpf);//salva o valor da variavel
    fclose(file);//fecha arquivo

    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);

    printf("Digite um nome  a ser cadastrado: ");
    scanf("%s", nome);

    file = fopen(arquivo, "a");
    fprintf(file, nome);
    fclose(file);

    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);

    printf("Digite o sobrenome  a ser cadastrado: ");
    scanf("%s", sobrenome);

    file = fopen(arquivo, "a");
    fprintf(file, sobrenome );
    fclose(file); 

    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);

    printf("Digite o cargo ser cadastrado: ");
    scanf("%s", cargo);

    file = fopen(arquivo, "a");
    fprintf(file, cargo);
    fclose(file);

    system("pause");
	  
	 
	      
	
}

int consulta()


{
	
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
char cpf [40];
	char conteudo [200];

	printf("Digite o CPF a ser consultado");
	scanf("%s",cpf);
		
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file == NULL)
    {
    	printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
    }   
	
	while(fgets(conteudo,200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio:");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}
      
int deletar()
{
	printf ("Voc� escolheu deletar nomes!\n");
    system("pause");
}

int main()
{
	int opcao=0; //Definindo v�riaveis
	int x=1;
	
	for(x=1;x=1;)
	{
		
		system("cls");
	
	
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	printf ("### Cart�rio da EBAC ###\n\n"); //In�cio do menu
	printf ("Escolha a op��o desejada do menu: \n\n");
	printf ("\t1 - Registrar nomes \n");
	printf ("\t2 - Consultar nomes  \n");
	printf ("\t3 - Deletar nomes \n"); //Fim do menu
	printf ("\t4 - Sair do sistema \n\n"); //Fim do menu
	printf ("Op��o:"); // Fim do Menu
	scanf("%d" , &opcao); //Armazanando a escolha do usu�rio
	
    system ("cls");
    
    switch(opcao)
    {
    	case 1:
        registro();
    	break;
    		
    	case 2:
    	consulta();
    	break;
    			
    	case 3:
        deletar ();
    	break;
    	
    	case 4:
    		printf("Obrigado por utilizar o sistema!\n");
    		return 0;
    		break;
    	
    	
    					
    	default:
        printf("Essa op��o n�o est� disponivel!\n");
    	system("pause");
    	break;
    	  }
    		
    }
    
}
    

