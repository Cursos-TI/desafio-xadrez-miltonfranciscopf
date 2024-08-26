#include <stdio.h>

int main(void){
    int bispo=5; //casas peca
    int posicaoBispo=0; //posicao 0 direita,1 esquerda
    int posicaoBispoDiagonal=0; //0 cima,1 baixo
    int torre=5; 
    int posicaoTorre=0; //posicao 0 direita,1 esquerda,2 cima ,3 baixo
    int rainha=8;
    int posicaoRainha=1; //posicao 0 direita,1 esquerda,2 cima ,3 baixo
    int resultado;
    

    printf("Desafio Jogo de Xadrez\n");
    printf("-----\n");
    printf("USANDO (FOR):\n");
    printf("Bispo:\n");
    for (int i = 0; i < bispo; i++)
    {
        switch (posicaoBispoDiagonal)
        {
        case 0:
            if(posicaoBispo==0){
            printf("Cima,Direita\n");
                }else if(posicaoBispo==1){
                    printf("Cima,Esquerda\n");
                }
            break;
        case 1:
            if(posicaoBispo==0){
                printf("Baixo,Direita\n");
                }else if(posicaoBispo==1){
                    printf("Baixo,Esquerda\n");
                }
            break;
        
        default:
            break;
        }
    }
    printf("Torre:\n");

    for (int j = 0; j < torre; j++)
    {
        if(posicaoTorre==0){
            printf("Direita\n");
        }else if(posicaoTorre==1){
            printf("Esquerda\n");
        }else if(posicaoTorre==2){
            printf("Cima\n");
        }else if(posicaoTorre==3){
            printf("Baixo\n");
        }
    }
    printf("Rainha:\n");

    for (int k = 0; k < rainha; k++)
    {
        if(posicaoRainha==0){
            printf("Direita\n");
        }else if(posicaoRainha==1){
            printf("Esquerda\n");
        }else if(posicaoRainha==2){
            printf("Cima\n");
        }else if(posicaoRainha==3){
            printf("Baixo\n");
        }
    }

    printf("USANDO (WHILE):\n");
    printf("-----\n");
    printf("Bispo:\n");
    int m=0;
    while (m<bispo)
    {
        switch (posicaoBispoDiagonal)
        {
        case 0:
            if(posicaoBispo==0){
            printf("Cima,Direita\n");
                }else if(posicaoBispo==1){
                    printf("Cima,Esquerda\n");
                }
            break;
        case 1:
            if(posicaoBispo==0){
            printf("Baixo,Direita\n");
                }else if(posicaoBispo==1){
                    printf("Baixo,Esquerda\n");
                }
            break;
        
        default:
            break;
        }
        m++;
    }
    printf("Torre:\n");
    int y=0;
    while (y<torre)
    {
        if(posicaoTorre==0){
            printf("Direita\n");
        }else if(posicaoTorre==1){
            printf("Esquerda\n");
        }else if(posicaoTorre==2){
            printf("Cima\n");
        }else if(posicaoTorre==3){
            printf("Baixo\n");
        }
        y++;
    }
    
    printf("Rainha:\n");
    int w=0;
    while (w<rainha)
    {
        if(posicaoRainha==0){
            printf("Direita\n");
        }else if(posicaoRainha==1){
            printf("Esquerda\n");
        }else if(posicaoRainha==2){
            printf("Cima\n");
        }else if(posicaoRainha==3){
            printf("Baixo\n");
        }
        w++;
    }
    
    printf("USANDO (DO WHILE):\n");
    printf("-----\n");
    printf("Bispo:\n");
    int z=0;
    do
    {
        switch (posicaoBispoDiagonal)
        {
        case 0:
            if(posicaoBispo==0){
            printf("Cima,Direita\n");
                }else if(posicaoBispo==1){
                    printf("Cima,Esquerda\n");
                }
            break;
        case 1:
            if(posicaoBispo==0){
            printf("Baixo,Direita\n");
                }else if(posicaoBispo==1){
                    printf("Baixo,Esquerda\n");
                }
            break;
        
        default:
            break;
        }
        z++;
    } while (z<bispo);

    printf("Torre:\n");
    int a=0;
    do
    {
        if(posicaoTorre==0){
            printf("Direita\n");
        }else if(posicaoTorre==1){
            printf("Esquerda\n");
        }else if(posicaoTorre==2){
            printf("Cima\n");
        }else if(posicaoTorre==3){
            printf("Baixo\n");
        }
        a++;
    } while (a<torre);

    printf("Rainha:\n");
    int b=0;
    do
    {
        if(posicaoRainha==0){
            printf("Direita\n");
        }else if(posicaoRainha==1){
            printf("Esquerda\n");
        }else if(posicaoRainha==2){
            printf("Cima\n");
        }else if(posicaoRainha==3){
            printf("Baixo\n");
        }
        b++;   
    } while (b<rainha);
    
    
   
    

}