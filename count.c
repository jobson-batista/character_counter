#include <stdio.h>
#include <string.h>

int main() {
    printf("+-------------------------+\n");
    printf("|  Character Counter v1.0 |\n");
    printf("|               by Jobson |\n");
    printf("+-------------------------+\n\n");

    char exit = 1;
    char text[101];

    while(exit) {
        printf("\nDigite o texto até 100 caracteres ou '!q' para sair: ");
        fgets(text, 101, stdin);
        
        // Verifica se existe quebra de linha '\n' no final do texto, se tiver é removido 
        int size_text = strlen(text);
        if(size_text > 0 && text[size_text - 1] == '\n') {
            text[size_text - 1] = '\0';
        }
        // Compara se o texto digitado é igual a !q
        if(strcmp(text, "!q") == 0) {
            exit = 0;
        } else {
            printf("\nO texto %s possui %lu caracteres!\n",text, strlen(text));
        }
    }
    printf("Até Logo! :) \n");
}
