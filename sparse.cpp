#include<iostream>
using namespace std;
//class matrix
int main()
{
int a[5][5]={{5,0,3,2,7},{0,0,0,0,9},{0,2,0,0,7},{0,0,4,0,0},{5,0,0,0,0}};
int as[100][3];
int stas[100][3];
int k=1;
for(int i=0;i<5;i++)
{
for(int j=0;j<5;j++)
{
	if(a[i][j]!=0)
	{
	as[k][0]=i;
	as[k][1]=j;
	as[k][2]=a[i][j];
	
	k++;
	}
	
}
}
	stas[0][0]=as[0][0]=5;
	stas[0][1]=as[0][1]=5;
	stas[0][2]=as[0][2]=k-1;
	
	/*for(int i=0;i<k;i++)
	{
	for(int j=0;j<3;j++)
		cout<<as[i][j]<<" ";
	
	
	cout<<endl;
	}
	int z=1;
	int j=0;
	int i=0;
	for(i=0;i<5;i++)
	{
	for(j=1;j<=as[0][2];j++)
	{			cout<<"hi"<<i;

		if(as[j][1]==i)
		{
			stas[z][0]=as[j][1];
			stas[z][1]=as[j][0];
			stas[z][2]=as[j][2];
		z++;
		}
	}
	
	}
	
	*/
	int i,z;
	int t[50],r[50];
	for(i=0;i<50;i++)
	{
		t[i]=0;
		
	}
	
	for(i=1;i<(as[0][2]+1);i++)
	{
		
		t[as[i][1]]++;
		
		
	}
	r[0]=1;
	for(i=1;i<5;i++)
	{
		r[i]=r[i-1]+t[i-1];
		
	}
	
	
	for(i=1;i<as[0][2];i++)
	{
		z=r[as[i][1]];
		stas[z][0]=as[i][1];
		stas[z][1]=as[i][0];
		stas[z][2]=as[i][2];
		r[as[i][1]]++;
		
		
		
	}
	
	cout<<"transpose"<<endl;
	for(int i=0;i<k;i++)
	{
	for(int j=0;j<3;j++)
		cout<<stas[i][j]<<" ";
	
	
	cout<<endl;
	}
return 0;
}