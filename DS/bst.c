#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *lchild;
	int key;
	struct node *rchild;
};
		
struct node *root = NULL;

void insert(int item)
{

	struct node* new;
	struct node* ptr = root;
	struct node* ptr1 = NULL;
	int flag = 0;

	new = (struct node*)malloc((sizeof(struct node)));
	new->lchild = NULL;
	new->key = item;
	new->rchild = NULL;

	while((ptr != NULL) && (flag == 0))
	{
		if(item < ptr->key)
		{
			ptr1 = ptr;
			ptr = ptr->lchild;
		}
		else if(item > ptr->key)
		{
		
			ptr1 = ptr;
			ptr = ptr->rchild;
			
		}
		else
		{
			if(item == ptr->key)
			{
				flag = 1;
				printf("Wrong input \n");
			}
		}
	}

	if(root == NULL)
	{
		root = new;
	}
	else
	{
		if(flag != 1)
		{
			if(item < ptr1->key)
			{
				ptr1->lchild = new;
			}
			else
			{
				ptr1->rchild = new;
			}
		}
	}
}

void inorder(struct node *ptr)
{
	if(ptr != NULL)
	{
	
		inorder(ptr->lchild);
		printf(" %d ", ptr->key);
		inorder(ptr->rchild);
		
	}
	
}

void search(int item)
{
	struct node *ptr = root;

	int flag = 0;
	
	while((ptr != NULL) && (flag == 0))
	{

		if(item < ptr->key)
		{
			ptr = ptr->lchild;
		}
		else if(item > ptr->key)
		{
		
			ptr = ptr->rchild;
			
		}
		else
		{
			if(item == ptr->key)
			{
				flag = 1;
			}
		}
		
	}
	if (flag == 1)
	{
		printf("\n Key found \n");
	}
	else
	{
		printf("\n Key not found \n");
	}
}


void delete(int item)
{

	
	
}


int main()
{
	insert(5);
	insert(4);
	insert(7);
	insert(6);
	insert(8);
	insert(12);
	insert(10);


	inorder(root);

	search(6);
	search(3);

}






















