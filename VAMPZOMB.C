#include<stdio.h>
#include<conio.h>
void sort(int *,int);
void main()
{
	int n,c[100],v[100],z[100],i,j=0,k=0,sumV=0,sumZ=0;
	//clrscr();
	printf("Enter no of creatures: ");
	scanf("%d",&n);
	printf("\nEnter power of zombies and vampires:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}
	for(i=0;i<n;i++)
	{
		if(c[i]%2==0)
		{
		   z[j++]=c[i];
		   sumZ+=c[i];
		}
		else
		{
			v[k++]=c[i];
			sumV+=c[i];
		}
	}
	printf("\nZombies:\n");
	sort(z,j);
	printf("%d",sumZ);
	printf("\nVampires:\n");
	sort(v,k);
	printf("%d",sumV);
	//getch();
}
void sort(int *z,int k)
{
	int i,j,temp;
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(z[i]>z[j])
			{
				temp=z[i];
				z[i]=z[j];
				z[j]=temp;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d\t",z[i]);
	}
}
