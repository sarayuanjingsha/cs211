//Equivalent Arrays
#include<iostream>
using namespace std;

bool equivalent(int a[],int b[],int n){
  //outer loop: skipped position
  //inner loop: indexes
    for(int p=0; p<n; p++){
      int count=0;
      for(int i=0;i<n;i++){
        if(a[i]==b[i+p]) continue;
           else break;
        if(count==n) return true;
      }
    }
    return false;
}

int main(){
  int c[5] = {1,2,3,4,5};
  int d[5]={3,4,5,1,2};
  int m=5;
  cout<< equivalent(c,d,m)<<endl;

  return 0;
}
