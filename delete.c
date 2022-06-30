#include <stdio.h>
int main()
{
    int a[100];
    int i,pos,n;
    printf("Enter any values:\n");
    scanf("%d",&n);
    printf("\nEnter %d values:",n);
    for (i=0;i<n;i++)
    {
    scanf("\n%d",&a[i]);
	}
 	printf("Enter the position to be deleted:");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
	    a[i]=a[i+1];
	}
    for(i=0;i<n-1;i++)
    printf("\n%d",a[i]);
}