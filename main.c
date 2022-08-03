#include <unistd.h> //ligne d'inclusion de la bibliothèque unistd.h, directive de preprocesseur

void ma_function(void) //void veut dire que la fonction ne renvoie rien et ne prend pas de paramètres
{
    write(1, "C'est une fonction qui affiche un caractère\n", 42); //ligne d'écriture sur la sortie standard, 42 est le nombre de caractères à écrire  
}

int main(void)
{ 
	ma_function(); //appel de la fonction ft_putchar
	return 0; //retour de la fonction main
}

/*
*   %c = caractère
*   %s = chaîne de caractères
*   %d = nombre entier
*   %i = nombre entier
*   %u = nombre entier non signé
*   %o = nombre entier non signé en octal
*   %x = nombre entier non signé en hexadécimal
*   %X = nombre entier non signé en hexadécimal en majuscule
*   %f = nombre décimal
*   %e = nombre décimal en format scientifique
*   %E = nombre décimal en format scientifique en majuscule
*   %g = nombre décimal en format scientifique ou en format décimal
*   %G = nombre décimal en format scientifique ou en format décimal en majuscule
*   %p = adresse mémoire
*   %n = nombre de caractères écrits
*   %b = nombre en binaire
*/

/*  mettre une chaine de caractères dans une function
char *ft_print_comb(char chaine[])
{
    int i = 0;

        while (chaine[i] != '\0') {
            if (chaine[i] >= 'a' && chaine[i] <= 'z')
            {
		    i++;
            }
        }
    return (chaine);
}

int main()
{
    char chaine_main[255];
    scanf("%s", chaine_main);
    ft_print_comb(chaine_main);
    printf(&chaine_main);
    return (0);
}

*/