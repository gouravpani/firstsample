#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char phrase[100],tla[4];
    printf("Enter the phrase \n");
    scanf("%[^\n]%*c",phrase);
    int i,k=1;
    tla[0]=phrase[0];
    for(i=1;i<strlen(phrase);i++)
    {
        if(phrase[i] == ' ')
        {
            tla[k] = phrase[i+1];
            k++;
        }
    }
    printf("The Acronym is %s",tla);
    return 0;
}

