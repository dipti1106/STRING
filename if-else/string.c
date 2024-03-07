
#include<stdio.h>
//#include<string.h>
 int main()
     {
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	
	if(c == "+")
	 {
	   printf(a+b);
	 }
	  else
	   {
	     printf("NO");
	  }
	return 0;
   } 













  
/*
#include<stdio.h>
#include<string.h>
 int main()
     {
	int a,b;
	char c [2]; // Store the operator as a string;
        printf("Enter the a");
        scanf("%d",&a);
        
        printf("Enter the a");
        scanf("%d",&b);
        
        printf("Enter the operator( +,*,/,-:)");
        scanf("%1s",c); //read only one character into c;
        
    if (strcmp(c, "+") == 0) 
        {
           printf("%d", a + b);
	 }
	 else if(strcmp(c,"*")==0)
	 {
	    printf("%d",a*b);
	 }
	 else if(strcmp(c,"/")==0)
	 {
	   printf("%d",a/b);
	 }
	 else if(strcmp (c,"-")==0)
	 {
	 printf("%d",a-b);
	 }
	return 0;
   } 
   */
