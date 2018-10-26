#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct no{
	int tipo;/*1= elemento; 2=sublista*/
	union{
		int chave;//tipo1
		struct no* sublista;//tipo2
	};
	struct no* prox;
} NO;

void exibir(NO* p){
	if(p){
		if(p->tipo==1)printf("%i\n", p->chave);
		else exibir(p->sublista);
		exibir(p->prox);
	}
}

NO* listarChaves(NO* entrada){
	NO* sublista=entrada;
	NO* ultimo=entrada;

		while(ultimo && ultimo->tipo!=2) ultimo=ultimo->prox; 
		sublista=ultimo;
		while(ultimo && ultimo->prox) ultimo=ultimo->prox;
		ultimo->prox=sublista;
		entrada=entrada->prox;
		listarChaves(entrada);
		return entrada;
}

//    NO* ep(){
  //  	NO* inicio;
    //	NO* fim;


    //}

    int main(){

	NO* p = (NO*) malloc(sizeof(NO));
    p->tipo = 2;
    p->sublista = NULL;

    NO* inicio = p;
    
    p->prox = (NO*) malloc(sizeof(NO));
    p = p->prox;
    p->tipo = 1;
    p->chave = 1;

    p->prox = (NO*) malloc(sizeof(NO));
    p = p->prox;
    NO* sub1 = p;
    sub1->tipo = 2;

    p->prox = (NO*) malloc(sizeof(NO));
    p = p->prox;
    p->tipo = 1;
    p->chave = 2;

    p->prox = (NO*) malloc(sizeof(NO));
    p = p->prox;
    NO* sub2 = p;
    sub2->tipo = 2;

    p->prox = (NO*) malloc(sizeof(NO));
    p = p->prox;
    p->tipo = 1;
    p->chave = 3;

    p->prox = (NO*) malloc(sizeof(NO));
    p = p->prox;
    NO* sub3 = p;
    sub3->tipo = 2;

    p->prox = (NO*) malloc(sizeof(NO));
    p = p->prox;
    NO* sub4 = p;
    sub4->tipo = 2;

    p->prox = (NO*) malloc(sizeof(NO));
    p = p->prox;
    p->tipo = 1;
    p->chave = 4;
    p->prox = NULL;

    sub1->sublista = (NO*) malloc(sizeof(NO));
    sub1 = sub1->sublista;
    sub1->tipo = 1;
    sub1->chave = 5;

    sub1->prox = (NO*) malloc(sizeof(NO));
    sub1 = sub1->prox;
    sub1->tipo = 2;
    sub1->sublista = NULL;
    sub1->prox = NULL;

    sub2->sublista = (NO*) malloc(sizeof(NO));
    sub2 = sub2->sublista;
    sub2->tipo = 1;
    sub2->chave = 6;

    sub2->prox = (NO*) malloc(sizeof(NO));
    sub2 = sub2->prox;
    sub2->tipo = 1;
    sub2->chave = 7;

    sub2->prox = (NO*) malloc(sizeof(NO));
    sub2 = sub2->prox;
    sub2->tipo = 1;
    sub2->chave = 8;
    sub2->prox = NULL;

    sub3->sublista = (NO*) malloc(sizeof(NO));
    sub3 = sub3->sublista;
    sub3->tipo = 2;
    sub3->sublista = NULL;
    sub3->prox = NULL;
    
    sub4->sublista = (NO*) malloc(sizeof(NO));
    sub4 = sub4->sublista;
    sub4->tipo = 1;
    sub4->chave = 9;

    sub4->prox = (NO*) malloc(sizeof(NO));
    sub4 = sub4->prox;
    sub4->tipo = 1;
    sub4->chave = 10;

    sub4->prox = (NO*) malloc(sizeof(NO));
    sub4 = sub4->prox;
    NO* sub5 = sub4;
    sub5->tipo = 2;

    sub4->prox = (NO*) malloc(sizeof(NO));
    sub4 = sub4->prox;
    sub4->tipo = 1;
    sub4->chave = 11;
    sub4->prox = NULL;

    sub5->sublista = (NO*) malloc(sizeof(NO));
    sub5 = sub5->sublista;
    sub5->tipo = 1;
    sub5->chave = 12;

    sub5->prox = (NO*) malloc(sizeof(NO));
    sub5 = sub5->prox;
    sub5->tipo = 1;
    sub5->chave = 13;

    sub5->prox = (NO*) malloc(sizeof(NO));
    sub5 = sub5->prox;
    NO* sub6 = sub5;
    sub6->tipo = 2;

    sub5->prox = (NO*) malloc(sizeof(NO));
    sub5 = sub5->prox;
    sub5->tipo = 1;
    sub5->chave = 14;
    sub5->prox = NULL;

    sub6->sublista = (NO*) malloc(sizeof(NO));
    sub6 = sub6->sublista;
    NO* sub7 = sub6;
    sub7->tipo = 2;

    sub6->prox = (NO*) malloc(sizeof(NO));
    sub6 = sub6->prox;
    sub6->tipo = 1;
    sub6->chave = 15;
    sub6->prox = NULL;

    sub7->sublista = (NO*) malloc(sizeof(NO));
    sub7 = sub7->sublista;
    sub7->tipo = 1;
    sub7->chave = 16;

    sub7->prox = (NO*) malloc(sizeof(NO));
    sub7 = sub7->prox;
    sub7->tipo = 1;
    sub7->chave = 17;
    sub7->prox = NULL;

    exibir(inicio);

    NO* listarChaves(NO* inicio);
    printf("");
    printf("aqui eh a segunda vez\n");
    exibir(inicio);
    return 0;
}