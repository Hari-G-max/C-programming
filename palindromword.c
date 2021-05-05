#include<stdio.h>
int main()
{
  printf("*************************************************\n");
  char choice,n[20];
  printf("Enter your your name: ");
  scanf("%s",n);
  printf("Welcome %s\n",n);
  do
  {
    char a[20],b[20];
    int i,d=0,j,flag=0,z=0;
    printf("Enter your word: ");
    scanf("%s",a);
    printf("\n");
    for(i=0;a[i];i++)
    {
      printf("%c\t",a[i]);
      d++;
    }
    //reversing the given word
    printf("\n\nnumber of characters in %s is %d\n",a,d);
    i=0;
    for(j=(d-1);j>=0;j--)
    {
      while(i<=d)
      {
        b[j]=a[i];
        break;
      }
      i++;
    }
    printf("\n\nrevers of the word %s is : ",a);
    for(i=0;i<d;i++)
    {
      printf("%c\t",b[i]);
    }
    printf("\n\n");
    //checking the word is palindrom or not
    for(i=0;i<d;i++)
    {
      if(b[i]==a[i])
      {
        flag=1;
      }
    }
    if(flag==1)
    {
      printf("The given word %s is PALINDROM",a);
    }
    else
    {
      printf("The given word %s is NOT PALINDROM",a);
    }
    printf("\n");
    do
    {
      printf("do you want to continue(y/n): ");
      scanf(" %c",&choice);
      if(choice=='y')
      {
        z=1;
        printf("\n");
      }
      else if(choice=='n')
      {
        z=1;
      }
      else
      {
        printf("invalide choice\n");
        z=0;
        choice='d';
      }
    }
    while(z==0);
  }
  while(choice!='n');
  printf("Thank you\n");
  printf("*************************************************\n");
}
