#include <stdio.h>
#include <stdlib.h>
int main()
  //Nao esta funcionando, mas eu tentei muito :) 
{
    char string [300];
    int i;
    int j;
    int tamanho = strlen(string);
    printf("\nDigite uma frase: ");
    setbuf(stdin, NULL);
    fgets(string,300,stdin);
    for (i=0; string[i] != '\0'; i++)
    {
            if ((string[i] == 'r') && (string[i+1] =='r'))
            {
                string [i] = 'l';
                for (j=i+1; j<tamanho-1; j++)
                    {
                        string[j+1];
                    }
            }
            if (string [i] == 'r')
            {
                    string [i] == 'l';
                    if (string[i+1] == ' ')
                        {
                            string [i] = 'r';
                        }
                    if (string [i+1] == '\n')
                            {
                                string [i] = 'r';
                            }
                        if (string[i+1] == '\n')
                            {
                                string [i] = 'r';
                            }
            }
    }

    printf("\nA frase como o cebolinha falaria eh: %s", string);
}
