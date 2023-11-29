#include <stdio.h>
#include <stdlib.h>




//1. Estrutura struct fora do int main, criando a variável e sua tipagem.

struct dados_livros {
	char nome [200];
	char autor [200];
	char categoria [200];
	float preco;
};

//2. Criando tipo para mostrar a struct.

void imprime_informacao (struct dados_livros info[]){
    int i;
	for(i = 0; i < 3; i++) {
		printf("\nNome do livro: %s \n", info[i].nome);
	    printf("Autor do livro: %s \n", info[i].autor);
	    printf("Categoria: %s", info[i].categoria);
	    printf("Imprime preco: %.2f", info[i].preco);
	}
}


//Após a estrutura( struct ), e criação do void e um tipo para chamar. As informações


int main(int argc, char * argv[]){
	int contador = 0;

    struct dados_livros livro[3];

	for(contador = 0; contador < 3; contador++){
		printf("Insira o nome do livro: \n ");
		gets(livro[contador].nome);
	
	    printf("Insira o autor do livro: \n ");
	    gets(livro[contador].autor );
	
	    printf("Insira a categoria do livro: \n ");
	    gets(livro[contador].categoria);
	
	    printf("Insira o preco do livro: \n");
	    scanf("%f", &livro[contador].preco);
	
		fflush(stdin);
	}
	
	//Imprimindo:
	imprime_informacao(livro);
	
	return 0;
}
