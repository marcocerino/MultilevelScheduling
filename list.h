#pragma once;

typedef struct Elem{
	struct Elem* next;
	struct Elem* prev;
}ElemQ;

typedef struct Queue{
	Elem* head;
	Elem* tail;
	int size;
}Queue;

Queue* queueInit();
ElemQ* pop(Queue *q);
void push(Queue* q, ElemQ* e);
void insertTop(Queue* q, ElemQ* e);
void deleteQ(Queue* q);
