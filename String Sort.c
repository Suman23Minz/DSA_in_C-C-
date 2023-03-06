#include <stdio.h>
#include <string.h>
//main function starts here
void main()
{
  char str[25][50],temp[25];
  int n,i,j;
  printf("\n\nSorts the strings of an array using bubble sort :\n\n");
  printf("Enter the number of strings you want to enter:");
  scanf("%d",&n);
  printf("Enter the string inputs %d :\n",n);
  for(i=0;i<=n;i++)
  {
      //using fgets to read the string
      fgets(str[i], sizeof str, stdin);
  }
  //Bubble sorting starts form here
  for(i=1;i<=n;i++)
  {
      for(j=0;j<=n-i;j++)
    {
        //using strcmp() to compare the string entered
        if(strcmp(str[j],str[j+1])>0)
	  {
	      //using strcpy() to copy the string
	      strcpy(temp,str[j]);
	      strcpy(str[j],str[j+1]);
	      strcpy(str[j+1],temp);
	  }
    }
  }
  printf("The strings after sorting :");
  for(i=0;i<=n;i++)
  {
      printf("%s\n",str[i]);
  }
}
