#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main (){
    QUEUE Q1;
    int e;

    start_queue(&Q1);
    enqueue(&Q1,1);
    enqueue(&Q1,9);
    enqueue(&Q1,3);
    enqueue(&Q1,12);
    enqueue(&Q1,14);
    enqueue(&Q1,19);
    enqueue(&Q1,20);
    enqueue(&Q1,30);
  
  
    print_queue(&Q1);

    dequeue(&Q1);
    dequeue(&Q1); 
    
    print_queue(&Q1);

    dequeue(&Q1);
    
    print_queue(&Q1);

    clear_Queue(&Q1);

}