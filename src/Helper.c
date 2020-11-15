/**
 * +++++++++++++++++++++++++++++++++++++++++++++++++
 *  Queue.h
 *  Al Vincent Musa BSCS3B Artificial Intelligence
 *
 *  Utility and data structures for the program.
 *  ++++++++++++++++++++++++++++++++++++++++++++++++
 */

/**
 *  ++++++++++++++++++++++++++++++++++++++++++++++++
 *  TODO:
 *  - Configure the queue for the states.
 *
 */

// Node struct
typedef struct node {
        
        // 3x3 puzzle grid 
        int puzzle[3][3];
        
        // prority status
        int priority;
        
        struct node* next
} Node;

// create a new Node
Node* newNode(int d, int p) {

        Node* temp = (Node*)malloc(sizeof(Node));
        temp->puzzle = d;
        temp->priority = p;
        temp->next = NULL;

        return temp;
}

// Returns the value of the head
int peek(Node** head) {
        
        return (head)->puzzle;
}

// Pops the head of the node
void pop(Node** head) {
        
        Node* temp = *head;
        (*head) = (*head)->next;
        free(temp);
}

// Push a node into the priority queue
void push(Node** head, int d, int p) {
        Node* start = (*head);

        Node* temp = newNode(d,p);
        
        if((*head)->priority > p) {
                temp->next = *head;
                (*head) = temp;
        }
        else {
                while (start->next != NULL && start->next->priority < p) {
                        start = start->next;
                }

                temp->next = start->next;
                start->next = temp;
        }
}

// Check if the queue is empty
int isEmpty(Node** head) {
        return (*head == NULL)
}
