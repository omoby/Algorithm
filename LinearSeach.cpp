#include<iostream>
using namespace std;
int LinearSeach(int *a,int n,int find_num)
  {
   int k=1;
   while(k<=n&&a[k]!=find_num)
    {
      k++;
    }
   if(k==n)
    return 0;
   else
    return k;
}
int main()
{
	cout<<"请输入线性表大小和查找数据"<<endl;
  int array_num;
  int find_num;
  cin>>array_num>>find_num;
  int *array=new int[array_num];
  int i;
  cout<<"请输入线性表数据"<<endl;
  for(i=1;i<=array_num;i++)
      cin>>array[i];
  cout<<"查找结果为"<<endl;
  int j= LinearSeach(array,array_num,find_num);
  cout<<j<<endl;
  delete[]array;
  //system("pause");
  return 0;
}
  
