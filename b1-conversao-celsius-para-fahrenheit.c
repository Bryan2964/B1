/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // variveis
    
    int Celsius, Fahrenheit;
    
    //entrada de dados temperaturas
    
    printf("Quantos graus Celsius: ");
    scanf("%d", &Celsius);
    
    Fahrenheit = Celsius * (9 / 5) + 32;
    
    printf("Graus em Brazil está em: %dCº, em EUA está em : %dFº ", Celsius, Fahrenheit);
}
