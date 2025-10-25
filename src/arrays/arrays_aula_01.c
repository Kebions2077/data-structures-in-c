#include <stdio.h>

// Este programa lê uma quantidade de notas informada pelo usuário,
// calcula a média dessas notas e exibe o resultado na tela.
float calcularMedia(int qtd){
    float notas[qtd];
    float soma = 0;

    for(int i=0; i< qtd; i++){
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    return soma / qtd;
}

int main(){
    int qtd = 0;
    printf("Digite a quantidade de notas que você quer saber a média: ");
    scanf("%d", &qtd);

    float media = calcularMedia(qtd);
    printf("A média das notas é: %.2f\n", media);

    return 0;
}