#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função criptografia
void criptografar(char *mensagem, const char *chave) {
    int tamanho_mensagem = strlen(mensagem);
    int tamanho_chave = strlen(chave);
    int j = 0;

    for (int i = 0; i < tamanho_mensagem; ++i) {
        char caractere_mensagem = mensagem[i];

        if (isprint(caractere_mensagem)) {
            int valor_chave = (int)chave[j] - ' ';
            int valor_caractere = (int)caractere_mensagem - ' ';

            int resultado = (valor_caractere + valor_chave) % 95;

            mensagem[i] = (char)(resultado + ' ');

            j = (j + 1) % tamanho_chave;
        }
    }
}

// Função descriptografia
void descriptografar(char *mensagem, const char *chave) {
    int tamanho_mensagem = strlen(mensagem);
    int tamanho_chave = strlen(chave);
    int j = 0;

    for (int i = 0; i < tamanho_mensagem; ++i) {
        char caractere_mensagem = mensagem[i];

        if (isprint(caractere_mensagem)) {
            int valor_chave = (int)chave[j] - ' ';
            int valor_caractere = (int)caractere_mensagem - ' ';

            // Subtrai o valor da chave. O + 95 garante que o resultado não seja negativo.
            int resultado = (valor_caractere - valor_chave + 95) % 95;

            mensagem[i] = (char)(resultado + ' ');

            j = (j + 1) % tamanho_chave;
        }
    }
}

int main() {
    char mensagem[100];
    char chave[50];
    char mensagem_criptografada[100];

    printf("Digite a mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);
    mensagem[strcspn(mensagem, "\n")] = 0;

    printf("Digite a chave: ");
    fgets(chave, sizeof(chave), stdin);
    chave[strcspn(chave, "\n")] = 0;

    // Cópia da msg original para descriptografar
    strcpy(mensagem_criptografada, mensagem);

    criptografar(mensagem_criptografada, chave);
    printf("\nMensagem criptografada: %s\n", mensagem_criptografada);

    descriptografar(mensagem_criptografada, chave);
    printf("Mensagem descriptografada: %s\n", mensagem_criptografada);

    // pausa o terminal
    printf("\nPressione ENTER para sair...");

    // Limpa o buffer de entrada para evitar que o getchar leia o '\n'
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    getchar();

    return 0;
}