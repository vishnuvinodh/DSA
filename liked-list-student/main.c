/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student{
    char name[100];
    int rollno;
    struct student* next;
};
void addStudent(struct student**head,char*name,int rollno){
    struct student*newstudent=(struct student*)malloc(sizeof(struct student));
    
    strcpy(newstudent->name,name);
    newstudent->rollno=rollno;
    newstudent->next=NULL;
    if(*head==NULL)
    {
     *head=newstudent;
    }
    else
    {
        struct student*temp=*head;
        while(temp->next!=NULL){
            temp=temp->next;
    }
    temp->next=newstudent;
        
    }
    printf("student add successfully");
    
}
void displayStudent(struct student*head){
    if(head==NULL){
        printf("no student in list.\n ");
        return;
    }
    struct student*temp=head;
    printf("list students :\n");
    while(temp!=NULL)
    {
        printf("name :%s,rollnumber:%d /n",temp->name,temp->rollno);
        temp=temp->next;
    }
}
int main()
{
 struct student*head=NULL;
 int choice;
 char name[100];
 int rollno;
 while(1)
 {
     printf("\n1.Addstudent\n2.displaystudent\n3.exit\n");
     printf("enter your choice :");
     scanf("%d",&choice);
     getchar();
     switch(choice){
        case 1:
               printf("enter the student name :");
               fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0;
                
               printf("enter the rollnumber :");
               scanf("%d",&rollno);
               getchar();
               addStudent(&head,name,rollno);
               break;
        case 2:
               displayStudent(head);
                break;

        case 3:
               printf("exit from program. \n");
               exit(0);
        default:printf("invalid input");       
     }
 }
 

    return 0;
}