#include <stdio.h>


int main() {
   
    char Estado1[50], Estado2[50];
    char Codigo1[50], Codigo2[50];
    char Cidade1[50], Cidade2[50];
    int Populacao1, Populacao2;
    float Area1, Area2;
          
    printf("BEM-VINDo AO SUPER TRUNFO ESTADOS\n");

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

    printf("ESTADO 1\n");
    printf("%s\n", Estado1);
    printf("%s\n", Codigo1);
    printf("%s\n", Cidade1);
    printf("%f\n", Area1);


    printf("ESTADO 2\n");
    printf("%s\n", Estado2);
    printf("%s\n", Codigo2);
    printf("%s\n", Cidade2);
    printf("%f\n", Area2);

    printf("OBRIGADO POR JOGAR!");

    return 0;
}
