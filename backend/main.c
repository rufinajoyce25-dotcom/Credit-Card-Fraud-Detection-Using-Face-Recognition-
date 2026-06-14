#include<stdio.h> 
#include<stdlib.h> 
int n=10,top=-1,stack[10],value; 
void push() 
{ 
if(top==n-1) 
{ 
printf("\nstack is in overflow condition.push operation is not possible"); 
 
} 
top=top+1; 
stack[top]=value; 
} 
void pop() 
{ 
int del; 
if(top==-1) 
{ 
printf("\nstack is in underflow condition.pop operation is not possible"); 
 
} 
del=stack[top]; 
printf("\n%d was deleted",del); 
top=top-1; 
} 
void peak() 
{ 
if(top==-1) 
{ 
printf("\nstack is in underflow condition.peak is not possible"); 
 
} 
printf("%d",stack[top]); 
} 
void display() 
{ 
int i; 
if(top==-1) 
{ 
printf("stack is in underflow condition.display operation is not possible"); 
} 
printf("\nStack Content:"); 
for(i=top;i>=0;i--) 
{ 
printf("%d\t",stack[i]); 
} 
} 
int main() 
{ 
int ch; 
printf("\n "); 
printf("\n\tIMPLEMENTATION OF STACK USING ARRAY"); 
printf("\n "); 
do 
{ 
printf("\n1.Push\n2.Pop\n3.Peak\n4.Display\n5.Exit"); 
printf("\nEnter your choice(1/2/3/4/5):"); 
scanf("%d",&ch); 
switch (ch) 
{ 
case 1: 
 printf("enter the element to push:"); 
scanf("%d",&value); 
push(); 
display(); 
break; 
 
 
 
case 2: 
 
 pop(); 
display(); 
break; 

 
case 3: 
 peak(); 
display(); 
break; 
 
 
case 4: 
  display(); 
break; 
 
case 5: 
  
exit(0); 
break; 
default: 
printf("\n invalid choice");
break;
 
 
 
} 
} 

 while((ch>=1) && (ch<=5)); 
printf("\n "); 
return 0; 
} 


