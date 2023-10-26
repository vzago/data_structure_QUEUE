#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int empty_queue(QUEUE *Q) {

	if (Q->beginning == NULL) {
		return 1;
    } else {
	return 0;
    }

}

void start_queue(QUEUE *Q){
    
    Q->beginning = NULL;
    Q->end = NULL;
}

void enqueue(QUEUE *Q, int e){
    
    Q_NODE *ptr = (Q_NODE*) malloc(sizeof(Q_NODE));
    if(ptr == NULL) {
    
        printf("Error ! The Queue is full");
    
    } else {
     
        ptr->element = e;
        ptr->prox = NULL;
     
        if(Q->beginning == NULL){
            
            Q->beginning = ptr;
     
        } else {
            Q->end->prox = ptr;
        }
        
        Q->end = ptr;
    }
}

int dequeue(QUEUE *Q){
    
    Q_NODE *ptr = Q->beginning;
    int e;
    
    if(ptr != NULL){
        Q->beginning = Q->beginning->prox; //This is the same as Q->beginning = ptr->prox
        ptr->prox = NULL;
        e = ptr->element;
        free(ptr);
        return e;

    } else {
        printf("The Queue is empty");
    }
}

void print_queue(QUEUE *Q){
    
    Q_NODE *ptr = Q->beginning;
    if(ptr != NULL){ 
        
        printf("The beginning -> ");
        while (ptr!=NULL) {
            printf("%d ",ptr->element);
            ptr = ptr->prox;
        }
        printf(" <-The end");
        printf("\n"); 
     } else {
        printf("The Queue is empty");
       
    }
    
}

void clear_Queue(QUEUE *Q){

    Q_NODE *ptr = Q->beginning;
    if(ptr == NULL){
        return;
    } else {
        while(ptr!=NULL){
            Q_NODE *temp = ptr;
            ptr = ptr->prox;
            free(temp);
        }
    }
    
    Q->beginning = NULL;
    Q->end = NULL;

}
