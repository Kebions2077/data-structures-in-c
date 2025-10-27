#include <stdio.h>
#include <stdlib.h>

#define MAX 60

float descobre(float *notas,int t){
float temp;
temp=0;
for(int q=0;q<t;q++){
    temp+=notas[q];
    }
return temp/t;
}
void carrega(int t,float *notas){
    for(int k=0;k<t;k++){
        printf("Digite sua nota:\n");
        scanf("%f",&notas[k]);
    }
}

int main(void){
    int t;
    float media;
    float *notas;
    notas=NULL;
printf("Digite o Numero de notas necessarias para o calculo da media:\n");
scanf("%i",&t);
notas=malloc(t*sizeof(float));

if(notas==NULL){
fprintf(stderr,"Erro De Alocação");
}
carrega(t,notas);
media=descobre(notas,t);
printf("Sua Media:%.2f\n",media);

if(media>=MAX){
    printf("Aprovado!!\n");
}
else{
    printf("Reprovado\n");
}

free(notas);

return 0;

}
