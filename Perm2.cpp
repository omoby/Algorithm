#include<iostream>
using namespace std;
void Perm2(int *p,int m,int n)//固定元素找位置全排列算法
{
	if(m==0)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<p[i]<<" ";
		}
		cout<<endl;
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(p[i]==0)
			{
				p[i]=m;
				Perm2(p,m-1,n);
				p[i]=0;
			}
		}
	}
}
void GeneratingPerm2(int*p,int n)//初始化函数
{
	for(int j=1;j<=n;j++)
		p[j]=0;
	Perm2(p,n,n);
}
int main()
{
	cout<<"请输入全排列大小"<<endl;
	int size_num;
	cin>>size_num;
	int *array=new int[size_num+1];
	cout<<"全排列结果为："<<endl;
	GeneratingPerm2(array,size_num);
	delete[]array;
//	system("pause");
	return 0;
}
