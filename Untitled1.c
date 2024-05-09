#include <stdio.h>

int main(){
    char nome[10], senha[5];
    printf("DIGITE O USUARIO: ");
    scanf("%s", &nome);
    printf("DIGITE A SENHA: ");
    scanf("%s", &senha);
    if ((nome == 6422294) && (senha == 6422289)){
        printf("\nCREDENCIAIS CORRETAS, SEJA BEM VINDO!");
    } else {
        printf("\nLOGIN OU SENHA INCORRETOS");
    }
}
