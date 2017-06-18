#include<iostream>
using namespace std;
int Partition(int *a,int p,int r)
{
	int x=a[r];
	int i=p-1;
	for(int j=p;j<r;j++)
	{
		if(a[j]<=x)
		{
			i++;
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	int t=a[i+1];
	a[i+1]=a[r];
	a[r]=t;
	return i+1;
}
void QuickSort(int *a,int p,int r)
{
	if(p<r)
	{
		int q=Partition(a,p,r);
		QuickSort(a,p,q-1);
		QuickSort(a,q+1,r);
	}
}
int main()
{
	cout<<"请输入数组大小"<<endl;
	int array_size;
	cin>>array_size;
	int *array=new int[array_size];
	cout<<"请输入数组数据"<<endl;
	for(int i=1;i<=array_size;i++)
		cin>>array[i];
	QuickSort(array,1,array_size);
	cout<<"排序结果为"<<endl;
	for(int k=1;k<=array_size;k++)
		cout<<array[k]<<" ";
	cout<<endl;
	delete[]array;
	return 0;
}
