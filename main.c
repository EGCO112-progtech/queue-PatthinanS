#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
  NodePtr tailPtr=NULL;
/* For struct Queue*/
  Queue  q;
   q. headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;

   int i,price,qty,n;

  //  enqueue(&headPtr, &tailPtr, 5);
  //  printf("%d\n", dequeue(&headPtr, &tailPtr));
   

 for(i=1;i<argc;i++){
      int n, qty, c=0;
        if(strcmp(argv[i],"x")==0){
            price = dequeue_struct(&q);
            c++;
            change(price);
        }
        else{
        n=atoi(argv[i]);
          if(strcmp(argv[i+1],"x")==0) qty=1; //case order followed by a fucking x because it will be a bug you mtfk
          else qty=atoi(argv[i+1]); //normal case

          enqueue_struct(&q, n, qty);
          i++;
        printf("My order is %d, qty %d\n", n, qty);
        }
 }
  return 0;
}
