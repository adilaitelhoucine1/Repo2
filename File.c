#include <stdio.h>

int main() {
    int date;
    printf("entrer votre annee de naissance\n");
    scanf("%d",&date);
    if(date<=0 || date > 2024){
                printf("vous etes %d ans",2024-date);

    }
    return 0;
}
