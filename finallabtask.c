#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 struct listnode {
    char *element;
    struct listnode* pnext;
};


struct Queue {
    //Define structure of the queue
    struct listnode* pfront;
    struct listnode* prear;
};

void push (struct Stack* stack,char* element);
char* pop (struct Stack* stack);
void enqueue(struct Queue* queue,char* element);
char* dequeue(struct Queue* queue);
void s_travel(struct Stack* stack);
void q_travel(struct Queue* stack);
int precedence(char* x);
int empty(struct Stack* stack);
char* peek(struct Stack* stack);




int main (int argc,char *argv[]) {


    struct Queue input_queue;
    struct Queue output_queue;
    input_queue.pfront = NULL;
    input_queue.prear = NULL;
    output_queue.pfront = NULL;
    output_queue.prear = NULL;


    if (argc<3) {
        //If the arguments is less then 3, unavailable input
        printf("Input error");
        return -1;
    }


    int i=0;
    //Put all the arguments into the input_queue
    for (i=1;i<argc;i++) {
        enqueue(&input_queue,argv[i]);
    }

    printf("infix expression is : ");
    q_travel(&input_queue);
    printf("at the beginning, the peek of the stack is %s         \n",peek(&stack));


   for (i=1;i<argc;i++) {
   //Token from input_queue
    char *token;
    char *x;
    token = dequeue(&input_queue);

    if(atof(token)) {
        //If the element is a number,put it into output_queue
        enqueue(&output_queue,token);
    }

     else {
         /*If the element is a operator, c
     * ompare the precedence of the top element of the stack and the precedence of token element
     */
         char *peek1;
         peek1=peek(&stack);

         while ((precedence(peek1) >= precedence(token)) && (peek1 != NULL)){
             /*while the precedence of the top element of the stack is greater
             and equal to the precedence of token element*/
            printf("inside,the top of the stack is %s \n",peek1);
            //Pop element out of the stack and put it into output_queue
            x = pop(&stack);
            printf("after pop,x is %s,the top of the stack is %s \n",x,peek1);
            enqueue(&output_queue,x);
        }
        //Then, push the new operator(token) into the stack
        push(&stack,token);
        }
}

   while(peek(&stack)!=NULL) {
       //Enqueue remaining operator from stack into output_queue
       char *elem = pop(&stack);
       enqueue(&output_queue,elem);
   }
    printf("Postifx expression is :\n");
    q_travel(&output_queue);
    return 0;
}



void enqueue(struct Queue* queue,char *element) {
    //Allocate a new node
    struct listnode *new_node = (struct listnode *)malloc(sizeof(struct listnode));
    new_node->element = element;
    new_node->pnext = NULL;
    //If the queue is not empty,add new node at the end of the queue
    if (queue->prear) {
        queue->prear->pnext = new_node;
    }
    //If the queue is empty,add new node at front of the queue
    else {
        queue->pfront = new_node;
    }
    //Added node becomes new rear node
    queue->prear = new_node;

}

char* dequeue(struct Queue* queue) {
    /*Create a temporary node to replace the front node of the queue
    struct listnode *pelem = queue->pfront;*/
    //If the queue is not empty
    if (queue->pfront) {
        //Store the element of the front node
        char *elem = queue->pfront->element;
        //The front pointer points to the next node
        queue->pfront = queue->pfront->pnext;
        //If the queue only has one node
        if(pelem == queue->prear) {
            //After removing the only node, the queue becomes empty
            queue->prear = NULL;
        }
        //Remove node from memory
        free(pelem);
        //Return the element of the node that we removed
        return elem;
    }
    //If the queue is empty, removing node fails,return NULL
    else {
        return NULL;
    }
}


void s_travel(struct Stack* buffer) {
    //Function to print out the element in the stack
    //Create a temporary node to replace the top node of the stack
    struct listnode* elem = buffer->ptop;
    while(elem != NULL) {
        printf("%s ", elem->element);
        elem = elem->pnext;
    }
    printf("\n");
}


void q_travel(struct Queue* buffer) {
    //Function to print out the element in the queue
    //Create a temporary node to replace the front node of the stack
    struct listnode* elem = buffer->pfront;
    while(elem != NULL) {
        printf("%s ", elem->element);
        elem = elem->pnext;
    }
    printf("\n");
}


int precedence(char* operator) {
    /*Function to determine the precedence of the operator,prior operator has greater return value*/
    printf("entering precedence with %s \n",operator);

     if (operator == NULL) {
        return -1;
    }
     else if (strcmp(operator,"(")==0){
        printf("Pr: %s 0\n",operator);
        return 0;
    }

    else if (strcmp(operator,"+")==0||strcmp(operator,"-")==0) {
        printf("Pr: %s 1\n",operator);
        return 1;
    }

    else if ( (strcmp(operator,"*")==0) || (strcmp(operator,"/")==0) || (strcmp(operator,"%")==0) || (strcmp(operator,"x")==0) ) {
        printf("Pr: %s 2\n",operator);
        return 2;
    }


    else {
        return -2;
    }
    return -3;
}



}

