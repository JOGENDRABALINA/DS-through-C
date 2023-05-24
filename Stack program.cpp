#include<stdio.h>
int stack[100],top=-1,size;
void push(int ele){
	if (top == size-1){
		printf("Stack is Full.Insertions are not possible\n");
	}
	else{
		top++;
		stack[top]=ele;
		printf("%d is inserted into stack\n",ele);
	}
}
int pop(){
	if (top == -1){
		return -1;
	}
	else{
		int rm = stack[top];
		top--;
		return rm;
	}
}
void peek(){
	if (top == -1){
		printf("Stack is empty\n");
	}
	else{
		printf("Element at top is: %d\n",stack[top]);
	}
}
void display(){
	int i;
	if (top == -1){
		printf("Stack is empty.No elements to display\n");
	}
	else{
		printf("Elements in the stack are\n");
		for (i=top;i>=0;i--){
			printf("%d ",stack[i]);
		}
		printf("\n");
	}
}
int main(){
	printf("Enter size of the stack: ");
	scanf("%d",&size);
	//menu driven program
	int choice;
	while (1){
		printf("Enter 1.push 2.pop 3.peek 4.Display any other exist: ");
	    scanf("%d",&choice);
		if (choice==1){
			//push() operation
			int ele;
			printf("Enter an element to pushed into the stack: ");
			scanf("%d",&ele);
			push(ele);
		}
		else if (choice==2){
			//pop() operation
			int removed_element = pop();
			if (removed_element == -1){
				printf("Stack is empty.cannot delete the element\n");
			}
			else{
				printf("Removed element is: %d\n",removed_element);
			}
		}
		else if (choice==3){
			//peek() operation
			peek();
		}
		else if (choice==4){
			//Display()
			display();
		}
		else{
			printf("Thank You");
			break;
		}
    }
}

