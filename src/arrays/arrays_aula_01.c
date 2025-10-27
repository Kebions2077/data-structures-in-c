#include <stdio.h>
#include <stdlib.h>

float cal(float *p, int n){
    float m;
    m=0;
    for(int y=0;y<n;y++){
        m+= p[y];
    }
    return m/n;
}
void clear() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main(void){
    int n,x;
    n=x=0;
    float *p,media;
    p=NULL;
    printf("-----------------Calcular Media-----------------\n");
    printf("Digite quantas notas deseja para fazer a media:\n");
     printf("-------------------------------------------------\n");
    scanf("%i",&n);
    p=malloc(n*sizeof(float));
    if(p==NULL){
        fprintf(stderr,"Erro De Memoria");
        exit(1);
    }
    clear();

   while(x!=n){

        printf("-----------------------\n");
        printf("Digite a nota:\n");
        scanf("%f",&p[x]);
        printf("-----------------------\n");
        x++;




    }
    media=cal(p,n);
    clear();
    printf("Sua Media:%.2f",media);
    free(p);
    return 0;
}
