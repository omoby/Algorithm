#include<iostream>
using namespace std;
void Increment(int *a,int n)//二元计数算法
{
    	int i=0;
		while(i<n&&a[i]==1)
		 {
			 a[i]=0;
			 i++;
		 }
		if(i<n)
		 a[i]=1;
}
int main()
 {
	 cout<<"请输入数位"<<endl;
    int array_num;
    cin>>array_num;
    int *array=new int[array_num];
	cout<<"请输入每一位的数据"<<endl;
    for(int i=0;i<array_num;i++)
    cin>>array[i];
    Increment(array,array_num);
	cout<<"计数结果为"<<endl;
    for(int i=0;i<array_num;i++)
        cout<<array[i];
    delete[]array;
  //system("pasue");
    return 0;
}
