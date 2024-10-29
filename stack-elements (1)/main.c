/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int stack[MAX];
int top=-1;
int isFull(){
    return top == MAX-1;
}
int isEmpty(){
    return top == -1;
}
void push(int value){
  if(isFull()){
      printf("the stack is full");
      return;
  }
  stack[++top]=value;
  printf("%d is pushed on the top of stack ",value);
}
int pop() {
    if (isEmpty()) {
        printf("The stack is empty.\n");
        return -1;
    }
    return stack[top--];
}
void display(){
    if(isEmpty()){
        printf("the stack is empty.\n");
        return ;
    }
    printf("stack elements top to bottom :\n");
    for (int i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}
int main()
{
  int choice,value;
  while(1){
      printf("\n1. push\n2. pop\n3. display stack\n4. exit\n");
      printf("enter yor choice :");
      scanf("%d",&choice);
      switch(choice){
        case 1:printf("enter a value to push :");
            scanf("%d",&value);
            push(value);
            break;
        case 2:value=pop();
             if(value !=-1){
                 printf(" poped value is :%d",value);
             }
             break;
        case 3:display();
               break;
        case 4:printf("exit from the program \n");
              exit(0);
             
        default:printf("wrong input\n");
      }
               
  }
  return 0;
               
      }
      
      
      
      
      
      
      
      
      
      
      
 