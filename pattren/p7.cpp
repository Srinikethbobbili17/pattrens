/*for n=4 print:
A
B B
C C C
D D D D
 */
#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  char ch='A'+1;
  for(int i=0;i<n;i++){
    char ch='A'+i;
    for(int j=0;j<i+1;j++){
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}