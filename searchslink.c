#include<stdio.h>
#include<stdlib.h>
int count=1; 

struct node{
   int data;
   struct node *link; 
 };
   struct node *root;
   struct node *temp;
   struct node *tr;
   struct node *search;
   
        void main(){
	      int user_ch,find_ele;
		    while(1){
			  printf("Press 1 to insert data in Link List\n");
			  printf("Press 2 to find data in Link List\n");
			  printf("Press 3 t exit\n");
			  printf("Enter choice:");
			  scanf("%d",&user_ch);
			  switch(user_ch){
			    case 1:     //insert;
				            temp=(struct node*)malloc(sizeof(struct node));
                            printf("Enter data:");
                            scanf("%d",&temp->data);
                            temp->link=NULL;
                            if(root==NULL){    
							        tr=root=temp;
									search=root;
                                     printf("Node with data %d entered\n",temp->data);
                                    } else{
                                        tr->link=temp;
                                        tr=temp;
                                        printf("Node with data %d enterd\n",temp->data);
                                        };
										   break;
                            //linear search;
                case 2:     search=root;
				            printf("Enter searched data:");
                            scanf("%d",&find_ele);
                               while(search->data!=find_ele){
                                     search=search->link;
									 printf("Data not fount at node no:%d\n",count++);
                                    };
								    printf("Data found at %p memory location && at %dth node no\n",search,count);
								    count=1;
                                    search=root;
									break;
									
				case 3:     exit(1);
				            break;
				
				default:     printf("Invalid Key enterd!!\n");
				             break;
            };
        };
    };		