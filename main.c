#include <stdio.h>
#include <string.h>
#define MAX_ALUNOS 30
struct Aluno {

    char nome[30];
    float nota[3];
};

struct Aluno lista_alunos[MAX_ALUNOS];
int total_alunos = 0;
int notas = 3;

float calcular_media_individual(float nota1, float nota2, float nota3){
    return (nota1 + nota2 + nota3) / 3.0;
}

void cadastrar_aluno(){

    if(total_alunos >= MAX_ALUNOS){
        printf("Turma Cheia! Nao eh possivel cadastrar mais de %d alunos.\n", total_alunos);
        return;
    }
    
    printf("Digite o nome do aluno: ");
    scanf("%s", lista_alunos[total_alunos].nome);

    for(int i = 0; i < notas; i++){
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &lista_alunos[total_alunos].nota[i]);
    }
    total_alunos++;
    printf("Aluno cadastrado com sucesso!\n");
}


void listar_aluno(){
    printf("\n\n-----LISTA DE ALUNOS CADASTRADOS----\n\n");

    for(int i = 0; i < total_alunos; i++){   
        printf("%d - Nome: %s | Notas: %.2f, %.2f, %.2f | Media: %.2f \n", 
            i + 1,  
            lista_alunos[i].nome, 
            lista_alunos[i].nota[0], 
            lista_alunos[i].nota[1], 
            lista_alunos[i].nota[2], 
            calcular_media_individual(lista_alunos[i].nota[0], lista_alunos[i].nota[1], lista_alunos[i].nota[2])
        );
    }
}

int buscar_aluno(char buscar_nome[]){
    for(int i = 0; i < total_alunos; i++){
        if(strcmp(lista_alunos[i].nome, buscar_nome) == 0){
            return i;
        }
    }
    return -1;
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
            cadastrar_aluno();
            printf("Credenciamento concluído!\n");
            continue;
        }

        if(opcao_usuario == 2){//Ao finalizar refatorar para que o usuario tem a opção de escolher se quer ver a listagem de um aluno ou quanto ele quiser.
            
            printf("No momento a funcionalidade só permite a listagem completa dos alunos\nDeseja Continuar? 1 para S e 2 para N: ");
            
            int opcao_listar;

            int lido1 = scanf("%d", &opcao_listar);

            if (lido1 != 1) {
                printf("Entrada invalida! Digite apenas numeros.\n");
                while (getchar() != '\n');
                continue;
            }

            listar_aluno();
            printf("\n\nListagem concluída (%d alunos)\n", total_alunos);
            continue;
        }

        if (opcao_usuario == 3){//implementar uma funcionalidade se o usuário desejar procurar outro estudante depois

            char buscar_nome[30];
            printf("\n\nDigite o nome do aluno que deseja procurar: ");
            scanf("%s", buscar_nome);

            int posicao = buscar_aluno(buscar_nome);

            if(posicao == -1){
                printf("\nAluno não encontrado!\n");
            }
            else{
                printf("\nAluno encontrado!\n\n===RELATORIO ESTUDANTIL===\n");
                printf("%d - Nome: %s | Notas: %.2f, %.2f, %.2f | Media: %.2f\n", 
                    posicao + 1,
                    lista_alunos[posicao].nome,
                    lista_alunos[posicao].nota[0],
                    lista_alunos[posicao].nota[1],
                    lista_alunos[posicao].nota[2],
                    calcular_media_individual(lista_alunos[posicao].nota[0], lista_alunos[posicao].nota[1], lista_alunos[posicao].nota[2])
                );
            }

        }
    
    }
    
    return 0;

}