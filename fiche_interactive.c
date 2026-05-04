#include <stdio.h>

int main(void) {
    char prenom[30];
    int age;
    float note;

    printf("Prenom : ");
    scanf("%29s", prenom);

    printf("Age : ");
    scanf("%d", &age);

    printf("Note moyenne : ");
    scanf("%f", &note);

    printf("\n--- Fiche etudiant ---\n");
    printf("%s, %d ans, moyenne %.2f\n", prenom, age, note);

    return 0;
}
