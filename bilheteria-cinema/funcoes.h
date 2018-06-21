#ifndef _FUNCOES_H_
#define _FUNCOES_H_

// PROTOTIPACAO/DECLARACOES DAS FUNCOES
void LimpaTela();
void Realocar(BILHETES **vBilhetes);
void ImprimirBilhetes(BILHETES *vBilhetes, int pos);
int VerificarPesquisa(char *respPesquisa);
int BuscaBinaria(BILHETES *vBilhetes, int busca, int *encontrou);
void BuscaSequencial(BILHETES *vBilhetes, char *buscaRG);
void Reservar(BILHETES *vBilhetes, FILMES *head);
void Pesquisar(BILHETES *vBilhetes);
void Inserir(FILMES **head);
void Editar(FILMES *head);
void Deletar(FILMES **head);
void ImprimirRecursivo(FILMES *head);
void Imprimir(FILMES *head);

#endif