#include<iostream>
using namespace std;
void Perm1(int *p,int m,int n)//固定位置放元素全排列算法
{
	if(n==m)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<p[i]<<" ";
		}
		cout<<endl;
	}
	else
	{
		int j;
		for( j=m;j<=n;j++)
		{
	    	{
	     	   int temp=p[j];
				p[j]=p[m];
				p[m]=temp;
			}
			Perm1(p,m+1,n);
			{
				int temp=p[j];
				p[j]=p[m];
				p[m]=temp;
			}
		}
	}
}
void GeneratingPerm1(int *p,int n)
{
	int j;
	for(j=1;j<=n;j++)
		p[j]=j;
	Perm1(p,1,n);
}
int main()

{
	cout<<"请输入全排列大小"<<endl;
	int size_num;
	cin>>size_num;
	int *p=new int[size_num];
	cout<<"全排列结果为："<<endl;
	GeneratingPerm1(p,size_num);
	delete[]p;
	//system("pause");
	return 0;
}
