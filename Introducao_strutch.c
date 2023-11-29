//Exemplo:

/*
Livro Capitões de areia
preço : 34 R$
Protagonista: Pedro Bala
Região: Bahia
Peso: 0.2 
*/

#include <stdio.h>
#include <stdlib.h>



//Utilizando a Strutch:

struct livro_cpt
{
    float preco;
    char* nome_livro;
    char* protagonista;
    char* regiao;

};

//EXibe:

void imprime_livro_infos ( struct livro_cpt c)
{
    printf(" Preco: %.2f \n", c.preco);
    printf(" Nome: %s\n ", c.nome_livro);
    printf(" Protagonista: %s \n", c.protagonista);
    printf(" Regiao do livro: %s \n", c.regiao);
}

int main(int argc, char * argv[])
{

struct livro_cpt livro1;

livro1.preco = 35.00;
livro1.nome_livro = "Capitoes de Areia";
livro1.protagonista = "Pedro Bala";
livro1.regiao = "Bahia";

//Chamando a print do struct:
imprime_livro_infos(livro1);

return 0;
}







