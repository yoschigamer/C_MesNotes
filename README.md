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

| ```0``` |   Les Signes   |
|:-:|:--------------:|
| + |    addition    |
| - |  soustraction  |
| * | multiplication |
| / |    division    |
| % |     modulo     |


2
===============================

| ```0```  |     Les Signes    |
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

|```0```| comparateur |
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

| ```0```  |                  Indicateur de conversion                         |
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

| ```0```           | Pointeur           |
|-------------|-----------------------|
|  maVariable |  Valeur de maVariable |
| &maVariable | Adresse de maVariable |
| *maVariable |  Valeur de maVariable |


7
===============================


 |Type | Taille |
 |--------|-----|
 char | 0 à 255 |
 signed char | -128 à 127 |
 unsigned char | 0 à 255 |
 short / signed short | -32 768 à 32 767 |
 unsigned short | 0 | 65 535 |
 int | -2 147 483 647 à 2 147 483 647 |
 unsigned int | 0 | 65 535 |
 long | -9 223 372 036 854 775 808 à 9 223 372 036 854 775 807 |
 unsigned long | 0 | 4 294 967 295 |
 long long | -9 223 372 036 854 775 807 | 9 223 372 036 854 775 807 |
 unsigned long long | 0 | 18 446 744 073 709 551 615 |
 long double | -1 × 1037 | 1 × 1037 |
 double | -1 × 1037 | 1 × 1037 |
 
      The octal set:
```
     000 nul  001 soh  002 stx  003 etx  004 eot  005 enq  006 ack  007 bel
     010 bs   011 ht   012 nl   013 vt   014 np   015 cr   016 so   017 si
     020 dle  021 dc1  022 dc2  023 dc3  024 dc4  025 nak  026 syn  027 etb
     030 can  031 em   032 sub  033 esc  034 fs   035 gs   036 rs   037 us
     040 sp   041  !   042  "   043  #   044  $   045  %   046  &   047  '
     050  (   051  )   052  *   053  +   054  ,   055  -   056  .   057  /
     060  0   061  1   062  2   063  3   064  4   065  5   066  6   067  7
     070  8   071  9   072  :   073  ;   074  <   075  =   076  >   077  ?
     100  @   101  A   102  B   103  C   104  D   105  E   106  F   107  G
     110  H   111  I   112  J   113  K   114  L   115  M   116  N   117  O
     120  P   121  Q   122  R   123  S   124  T   125  U   126  V   127  W
     130  X   131  Y   132  Z   133  [   134  \   135  ]   136  ^   137  _
     140  `   141  a   142  b   143  c   144  d   145  e   146  f   147  g
     150  h   151  i   152  j   153  k   154  l   155  m   156  n   157  o
     160  p   161  q   162  r   163  s   164  t   165  u   166  v   167  w
     170  x   171  y   172  z   173  {   174  |   175  }   176  ~   177 del
```
     The hexadecimal set:
    ```

     00 nul   01 soh   02 stx   03 etx   04 eot   05 enq   06 ack   07 bel
     08 bs    09 ht    0a nl    0b vt    0c np    0d cr    0e so    0f si
     10 dle   11 dc1   12 dc2   13 dc3   14 dc4   15 nak   16 syn   17 etb
     18 can   19 em    1a sub   1b esc   1c fs    1d gs    1e rs    1f us
     20 sp    21  !    22  "    23  #    24  $    25  %    26  &    27  '
     28  (    29  )    2a  *    2b  +    2c  ,    2d  -    2e  .    2f  /
     30  0    31  1    32  2    33  3    34  4    35  5    36  6    37  7
     38  8    39  9    3a  :    3b  ;    3c  <    3d  =    3e  >    3f  ?
     40  @    41  A    42  B    43  C    44  D    45  E    46  F    47  G
     48  H    49  I    4a  J    4b  K    4c  L    4d  M    4e  N    4f  O
     50  P    51  Q    52  R    53  S    54  T    55  U    56  V    57  W
     58  X    59  Y    5a  Z    5b  [    5c  \    5d  ]    5e  ^    5f  _
     60  `    61  a    62  b    63  c    64  d    65  e    66  f    67  g
     68  h    69  i    6a  j    6b  k    6c  l    6d  m    6e  n    6f  o
     70  p    71  q    72  r    73  s    74  t    75  u    76  v    77  w
     78  x    79  y    7a  z    7b  {    7c  |    7d  }    7e  ~    7f del
```
     The decimal set:
```
       0 nul    1 soh    2 stx    3 etx    4 eot    5 enq    6 ack    7 bel
       8 bs     9 ht    10 nl    11 vt    12 np    13 cr    14 so    15 si
      16 dle   17 dc1   18 dc2   19 dc3   20 dc4   21 nak   22 syn   23 etb
      24 can   25 em    26 sub   27 esc   28 fs    29 gs    30 rs    31 us
      32 sp    33  !    34  "    35  #    36  $    37  %    38  &    39  '
      40  (    41  )    42  *    43  +    44  ,    45  -    46  .    47  /
      48  0    49  1    50  2    51  3    52  4    53  5    54  6    55  7
      56  8    57  9    58  :    59  ;    60  <    61  =    62  >    63  ?
      ```

in build
===============================

|                                                                                                                                                                                                                                                            Les pointeurs                                                                                                                                                                                                                                                            |
|:-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------:|
| un pionteur est une variable qui pointe vers une adresse de mémoire comme 0x12345678.                                                                                                                                                                                                                     
```balec que ça soit moche de toute façons personne comprend les pointeur```

|
| void *ptr; //déclaration d'un pointeur de type void<br>ptr = 0x12345678; //initialisation du pointeur à l'adresse 0x12345678 <br>    ptr = &ptr; //initialisation du pointeur à l'adresse du pointeur  <br>   ptr = 0; //initialisation du pointeur à 0  <br>   ptr = NULL; //initialisation du pointeur à NULL  <br>   ptr = (void *)0; //initialisation du pointeur à l'adresse 0   <br>  ptr = (void *)&ptr; //initialisation du pointeur à l'adresse du pointeur   <br>  ptr = (void *)0x12345678; //initialisation du pointeur à l'adresse 0x12345678 |

	https://www.youtube.com/watch?v=KHXYGW8xySg
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
