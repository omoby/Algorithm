#include<iostream>
using namespace std;
void SelectionSort(int *a,int i,int n)//选择排序算法实现
{
	if(i==n+1)
		return ;
	else
	{
		int k=i;//标记当前的位置
		for(int j=i+1;j<=n;j++)//从n-i个数中选出最小的数
		{
			if(a[j]<a[k])
				k=j;
		}
		if(k!=i)//n-i个数中的最小数往前挪
		{
			int temp=a[i];
			a[i]=a[k];
			a[k]=temp;
		}
		SelectionSort(a,i+1,n);//继续排i+1到ｎ的数
	}
}
int main()//主程序
{
	cout<<"请输入数组大小"<<endl;
	int array_size;
	cin>>array_size;
	int n=array_size;
	int *array=new int[array_size+1];
	cout<<"请输入数据"<<endl;
	for(int i=1;i<=n;i++)
		cin>>array[i];
	SelectionSort(array,1,n);
	cout<<"选择排序的结果"<<endl;
	for(int j=1;j<=n;j++)
		cout<<array[j]<<" ";
	cout<<endl;
	delete[]array;
//	system("pause");
	return 0;
}
