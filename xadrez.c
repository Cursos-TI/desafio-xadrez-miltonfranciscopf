#include <stdio.h>

int main(void){
    int bispo=5; //casas peca
    int posicaoBispo=0; //posicao 0 direita,1 esquerda
    int posicaoBispoDiagonal=0; //0 cima,1 baixo
    int torre=5; 
    int posicaoTorre=0; //posicao 0 direita,1 esquerda,2 cima ,3 baixo
    int rainha=8; 
    int posicaoRainha=1; //posicao 0 direita,1 esquerda,2 cima ,3 baixo
    int rei=1; 
    int posicaoRei=0;
    int peao=1; 
    int posicaoPeao=0;
    
    int cavalo=2; //cavalo tem formato em L 2 casas + 1
    int posicaoCavaloInicio=0;//0 direita,1 esquerda,2 cima,3 baixo
    int posicaoCavaloFim=2; //0 direita,1 esquerda,2 cima,3 baixo
    

    printf("Desafio Jogo de Xadrez\n");
    printf("-----\n");
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
    
    printf("Cavalo:\n");
    if(posicaoCavaloInicio==0||posicaoCavaloInicio==1){
        int ca = 0;
        while ( ca < 1)
        {
            for (int ga = 0; ga < cavalo;ga++)
            {
                if(posicaoCavaloInicio==0 ){
                printf("Direta");           
                }else if(posicaoCavaloInicio==1){
                printf("Esquerda");
                }
                printf(",");
            }
            if(posicaoCavaloFim==2){
                printf("Cima");
            }else if(posicaoCavaloFim==3){
                printf("Baixo");
            }
            ca++;
        }
    
    }else if(posicaoCavaloInicio==2||posicaoCavaloInicio==3){
        int ja = 0;
        while (ja < 1)
        {
            for (int ya = 0; ya < cavalo;ya++)
            {
                if(posicaoCavaloInicio==2 ){
                printf("Cima");           
                }else if(posicaoCavaloInicio==3){
                printf("Baixo");
                } 
                printf(","); 
            }
            if(posicaoCavaloFim==0){
                printf("Direita");
            }else if(posicaoCavaloFim==1){
                printf("Esquerda");
            }
            ja++;
        }

       
        
    }

    //imprimi o cavalo diferente pois estava assim no documento 
   
    

}