#include <stdio.h>

int calc_lenght (char s[1000])
{
    int lenght=0;
    while (s[lenght+1]!='\0')
        lenght++;
    return lenght;
}

int main()
{
    char s[1000];

    printf("Type the string: ");
    fgets(s,1000,stdin);

    printf("\nLenght = %d",calc_lenght(s));
}
