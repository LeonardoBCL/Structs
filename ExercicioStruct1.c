/*Crie um programa usando Struct com as informações abaixo: 

[Funcionário]
Nome
Data de admissão
Matrícula
Endereço

[Cliente]
Nome
Data de nascimento
Endereço

Utilize vetores e estrutura de repetição para solicitar informações de 3 funcionários e de 3 clientes.
Mostre os dados do usuário*/


struct dados_funcionario{
char nome [200];
char data_adm [200];
int matricula [200];
char endereco [200];

};

struct dados_cliente {
char nome [200];
char data_n [200];
char endereco [200];
};


int main(){

struct dados_funcionario dados_funcionario[3];
struct dados_cliente dados_cliente[3];
int contador = 0;


printf("\n Solicitando dados: \n");

for(contador = 0; contador < 3; contador++){
printf("Insira o seu nome: \n" );
gets(dados_funcionario[3].nome);
printf("Insira a sua data de admissão:\n ");
gets(dados_funcionario[3].data_adm);
printf("Insira a sua matricula:\n ");
gets(dados_funcionario[3].matricula);
printf("Insira o seu endereco: \n");
gets(dados_funcionario[3].endereco);
}

system("CLS||CLEAR");
printf("\n Solicitando dados do cliente: \n");

for(contador = 0; contador < 3; contador++){
printf("Insira o seu nome: \n");
gets(dados_cliente[3].nome);
printf("Insira a sua data de nascimento: \n");
gets(dados_cliente[3].data_n);
printf("Insira o seu endereco: \n");
gets(dados_cliente[3].endereco);
}

system("CLS||CLEAR");


printf("Exibindo cadastros: \n");

for(contador = 0; contador < 3; contador++){
printf("Nome do funcionario: \n");
printf("%s", &dados_funcionario[contador].nome);
printf("Data de admissão dos funcionarios: \n");
printf("%s", &dados_funcionario[3].data_adm);
printf("Matricula dos funcionarios: ");
printf("%s", &dados_funcionario[3].matricula);
printf("Enderecos do funcionario: \n");
printf("%s", &dados_funcionario[3].endereco);
}

for(contador = 0; contador < 3; contador++){
printf("Nome do cliente: \n");
printf("%s", &dados_cliente[3].nome);
printf("Data de nascimento do cliente: \n");
printf("%s", &dados_cliente[3].data_n);
printf("Endereco: \n");
printf("%s", &dados_cliente[3].endereco);


}
return 0;




}