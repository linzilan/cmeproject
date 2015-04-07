#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE* stream = fopen("input.csv", "r");
    char *date[1000];
    float strike[1000];
    float price[1000];
    char flag[1000];
    char line[1024];
    int i=0;
    while (fgets(line, 1024, stream))
    {
        
        char* tok = strdup(line);
        for (tok = strtok(line, ",");
             tok && *tok;
             tok = strtok(NULL, ",\n"))
        {
            date[i]=line;
            tok = strtok(NULL, ",\n");
            sscanf(tok,"%f", &strike[i]);
            tok = strtok(NULL, ",\n");
            sscanf(tok,"%f", &price[i]);
            tok = strtok(NULL, ",\n");
            sscanf(tok, "%s", &flag[i]);
            tok = strtok(NULL, ",\n");
        }
        // NOTE strtok clobbers tmp
        i++;
        free(tok);
    }
    
    for (int i=0;i <10; i++)
    {
        printf("%s\t%f\t%f\t%c\n", date[i],strike[i],price[i],flag[i]);
    }
    
}