#include<iostream>
using namespace std;
class stu
{
int r[30];
int no;
public:
void read(){
//cout<<""; 
cin>>no;
		cout<<"enter their roll nos ";

for(int i=0;i<no;i++)
{
cin>>r[i];
}
}

void disp()
{
	cout<<"{";
for(int i=0;i<no;i++)
{
cout<<r[i]<<",";
}	
	cout<<"\b}";
}

void tot()
{		cout<<"enter total no of students ";

	cin>>no;

for(int i=0;i<no;i++)
{
r[i]=i+1;
}

}

void uni(stu a,stu b)
{
	int f=0;
	int i;
for(i=0;i<a.no;i++)
{
	r[i]=a.r[i];
	
}	
for(int j=0;j<b.no;j++)
{
	f=0;
	for(int k=0;k<a.no;k++)
{
	if(b.r[j]==a.r[k])
	{
	    f=1;
        break;		
	}
	
}
 if(f==0)
 {
	 r[i]=b.r[j];
	 i++;
 }

	
}	
	
	
	no=i;
}

void inter(stu a,stu b)
{
	int f=0;
	int i;
i=0;
for(int j=0;j<b.no;j++)
{
	f=0;
	for(int k=0;k<a.no;k++)
{
	if(b.r[j]==a.r[k])
	{
	    f=1;
        break;		
	}
	
}
 if(f==1)
 {
	 r[i]=b.r[j];
	 i++;
 }

	
}	
	
	
	no=i;
}

void diff(stu a,stu b)
{
	int f=0;
	int i=0;

for(int j=0;j<b.no;j++)
{
	f=0;
	for(int k=0;k<a.no;k++)
{
	if(b.r[j]==a.r[k])
	{
	    f=1;
        break;		
	}
	
}
 if(f==0)
 {
	 r[i]=b.r[j];
	 i++;
 }

	
}	
	
	
	no=i;
}



};
int main(){
	stu u,c,b,t,o;
t.tot();
	cout<<"enter no of cricket";
	c.read();
	c.disp();
	cout<<"enter no of basketball";
	b.read();
	b.disp();
	u.uni(c,b);
	o.diff(u,t);
	t.disp();
	o.disp();

	return 0;
}