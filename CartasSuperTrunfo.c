#include <stdio.h> //INCLUSÃO DE BIBLIOTECA

//INICIO DO CÓGIGO //CADASTRO DE VARIAVEIS DAS CARTAS
int main() {
   
    char Estado1[50], Estado2[50];
    char Codigo1[50], Codigo2[50];
    char Cidade1[50], Cidade2[50];
    int Populacao1, Populacao2,Turismo1, Turismo2;
    float Area1, Area2, PIB1, PIB2;
    
    // ABERTURA DO JOGO E INSTRUÇÕES AO JOGADOR

    printf("BEM-VINDE AO SUPER TRUNFO ESTADOS\n");
    printf("A SEGUIR INFORME OS DADOS DAS CARTAS DO SUPER TRUNFO\n");

    //ENTRADA DE DADOS DAS CARTAS PELO JOGADOR

    printf("INSIRA NOME DO ESTADO 1:\n");
    scanf("%49s", Estado1);
    printf("INSIRA NOME DO ESTADO 2:\n");
    scanf("%49s", Estado2);

    printf("INSIRA CÓDIGO DA CARTA 1:\n");
    scanf("%s", Codigo1);
    printf("INSIRA CÓDIGO DA CARTA 2: \n");
    scanf("%s", Codigo2);

    printf("INSIRA NOME DA CIDADE 1:\n");
    scanf("%49s", Cidade1);
    printf("INSIRA CÓDIGO DA CIDADE 2:\n");
    scanf("%49s", Cidade2);

    printf("INSIRA POPULAÇÃO 1:\n");
    scanf("%d", &Populacao1);
    printf("INSIRA POPULAÇÃO 2:\n");
    scanf("%d", &Populacao2);

    printf("INSIRA ÁREA ESTADO 1:\n");
    scanf("%f", &Area1);
    printf("INSIRA ÁREA ESTADO 2:\n");
    scanf("%f", &Area2);

    printf("INSIRA PIB ESTADO 1:\n");
    scanf("%f", &PIB1);
    printf("INSIRA PIB ESTADO 2:\n");
    scanf("%f", &PIB2);

    printf("INSIRA QUANTIDADE DE PONTOS TURISTICOS DO ESTADO 1:");
    scanf("%d", &Turismo1);
     printf("INSIRA QUANTIDADE DE PONTOS TURISTICOS DO ESTADO 2:");
    scanf("%d", &Turismo2);

    //SAÍDA DE DADOS DAS CARTAS DO SUPER TRUNFO C

    printf("VEJA AGORA O RESULTADO DA RODADA:\n");

    printf("--- CARTA DE ESTADO 1---\n");
    printf("NOME: %s\n", Estado1);
    printf("CÓDIGO: %s\n", Codigo1);
    printf("CIDADE: %s\n", Cidade1);
    printf("ÁREA: %f\n", Area1);
    printf("POPULAÇÃO: %d\n", Populacao1);


    printf("--- CARTA DE ESTADO 2---\n");
    printf("NOME: %s\n", Estado2);
    printf("CÓDIGO: %s\n", Codigo2);
    printf("CIDADE: %s\n", Cidade2);
    printf("ÁREA: %f\n", Area2);
    printf("POPULAÇÃO: %d\n", Populacao2);

    //FINALIZAÇÃO E ESPAÇO PARA CRÉDITOS

    printf("_________________\n");

    printf("OBRIGADO POR JOGAR!\n");

    printf("DEVELOPED BY: CISINHO\n");

    return 0;
}
