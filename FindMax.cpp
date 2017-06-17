#include<iostream>
using namespace std;
int FindMax(int *a,int n)//查找函数
{
   int Max=a[0];
   for(int i=1;i<n;i++)
       if(a[i]>Max)
          Max=a[i];
   return  Max;
}
int main()
{

  cout<<"请输入数组大小"<<endl;
  int array_num;
  cin>>array_num;
  int n=array_num;
  int *array=new int[array_num];
  int i;
  cout<<"请输入数组数据"<<endl;
  for(i=0;i<array_num;i++)
      cin>>array[i];
  int M=FindMax(array,n);//调用查找函数
  cout<<"最大数字为："<<endl;
  cout<<M<<endl;
  delete[]array;
  //system("pasue");
  return 0;
}
       
