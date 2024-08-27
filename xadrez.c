#include <stdio.h>
void recursiveTorreLoop(int n,int posicaoTorre){
    if(n > 0){
        if(posicaoTorre==0){
            printf("Direita\n");
        }else if(posicaoTorre==1){
            printf("Esquerda\n");
        }else if(posicaoTorre==2){
            printf("Cima\n");
        }else if(posicaoTorre==3){
            printf("Baixo\n");
        }    
        recursiveTorreLoop(n-1,posicaoTorre); 
    }
}
void recursiveRainhaLoop(int n,int posicaoRainha){
    if(n >0){
        if(posicaoRainha==0){
            printf("Direita\n");
        }else if(posicaoRainha==1){
            printf("Esquerda\n");
        }else if(posicaoRainha==2){
            printf("Cima\n");
        }else if(posicaoRainha==3){
            printf("Baixo\n");
        }
        recursiveRainhaLoop(n-1,posicaoRainha);
    }
}
int main(void){
    int bispo=5; //casas peca
    int posicaoBispo=0; //posicao 0 direita,1 esquerda
    int posicaoBispoDiagonal=0; //0 cima,1 baixo
    int torre=5; 
    int posicaoTorre=0; //posicao 0 direita,1 esquerda,2 cima ,3 baixo
    int rainha=8; 
    int posicaoRainha=1; //posicao 0 direita,1 esquerda,2 cima ,3 baixo    
    int cavalo=2; //cavalo tem formato em L 2 casas + 1
    int posicaoCavaloInicio=0;//0 direita,1 esquerda,2 cima,3 baixo
    int posicaoCavaloFim=2; //0 direita,1 esquerda,2 cima,3 baixo
    
    // Cavalo: 1 vez em L para cima à direita (1 direita + 2 cima)

    printf("Desafio Jogo de Xadrez\n");
    printf("-----\n");
    printf("Bispo:\n"); //colocando loop aninhado
    for (int i = 0; i < bispo; i++)
    {
        for (int j = 0; j < 1 ; j++)
        {
            if(posicaoBispo==0 && posicaoBispoDiagonal==0){
                printf("Cima,Direita\n");
            }else if(posicaoBispo==1 && posicaoBispoDiagonal==0){
                printf("Cima,Esquerda\n");
            }
            if(posicaoBispo==0 && posicaoBispoDiagonal==1){
                printf("Baixo,Direita\n");
            }else if(posicaoBispo==1 && posicaoBispoDiagonal==1){
                printf("Baixo,Esquerda\n");
            }
        }
        
    }
    
    printf("Torre:\n"); //transformando loop simples em recursivo
    recursiveTorreLoop(torre,posicaoTorre);

    printf("Rainha:\n"); //transformando loop simples em recursivo
    recursiveRainhaLoop(rainha,posicaoRainha);
    
    printf("Cavalo:\n"); //loops variaveis multiplas e condicoes multiplas
    if(posicaoCavaloInicio==0||posicaoCavaloInicio==1){
        for (int i = 0,j = 0; i<1 || j < cavalo; i++,j++)
        {
            if(posicaoCavaloFim==2 && i<1){
                printf("Cima\n");
            }else if(posicaoCavaloFim==3 && i<1){
                printf("Baixo\n");
            }
            
            if(posicaoCavaloInicio==0  && j<cavalo){
                printf("Direta\n");           
            }else if(posicaoCavaloInicio==1 && j<cavalo){
                printf("Esquerda\n");
            }
            

        }
    
    }else if(posicaoCavaloInicio==2||posicaoCavaloInicio==3){
        for (int k = 0,m = 0; k<1 || m < cavalo; k++,m++)
        {
            if(posicaoCavaloFim==0 && k<1){
                printf("Direita\n");
            }else if(posicaoCavaloFim==1 && k<1){
                printf("Esquerda\n");
            }
            
            if(posicaoCavaloInicio==2 && m<cavalo){
                printf("Cima\n");           
            }else if(posicaoCavaloInicio==3 && m<cavalo){
                printf("Baixo\n");
            } 
        }
    }
   
    

}