#include <stdio.h>

struct Aluno {

    char nome[30];
    float nota[3];
};

struct Aluno lista_alunos[30];
int total_alunos = 0;
int notas = 3;

void cadastrar_aluno(){
    
    printf("Digite o nome do aluno: ");
    scanf("%s", lista_alunos[total_alunos].nome);

    for(int i = 0; i < notas; i++){
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &lista_alunos->nota[i]);
    }

    total_alunos++;
    printf("Aluno cadastrado com sucesso!\n");
}


int main(){
    int opcao_usuario;

    while(1){

        printf("1- Cadastar aluno\n2- Listar todos\n3- Buscar por nome \n4- Estatisticas\n5- Sair\n");
        printf("Digite sua opcao: ");
        
        int lido = scanf("%d", &opcao_usuario);

        if (lido != 1) {
            printf("Entrada invalida! Digite apenas numeros.\n");
            while (getchar() != '\n');
            continue;
        }

        if(opcao_usuario < 1 || opcao_usuario > 5){
            printf("ALERTA: Não é permitido caracteres especiais ou numeros menores de 1 ou acima de 5.\n\n");
            continue;
        }

        if(opcao_usuario == 1){
            cadastrar_aluno(lista_alunos);
            printf("Credenciamento concluído!\n");
            continue;
        }
    
    }
    
    return 0;

}