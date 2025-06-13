#include <stdio.h>


int main() {
   
    char Estado1[50], Estado2[50];
    char Código1[50], Código2[50];
    char Cidade1[50], Cidade2[50];
    int População1, População2;
    float Área1, Área2;
          
    printf("BEM-VINDO AO SUPER TRUNFO ESTADOS\n");

    printf("INSIRA NOME DO ESTADO 1:\n");
    scanf("%49s", Estado1);
    printf("INSIRA NOME DO ESTADO 2:\n");
    scanf("%49s", Estado2);

    printf("INSIRA CÓDIGO DA CARTA 1:\n");
    scanf("%s", Código1);
    printf("INSIRA CÓDIGO DA CARTA 2: \n");
    scanf("%s", Código2);

    printf("INSIRA NOME DA CIDADE 1:\n");
    scanf("%49s", Cidade1);
    printf("INSIRA CÓDIGO DA CIDADE 2:\n");
    scanf("%49s", Cidade2);

    printf("INSIRA POPULAÇÃO 1:\n");
    scanf("%d", População1);
    printf("INSIRA POPULAÇÃO 2:\n");
    scanf("%d", População2);

    printf("INSIRA ÁREA ESTADO 1:\n");
    scanf("%f", Área1);
    printf("INSIRA ÁREA ESTADO 2:\n");
    scanf("%f", Área2);

    printf("ESTADO 1\n");
    printf("%s\n", Estado1);
    printf("%s\n", Código1);
    printf("%s", Cidade1);
    printf("%f", Área1);


    printf("ESTADO 2\n");
    printf("%s\n", Estado2);
    printf("%s\n", Código2);
    printf("%s", Cidade2);
    printf("%f", Área2);


    return 0;
}
