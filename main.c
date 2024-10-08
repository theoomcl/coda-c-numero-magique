#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(NULL));

    // L'ordi choisit un nombre aléatoire entre 1 et 100 inclus
    int nombreADeviner = rand() % 100 + 1;
    int nombreUtilisateur = 0;

    printf("Devinez le nombre choisi par l'ordinateur (entre 1 et 100) :\n");

    // Boucle qui continue tant que l'utilisateur n'a pas trouvé le bon nombre
    while (nombreUtilisateur != nombreADeviner) {
        // Demander à l'utilisateur d'entrer un nombre
        printf("Entrez un nombre : ");
        scanf("%d", &nombreUtilisateur);

      
        if (nombreUtilisateur < nombreADeviner) {
            printf("C'est plus grand !\n");
        }
        
        else if (nombreUtilisateur > nombreADeviner) {
            printf("C'est plus petit !\n");
        }
      
        else {
            printf("Bravo ! Vous avez deviné le bon nombre : %d\n", nombreADeviner);
        }
    }

    return 0;
}
