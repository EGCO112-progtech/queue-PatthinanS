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

   int i,x;

  //  enqueue(&headPtr, &tailPtr, 5);
  //  printf("%d\n", dequeue(&headPtr, &tailPtr));
   

 for(i=1;i<argc;i++){
        int n = atoi(argv[i]);
        if(strcmp(argv[i],"x")==0){
            x=dequeue_struct(&q);
            printf("dequeing %d\n",x);
        }
        else {
       enqueue_struct(&q, n);
       printf("%d\n", n);
           
        }
 }
  return 0;
}
