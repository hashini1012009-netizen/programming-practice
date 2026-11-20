#include<stdio.h>
int main()
{
 int a,b,choice,res;
 printf("====OPRATION AND EXPRESSIONS====\n");
 printf("Enter the frist number:");
 scanf("%d",&a);
 printf("Enter the second number:");
 scanf("%d",&b);
 printf("\n----MENU----\n");
 printf("1.Additiin\n");
 printf("2.Subtraction\n");
 printf("3.Multiplication\n");
 printf("4.Division\n");
 printf("5.Modulus\n");
 printf("\nEnter your choice:");
 scanf("%d",&choice);
  switch(choice)
 {
    case 1:
    res=a+b;
    printf("Result=%d",res);
    break;
    case 2:
    res=a-b;
    printf("Result=%d",res);
    break; 
    case 3:
    res=a*b;
    printf("Result=%d",res);
    break; 
    case 4:
    res=a/b;
    printf("Result=%d",res);
    break;
    case 5:
    res=a%b;
    printf("Result=%d",res);
    break;
     default:
     printf("Invsild choice.");
  }
    return 0;
}