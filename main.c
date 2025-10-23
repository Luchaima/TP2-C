#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{


    /* EX1
    int age = 0;

    printf("donne moi ton age : ");
    scanf("%d", & age);

    printf("tu as %d ans", age);

    if(age >= 18) {
        printf("tu es majeur! :) /n");

    } else if (age < 0){
        printf("ERREUR!");

    } else {
        printf( "Tu es mineur! :( ");
    }
    */

    /*EX 2
    int calcul = ( (347 - 467 ) + 120)/( ( 17 + 95 ) * 5 );

    if (calcul == 0){
        printf("le calcul est bon");
    }else {
        printf("le calcul n'est pas bon");

    }
    */

    /* EX3
    float taille = 0;
    printf("Donne moi ta taille en metres : ");
    scanf("%f", &taille);

    float taille_cm = taille * 100;
    printf("Ta taille en cm est %f\n", taille_cm);
    */

    /* EX4
    int numero1 = 0;
    int numero2 = 0;
    printf("donne moi un chiffre: \n");
     scanf("%d", & numero1);
    printf("donne moi un deuxieme chiffre: \n");
     scanf("%d", & numero2);
    if (numero1 > numero2){
        printf("Le plus grand nombre est %d", numero1);
    } else if (numero2 > numero1) {
        printf("Le plus grand nombre est %d", numero2);
    } else{
        printf("les chiffres sont egaux");
    }
    */

    /*EX5
    float note1;
    float note2;
    float note3;
    float moyenne;

    printf("Entrez la première note (sur 20) : ");
    scanf("%f", &note1);
    printf("Entrez la deuxième note (sur 20) : ");
    scanf("%f", &note2);
    printf("Entrez la troisième note (sur 20) : ");
    scanf("%f", &note3);

    moyenne = (note1 + note2 + note3) / 3;

    printf("La moyenne des trois notes est : %.3f\n", moyenne);
    */

    /*EX6
    double nombre;

    printf("Entrer un nombre : ");
    scanf("%lf", &nombre);

    double absolu = fabs(nombre);
    printf("La valeur absolue de %f est %f.\n", nombre, absolu);
    */

    /*EX7
    int nombre;

    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    if (nombre % 2 == 0) {
        printf("%d est pair.\n", nombre);
    } else {
        printf("%d est impair.\n", nombre);
    }
    */

    /*EX8
    int choix;

    printf("=== MENU DU RESTAURANT ===\n");
    printf("1. Pizza\n");
    printf("2. Salade\n");
    printf("3. Sandwich\n");
    printf("4. Pâtes\n");
    printf("5. Quitter\n");
    printf("===========================\n");

    printf("Faites votre choix (1-5) : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            printf("Vous avez choisi : Pizza.\n");
            break;
        case 2:
            printf("Vous avez choisi : Salade.\n");
            break;
        case 3:
            printf("Vous avez choisi : Sandwich.\n");
            break;
        case 4:
            printf("Vous avez choisi : Pates.\n");
            break;
        case 5:
            printf("Merci, à bientôt !\n");
            break;
        default:
            printf("Choix invalide. Veuillez entrer un nombre entre 1 et 5.\n");
            break;
    }
    */

    float taille, poids, imc;

    printf("Entrez votre taille en mètres (ex: 1.75) : ");
    scanf("%f", &taille);

    printf("Entrez votre poids en kilogrammes : ");
    scanf("%f", &poids);

    if (taille <= 0 || poids <= 0) {
        printf("Taille ou poids invalide.\n");
        return 1;
    }

    imc = poids / (taille * taille);

    printf("Votre IMC est : %.2f\n", imc);

    if (imc < 18.5) {
        printf("Interprétation : Maigreur\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Interprétation : Corpulence normale\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Interprétation : Surpoids\n");
    } else if (imc >= 30 && imc < 35) {
        printf("Interprétation : Obésité modérée\n");
    } else if (imc >= 35 && imc < 40) {
        printf("Interprétation : Obésité sévère\n");
    } else {
        printf("Interprétation : Obésité morbide\n");
    }


    return 0;
}
