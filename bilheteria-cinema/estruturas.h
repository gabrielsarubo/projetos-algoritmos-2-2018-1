#ifndef _ESTRUTURAS_H_
#define _ESTRUTURAS_H_

// definicao de macros para as strings do programa
#define TAM_TITULOFILME 31
#define TAM_GENERO 16
#define TAM_FORMATO 3
#define TAM_DATA 11
#define TAM_HORARIO 6
#define TAM_RG 15//14 max caracteres + 1 para '\n' 566.784.287-68
#define TAM_NOMECLIENTE 25

// DECLARACOES das variaveis globais estao aqui (estruturas.h) e as definicoes estao em (funcoes.c)
// se colocar a definicao de uma var global no .h, a definicao irá para cada arquivo .c que inclui este header,
// isso causara um erro de 'multiple definition' porque uma variavel pode ser declarada multiplas vezes, MAS só pode ser definida somente uma vez
extern int auto_cod_filme;
extern int auto_cod_bilhete;
extern int cont_vBilhetes;
extern int continuar;
extern int tam_vBilhetes;

typedef struct FILMES{
    int cod_filme;
    char titulo_filme[TAM_TITULOFILME];
    char genero[TAM_GENERO];
    char formato[TAM_FORMATO];
    char data[TAM_DATA];
    char horario[TAM_HORARIO];
    float valor_filme;
    struct FILMES *prox;
} FILMES;

typedef struct BILHETES{
    int cod_bilhete;
    char nome_cliente[TAM_NOMECLIENTE];
    char rg[TAM_RG];
    int poltrona;// só para dar continuacao ao programa por enquanto
    float preco;
    int cpcod_filme;// armazena uma copia do cod do filme
    char cptitulo_filme[TAM_TITULOFILME];// armazena uma copia do titulo do filme
    char cpdata[TAM_DATA];// armazena uma copia da data do filme
    char cphorario[TAM_HORARIO];// armazena uma copia do horario do filme
} BILHETES;

#endif