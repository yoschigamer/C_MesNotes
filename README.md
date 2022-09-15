Le C
===============================
```c
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

```

Gestion de la mémoire en C
https://ilay.org/yann/articles/mem/



1
===============================

| 0 |   Les Signes   |
|:-:|:--------------:|
| + |    addition    |
| - |  soustraction  |
| * | multiplication |
| / |    division    |
| % |     modulo     |


2
===============================

| 0  |     Les Signes    |
|:--:|:-----------------:|
| == |      égalité      |
| != |     différence    |
|  > |     supérieur     |
|  < |     inférieur     |
| >= | supérieur ou égal |
| <= | inférieur ou égal |
|  = |    affectation    |
|  ^ |        xor        |
| << |    shift gauche   |
| >> |    shift droite   |
|  ~ |     complément    |

3
===============================

| 0    | Comparateur |
|------|-------------|
|  &&  |      et     |
| \|\| |      ou     |
|   !  |  différent  |

4
===============================

|                       tableau ou array                       |   |
|:------------------------------------------------------------:|:-:|
|        array[x] = {valeur, valeur, valeur, ...,  NULL}       |   |
|      array[x] = valeur x reprèsent la taille du tableau      |   |

5
===============================

| 0  | Comparateur                                                             |
|----|-------------------------------------------------------------------------|
| %c |                                caractère                                |
| %s |                           chaîne de caractères                          |
| %d |                              nombre entier                              |
| %i |                              nombre entier                              |
| %u |                         nombre entier non signé                         |
| %o |                     nombre entier non signé en octal                    |
| %x |                  nombre entier non signé en hexadécimal                 |
| %X |           nombre entier non signé en hexadécimal en majuscule           |
| %f |                              nombre décimal                             |
| %e |                  nombre décimal en format scientifique                  |
| %E |            nombre décimal en format scientifique en majuscule           |
| %g |        nombre décimal en format scientifique ou en format décimal       |
| %G | nombre décimal en format scientifique ou en format décimal en majuscule |
| %p |                             adresse mémoire                             |
| %n |                       nombre de caractères écrits                       |
| %b |                            nombre en binaire                            |

6
===============================

| 0           | Comparateur           |
|-------------|-----------------------|
|  maVariable |  Valeur de maVariable |
| &maVariable | Adresse de maVariable |
| *maVariable |  Valeur de maVariable |

in build
===============================

|                                                                                                                                                                                                                                                            Les pointeurs                                                                                                                                                                                                                                                            |
|:-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------:|
| un pionteur est une variable qui pointe vers une adresse de mémoire comme 0x12345678.                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| void *ptr; //déclaration d'un pointeur de type void<br>ptr = 0x12345678; //initialisation du pointeur à l'adresse 0x12345678 <br>    ptr = &ptr; //initialisation du pointeur à l'adresse du pointeur  <br>   ptr = 0; //initialisation du pointeur à 0  <br>   ptr = NULL; //initialisation du pointeur à NULL  <br>   ptr = (void *)0; //initialisation du pointeur à l'adresse 0   <br>  ptr = (void *)&ptr; //initialisation du pointeur à l'adresse du pointeur   <br>  ptr = (void *)0x12345678; //initialisation du pointeur à l'adresse 0x12345678 |

	https://www.youtube.com/watch?v=KHXYGW8xySg

| 0           | Comparateur           |
|-------------|-----------------------|
|  maVariable |  Valeur de maVariable |
| &maVariable | Adresse de maVariable |
| *maVariable |  Valeur de maVariable |

/*
*   https://youtu.be/90hGCMC3Chc?list=PLrSOXFDHBtfEh6PCE39HERGgbbaIHhy4j
*/

```c
mettre une chaine de caractères dans une function
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
--------------------------------------------------------------------------------
int main()
{
    char chaine_main[255];
    scanf("%s", chaine_main);
    ft_print_comb(chaine_main);
    printf(&chaine_main);
    return (0);
}
------------------------------ CALCUL RECURSIF facteur ------------------------------
int ft_iterative_factorial(int nb)
{
        int result;
        int i;
        i = 1;
        result = 1;
        if (nb <= 0)
                return (0);
        if (nb == 1)
                return (1);
        while (i <= nb)
        {
                result = i * result;
                i++;
        }
        return (result);
}
------------------------------ CALCUL RECURSIF puissance --------------------
int ft_recursive_power(int nb, int power)
{
    if (nb == 0)
        return (0);
    if (power == 0)
        return (1);
    return (nb * ft_recursive_power(nb, power - 1));
}
------------------------------ et NON RECURSIF ------------------------------
int ft_iterative_power(int nb, int power)
{
    int multiplieur;
    multiplieur = nb;
    if (nb == 0)
        return (0);
    if (power == 0)
        return (1);
    while (power > 1)
	{
		nb *= multiplieur;
		power--;
	}
    return (nb);
}
------------------------------ CALCULE RECURSIF Fibonnacci ------------------
int ft_fibonacci(int index)
{
    int nb = 0;
    int nb2 = 0;
    int nb3 = 1;
    int i;
    i = 0;
    if (index < 0)
        return -1;
    if (index == 0)
        return 0;
    if (index == 1)
        return 1;
    while (i < index)
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
    return 0;
}
------------------------------ et NON RECURSIF ------------------------------
int ft_fibonacci(int index)
{
    int nb = 0;
    int nb2 = 0;
    int nb3 = 1;
    int i;
    i = 0;
    if (index < 0)
        return -1;
    if (index == 0)
        return 0;
    if (index == 1)
        return 1;
    while (i < index)
    {
        nb = nb2 + nb3;
        nb3 = nb2;
        nb2 = nb;
        i++;
    }
    return nb;
}
-----------------------------------------------------------------------------
------------------------------ CALCUL RACINE CARRÉ --------------------------
int ft_sqrt(int nb)
{
    int i = 0;
    if (nb == 0)
        return 0;
    while (i * i < nb)
    {
        i++;
    }
    if (i * i == nb)
        return i;
    else 
        return 0;
}
```
