#ifndef APLICACAO_H
#define APLICACAO_H

typedef struct Item item;
typedef struct No no;
typedef struct Deque deque;

//cria deque
deque* cria_deque();

//liberar o espaço do deque
void libera_deque(deque *d);

//retorna o tamanho do deque
int tamanho(deque *d);

//retorna se o deque está vazio
int vazio(deque *d);

//consulta o inicio do deque
char consulta_inicio(deque *d);

//consulta o final do deque
char consulta_final(deque *d);

//inserção pelo início do deque
void insere_inicio(deque *d, char i);

//inserção pelo final do deque
void insere_final(deque *d,char i);

//remoção pelo início do deque
void remove_inicio(deque *d);

//remoção pelo final do deque
void remove_final(deque *d);

//imprime os elementos do deque
void imprime_deque(deque *d);

//menu de opções
void menu(deque *d, deque *e);

#endif /* APLICACAO_H */

