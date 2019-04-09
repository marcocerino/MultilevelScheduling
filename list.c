#include "list.h"

Queue* queueInit(){
	Queue* q = (Queue*)malloc(sizeof(Queue*));
	q->head = NULL;
	q->tail = NULL;
	q->size = 0;
	return q;
}

ElemQ* pop(Queue* q){
	q->size --;
	ElemQ* aux = q->tail;
	q->tail = q->tail->prev;
	aux->prev = NULL;
	aux->next = NULL;
	return aux;
}

void push(Queue* q, ElemQ* e){
	e->prev = q->tail;
	q->tail->next = e;
	q->tail = e;
	q->size ++;
}

void insertTop(Queue * q, ElemQ* e){
	e->next = q->head;
	q->head->prev = e;
	q->head = e;
	q->size ++;
}

void deleteQ(Queue*q){
	while(q->size != 0){
		ElemQ* e = pop(q);
		free(e);
	}
	free(q)
}