#include<iostream>
#define inf 1000000000
using namespace std;

void Merge(int* a,int p,int q,int r)
{
	int n1=q-p+1;
	int n2=r-q;
	int i,j;
	int *L=new int[n1+2];
	int *R=new int[n2+2];
	for(i=1;i<=n1;i++)
		L[i]=a[p+i-1];
	for(j=1;j<=n2;j++)
		R[j]=a[q+j];
	L[n1+1]=inf;
	R[n2+1]=inf;
	i=1;
	j=1;
	for(int k=p;k<=r;k++)
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i++;
		}
		else 
		{
			a[k]=R[j];
			j++;
		}
	}
  delete[]L;
  delete[]R;
}
void MergeSort(int* a,int p,int r)
{
	if(p<r)
	{
		int q=(p+r)/2;
		MergeSort(a,p,q);
		MergeSort(a,q+1,r);
		Merge(a,p,q,r);
	}
}
int main()
{
	cout<<"请输入数组大小"<<endl;
	int array_size;
	cin>>array_size;
	int *array=new int[array_size+1];
	cout<<"请输入数组数据"<<endl;
	for(int i=1;i<=array_size;i++)
		cin>>array[i];
	MergeSort(array,1,array_size);//调用函数
	cout<<"排序结果为"<<endl;
	for(int i=1;i<=array_size;i++)
		cout<<array[i]<<" ";
	cout<<endl;
	delete[]array;
//	system("pause");
	return 0;
}
