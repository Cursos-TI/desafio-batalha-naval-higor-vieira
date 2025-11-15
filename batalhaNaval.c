#include <stdio.h>

int main() {

    char colunas [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};   //Definine as colunas para impressão do tabuleiro
    int tabuleiro[10][10] = {                                                //Define a matriz principal do tabuleiro
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };


    for (int navio1 = 3; navio1 <= 5; navio1++){    //Posiciona o primeiro navio horizontalemnte
        tabuleiro[3][navio1] = 3;
    }

    for (int navio2 = 6; navio2 <= 8; navio2++){    //Posiciona o segundo navio verticalmente
        tabuleiro[navio2][6] = 3;
    }

    printf(" ");    //Espaço para ajuste de impressão

    for (int c = 0; c < 10; c++){   //imprime as colunas para o tabuleiro
        printf(" %c", colunas[c]);
    }
    printf("\n");   //Quebra de colunas para ajuste de impressão


    
    for (int x = 0; x < 10; x++) {
    printf("%d", x + 1);    
    for (int y = 0; y < 10; y++) {
        printf(" %d", tabuleiro[x][y]);    //Loop alinhado para imprimir as linhas + a matriz do tabuleiro 
    }
    printf("\n");   //Quebra de colunas para ajuste de impressão
}


    return 0;
}
