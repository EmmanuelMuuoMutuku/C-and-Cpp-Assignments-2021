// CH-230-A
// a8_p3.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de


/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq) {
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq) {
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq) {
	return pq->items == 0;
}

int queue_item_count(const Queue *pq) {
	return pq->items;
}

int enqueue(Item item, Queue *pq) {

	//Checking if the queue is full
    if (queue_is_full(pq) == 1) {
        return -1;
    }
    else {
        //Creating a new node 
        Node *enqueueOn;
        //Dynamic memory allocation
        enqueueOn = (Node *)malloc(sizeof(Node));
        //Checking if memory allocation is successful
        if (enqueueOn == NULL) {
            return -1;
        }

        //Copy item to the node
        enqueueOn->item = item;

        //Set next pointer to NULL
        enqueueOn->next = NULL;

        //Set front node if queue is empty
        if (queue_is_empty(pq) == 1) {
            pq->front = enqueueOn;
        }

        //If queue already exists 
        //set current rear node's next pointer to new node
        else {
            pq->rear->next = enqueueOn;
        }

        //Set rear pointer to new node
        pq->rear = enqueueOn;

        //Add 1 to item count
        pq->items++;
        return 0;
    }
        
}

int dequeue(Item *pitem, Queue *pq) {
    //If queue is empty don't do anything
    if (queue_is_empty(pq) == 1) {
        return -1;
    }
    else {
        Node *temp;
        //Dynamic memory allocation
        temp = (Node *)malloc(sizeof(Node));

        //Copying item to waiting variable
        temp = pq->front;
        *pitem = pq->front->item;

        //Reset front pointer to the next item in queue
        pq->front = pq->front->next;

        //Free memory
        free(temp);

        //Reset front and rear pointers to NULL
        //if last item is removed
        if (pq->items == 1) {
            pq->front = NULL;
            pq->front = NULL;
        }
        
        // Decrement item count
        pq->items--;
        return 0;
    }
}
    

void empty_queue(Queue *pq) {
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

void printq(Queue *pq) {
    // Introducing a cursor at the front
    Node *cursor = pq->front;
    printf("content of the queue: ");

    //Loop for cursor to go until the end
    //and print the current element the cursor is on
    //as it moves to the next one
    while (cursor != NULL) {
        printf("%d ", cursor->item);
        cursor = cursor->next;
    }
    printf("\n");
}