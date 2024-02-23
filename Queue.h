

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x, int qty){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  /*Finish enqueue */
  new_node->order=x;
  new_node->qty=qty;
  new_node->nextPtr=NULL;

  if(q->size==0) q->headPtr=new_node;
    else q->tailPtr->nextPtr = new_node;
  
  q->tailPtr=new_node;
  q->size++;

 }
}

int cash(int n, int qty){ //cash out ramen100 somtum20 chick50
    int price;
    switch (n)
    {
    case 1: price=100*qty; printf("Ramen\n");
      break;
    case 2: price=20*qty; printf("Somtum\n");
      break;
    case 3: price=50*qty; printf("Fried Chicken\n");
      break;
    default: printf("No food\n");
      break;
    }

    
    return price;
}

int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   if(t){
   int order= t->order, 
       qty= t->qty,
       price= cash(order, qty);
       /*Finish dequeue */
       q->headPtr=t->nextPtr;
       if(q->size==1) q->tailPtr=NULL;

        q->size--;
        free(t);

   return price;
   }
}

int change(int price){
  int paid=0;
  printf("You have to pay %d\n", price);

  while(paid<price){
    scanf("%d", &paid);  
  }

  if(paid>price){
      printf("Thankyou\nChange: %d\n", paid-price);
    }
}




