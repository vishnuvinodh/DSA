/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
   int n,i,found=0;
   printf("enter the number of student :");
   scanf("%d",&n);
   getchar();
   char a[n][100];
   printf("enter the name of students :");
   for(i=0;i<n;i++){
      fgets(a[i],sizeof(a[i]),stdin);
   }
   char search[100];
   printf("enter the name to serch :");
   fgets(search,sizeof(search),stdin);
   for(i=0;i<n;i++)
   {
       if(strcmp(a[i],search)==0)
       {
           printf("%s is found in %d ",a[i],i);
           found=1;
           break;
       }
       if(!found){
           printf("element not found");
       }
   }
  
    return 0;
}