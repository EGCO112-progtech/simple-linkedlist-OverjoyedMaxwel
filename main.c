//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node a,b,*head ;
    a.value = c;
    a.next=&b;
    head=&a;
    b.value=head->value+3;

    struct node d; 
    b.next=&d;
    b.next->value=11;
    d.next=NULL;
    
        
    

    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
    printf("%d\n", head ->next->next->value); //what value for 11
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    struct node f; 
    f.next = &a;
    head = &f;
    f.value = 2;
    d.next=NULL;
   
    printf("%d\n", head ->value ); //what value for 2
    printf("%d\n", head ->next->value ); //what value for 5
    printf("%d\n", head ->next->next->value); //what value for 8
    printf("%d\n", head ->next->next->next->value); //what value for 11
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
    /*  Exercise III Use loop to print everything*/
        
        int i,n=4;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
            tmp= tmp->next;
          // What is missing???
        
        
        }
    printf("\n\n");
    
   /*  Exercise IV change to while loop!! (you can use NULL to help) */
    tmp=head;    
         while(tmp != NULL){
            printf("%3d", tmp->value);
            tmp= tmp->next;
           
           
           // What is missing???
        }
    printf("\n\n");
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!! */
         //use a loop to help
        head = (NodePtr) malloc(sizeof(struct node)); 
        tmp=head;
        for(i=0;i<3;i++){
            //สร้างอีกสามโหนด มาต่อท้าย
            //ใส่ค่า i+3 ใน value
            tmp->value = i+3;
            tmp->next=(NodePtr) malloc(sizeof(struct node));
            tmp=tmp->next;
            
        }
        tmp->value=i+3;
        tmp->next=NULL;
        for(tmp=head; tmp!=NULL; tmp=tmp->next)
        {
            printf("%3d", tmp->value);


        }
    printf("\n\n");    
    /*  Exercise VI Free all node !! */
         //use a loop to help
        for(tmp=head; tmp!=NULL; tmp=head)
        {
            head=head->next;
            printf("Free %d\n",tmp->value);
            free(tmp);


        }
    printf("\n\n");   
     
    
    return 0;
}
