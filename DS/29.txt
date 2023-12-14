#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char alp={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"}

char s1[26];
char s2[26];

int bs1[26],bs[26],c1[26],c2[26],bi[26];
int k,z,c;


void getele(){
	printf("Enter max element for set 1 \n");
	scanf ("%d",&z);
	for (k=0;k<z;k++)
	{
		scanf ("%s",&s1[k]);
	}
	bit (s1,bs1,z);
	Printf ("Enter the max elemenft for set2\n");
	scanf("%d",&z);
	for (k=0;k<z;k++)
	{
		scanf ("%s&s2[k]")
	}
	bit (s2,bs2,z);
}
void bit(char s[26],int bs[26],int z)
{	
	int i;
	int j;

	for(i=0;i<26;i++);
	{
			
		bs[i]=0;

	}
	for(i=0;i<z;i++)
	{
	
		for(j=0;j<26;j++)
		{

			if (s[i]==alp[j])
			{
				bs[j]=1;
			}		


		}



	}
}


