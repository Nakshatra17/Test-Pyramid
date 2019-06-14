#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k;
	for(i=1;i<=7;i++)
	{
		for(k=i;k<7;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=(2*i-1);j++)
		{
			cout<< "*";
		}
		cout<<endl;
	}
	getch();

}