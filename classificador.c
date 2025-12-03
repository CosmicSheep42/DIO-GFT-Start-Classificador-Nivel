#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int xp;
    char nivel[20];
    
    printf("Como vai viajante? Gostaria de consultar seu nivel atual?\n");
    printf("Diga seu nome para que eu possa procurar nos registros:\n ");
    scanf("%s", nome);
    printf("Muito bem, %s!\n", nome);
    printf("Deixe-me ver... Parece que nossos registros possuem erros.\n");
    printf("Informe seu XP atual para que eu possa corrigir seu nivel:\n ");
    scanf("%d", &xp);

    if (xp > 0 && xp <= 1000)
    {
        strcpy(nivel, "Ferro");
    }       
    else if (xp > 1000 && xp <= 2000)
    {
        strcpy(nivel, "Bronze");
    }
    else if (xp > 2000 && xp <= 5000)
    {
        strcpy(nivel, "Prata");
    }
    else if (xp > 5000 && xp <= 7000)
    {
        strcpy(nivel, "Ouro");
    }
    else if (xp > 7000 && xp <= 8000)
    {
        strcpy(nivel, "Platina");
    }
    else if (xp > 8000 && xp <= 9000)
    {
        strcpy(nivel, "Ascendente");
    }
        else if (xp > 9000 && xp <= 10000)
    {
        strcpy(nivel, "Imortal");
    }
    else if (xp > 10000)
    {
        strcpy(nivel, "Radiante");
    }
    else
    {
        printf("Valor de XP invalido.\n");
        return 0;
    }
    printf("Obrigado, %s! Com %d de XP, seu nivel atual e: %s.\n", nome, xp, nivel);
    return 0;
}


