#include<stdio.h>
void main()
{
  int z=0;
  do
  {
		int n,flag=0,j,i=2,c;
    printf("if you want to exit press 0\n");
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n==0)
    {
      break;
    }
		printf("The prime numbers under %d are :-",n);
		for(i=1;i<=n;i++)
		{
			c=0;
	    for(j=1;j<=i;j++)
	    {
	      if(i%j==0)
	      {
	        c++;
	      }
	    }
	    if(c==2)
	    {
	       printf("%d\t",i);
	    }
		}
		printf("\n");
  }
  while(z<1);
}
