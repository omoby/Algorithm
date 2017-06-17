#include<iostream>
using namespace std;
void  InserSort(int *a,int n)//插入排序算法
 {
	 int i;
   for( i=1;i<n;i++)
   {
      int key=a[i];//标记当前数据
	  int j=i-1;
      while(j>=0&&a[j]>key)//找插入位置
      {
         int temp=a[j+1];
         a[j+1]=a[j];
         a[j]=temp;
		 j--;
      }
     a[j+1]=key;//插入
  }
}
int main()
{
	cout<<"请输入数组大小"<<endl;
  int array_num;
  cin>>array_num;
  int *array=new int[array_num];
  cout<<"请输入数组数据"<<endl;
  for(int i=0;i<array_num;i++)
      cin>>array[i];
  InserSort(array,array_num);//调用函数
  cout<<"排序结果为："<<endl;
  for(int i=0;i<array_num;i++)
    cout<<array[i]<<" ";
  cout<<endl;
  delete[]array;
 // system("pause");
  return 0;
}
