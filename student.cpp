#include<iostream>
using namespace std;
struct stu
{
	int m;
	int ab;
};

int main(){
struct stu s[30];
int no;
float sum=0;
int marks[31];
int max=0,min=30;
	for(int i=0;i<31;i++)
		marks[i]=0;
	cout<<"enter total no of students ";
	cin>>no;

	for(int i=0;i<no;i++)
	{int a;
	cout<<"is student absent (1/0)";
	cin>>a;
	if(a==1)
	{
		s[i].m=0;
		s[i].ab=1;
	}
	else
	{cout<<"enter marks";
	
		cin>>s[i].m;
		s[i].ab=0;
	
	
	sum=sum+s[i].m;//sum
	if(max<s[i].m)
		max=s[i].m;
	
	if(min>s[i].m)
		min=s[i].m;
	
	marks[s[i].m]++;
	
	}
	}
	cout<<"total marks are"<<sum;
	cout<<"max marks are"<<max;
	cout<<"min marks are"<<min;
	int mm=0;
	int cnt;
	for(int i=0;i<31;i++)
	{
		if(mm<marks[i])
		{mm=marks[i];
		cout<<" "<<i<<" "<<endl;
		}
	}//////////todo
	
	cout<<"most occouring  marks are"<<marks[cnt]+1<<" "<<mm;
	
	
	return 0;
}