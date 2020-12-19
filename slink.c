#include<stdio.h>
#include<stdlib.h>

 struct node
 {
  int data;
  struct node *link;
 };
    struct node *root=NULL;
	struct node *temp;
    struct node *tr;
	struct node *ch;
	
  int main()
 {
	  int user_ch;
	  while(1) 
	{
		printf("Press 1 to insert element in Link List\n");
		printf("Press 2 to delete elements from the Linl List\n");
		printf("Press 3 to traverse\n");
		printf("Press 4 to exit\n");
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
                        printf("%d is inserted\n",temp->data);
                       }
                          else
	                      {
	                          tr->link=temp;
	                          tr=temp;
	                           printf("%d is entered\n",temp->data);
                            }; 
							  break;
			case 2:     //delete;
			            if(root==NULL)
                       {
		                 printf("No data\n");
		               } else
		                {
		                   struct node *t=root;
	                       root=t->link;
                		   t->link=NULL;
					       printf("%d is deleted\n",t->data);
		                   free(t);
	                    };
		                   break;
            case 3:		//traverse;
                        while(ch->link!=NULL)
						{
							printf("%d->",ch->data);
                            ch=ch->link;
                        };
						  printf("%d\n",ch->data);
                          break;						
		    case 4:     exit(1);
			            break;
			default:    printf("Invalid Key entered\n");
			            break;
		};
	};
};	  