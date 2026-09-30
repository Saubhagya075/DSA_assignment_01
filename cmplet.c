#include<stdio.h>
#define MAX 5

int top=-1;
int number[MAX];
void push(int value)
    {
        if(top==MAX-1){
            printf("stack is overflow");

        }
        else{
            top++;
            number[top]=value;
            printf("%d pushed into number\n",number[top]);
        }
    }
void pop(){
    if(top==-1){
        printf("condition of overflow");
    }
    else{

    
    int item=number[top];
    printf("%d deleted from stacks\n",number[top]);
    top--;
    }
}
void peek(){
    if(top==-1){
        printf("overflow\n");
    }
    else{
        
        printf("%d is the top element of stack",number[top]);
    }
}
int main()


{   printf("1.PUSH\n2.POP\n3.PEEK\n4.EXIT\n");
    int choice;
    printf("Enter your choice");
    scanf("%d",&choice);
    switch(choice){
        case 1:{ 
            int n;
            printf("Enter the value to push");
            scanf("%d",&n);
            push(n);
            break;

        } 
        case 2: pop();  break;
        case 3: peek(); break;
        case 4: printf("Program ended \n"); break;
        default: printf("invelid");
    }

}

