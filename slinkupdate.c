#include<stdio.h>
#include<stdlib.h>
int i=1;
int loc,count=0;

 struct node
 {
  int data;
  struct node *link;
 };
    struct node *root=NULL;
	struct node *temp;
    struct node *tr;
	struct node *ch;
	struct node *delta;
	struct node *store;
	struct node *hold;
	
  int main()
 {
	  int user_ch;
	  while(1) 
	{
		printf("Press 1 to insert element in Link List\n");
		printf("Press 2 to know the length of the Link List\n");
		printf("Press 3 to delete nodes in sequential order:\n");
		printf("Press 4 to delete node in random order:\n");
		printf("Press 5 to traverse\n");
		printf("Press 6 to exit\n");
		printf("Enter your choice:");
		scanf("%d",&user_ch);
		switch(user_ch)
		{
			case 1:   //insert;
					  temp=(struct node*)malloc(sizeof(struct node));       
	                  printf(" Node data: ");
                      scanf("%d",&temp->data);
                      temp->link=NULL;
                       if(root==NULL) 
                       {
                        root=temp;
						tr=temp;
						ch=root;
						delta=root;
                        printf("%d is inserted\n",root->data);
                       }
                          else
	                      {
	                          tr->link=temp;
	                          tr=temp;
	                           printf("%d is entered\n",temp->data);
                            }; 
							  break;
							  
			case 2:     //length of the Link List;
			             ch=root;
			             while(ch!=NULL)
						{							
						 ch=ch->link;
						 count++;
						}; 
						    printf("%d is length of the Link List\n",count);
							count=0;
                            break;
							
			case 3:     //delete nodes in sequetial order;				
						    if(root==NULL)
						{
                            printf("No data\n");
						}
						  else
					    {
		                   struct node *t=root;
	                       root=t->link;
                		   t->link=NULL;
					       printf("Node deleted having data:%d\n",t->data);
		                   free(t);
	                    };
					        break;
					
			case 4:	    //delete node in random order;
			            delta=root;
               			printf("Enter the node you want to delete\n");
						scanf("%d",&loc);
                        int x=(loc-1);						
                             while(i<x)						
						    {
						       delta=delta->link;
						       ++i;
						    };
							  i=1;
							  store=delta->link;
							  hold=store->link;
							  delta->link=hold;
							  printf("Node deleted having data:%d\n",store->data);
						      store->link=NULL;
					          free(store);						  
		                      break;
						   
            case 5:		//traverse;
			             if(root==NULL)
						{
							 printf("Empty Link Lsit\n");
						}
                          else
					{						  
			              ch=root;
                          while(ch->link!=NULL)
						{
							printf("%d->",ch->data);
                            ch=ch->link;
                        };
						  printf("%d\n",ch->data);
                    };  
						  break;
						  
		    case 6:     exit(1);
			            break;
						
			default:    printf("Invalid Key entered\n");
			            break;
		};
	};
};	  