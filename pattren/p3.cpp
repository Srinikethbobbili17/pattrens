/*for n=3 ,print:
  123
  456
  789*/
#include<iostream>
using namespace std;
int main(){
  int n,num=1;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<num<<" ";//to print with space
      num++;
    }
    cout<<endl;
  }
}
