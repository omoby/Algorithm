#include<iostream>
using namespace std;
int HireAssistant(int *a,int n)
{
  int best=0;
  int best_score=a[0];
  for(int i=1;i<n;i++)
      if(a[i]>best_score)
        best=i;
 return best;
}
int main()
{
	cout<<"请输入面试人数"<<endl;
  int assistant_num;
  cin>>assistant_num;
  int *assistant_score=new int[assistant_num];
  cout<<"请输入面试人数分数"<<endl;
  for(int i=0;i<assistant_num;i++)
     cin>>assistant_score[i];
  int find=HireAssistant(assistant_score,assistant_num);
  cout<<"聘用人为"<<endl;
  cout<<find+1<<endl;
  delete[]assistant_score;
  //system("pause");
  return 0;
}
