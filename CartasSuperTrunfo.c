#include <stdio.h>


int main() {
   
    char Estado1[50], Estado2[50];
    char Código1[50], Código2[50];
    char Cidade1[50], Cidade2[50];
    int População1, População2;
    float Área1, Área2;
          
    printf("BEM-VINDO AO SUPER TRUNFO ESTADOS\n");

    printf("INSIRA NOME DO ESTADO 1:\n");
    scanf("%10s", Estado1);
    printf("INSIRA NOME DO ESTADO 2:\n");
    scanf("%10s", Estado2);

    printf("INSIRA CÓDIGO DA CARTA 1:\n");
    scanf("%s\n", Código1);
    printf("INSIRA CÓDIGO DA CARTA 2:\n");
    scanf("%s\n", Código2);

    printf("ESTADO 1\n");
    printf("%s\n", Estado1);
    printf("%s\n", Código1);

    printf("ESTADO 2\n");
    printf("%s\n", Estado2);
    printf("%s\n", Código2);



    return 0;
}
