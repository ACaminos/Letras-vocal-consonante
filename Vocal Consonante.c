#include<stdio.h>
#include<stdlib.h>

int main() {

char Letra;

printf("Ingrese una letra y se le informará si ésta es una vocal o una consonante: \t");
scanf("%c",&Letra);

if(Letra=='A' || Letra=='a' || Letra=='E' || Letra=='e' || Letra=='I' || Letra=='i' || Letra=='O' || Letra=='o' || Letra=='U' || Letra=='u')
    {
        printf("\nLa letra que usted ingresó es VOCAL");
    }
    else
    {
        printf("\nLa letra que usted ingresó es CONSONANTE");
    }

return 0;
}
