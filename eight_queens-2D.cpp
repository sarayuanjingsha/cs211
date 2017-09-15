#include<iostream>

using namespace std;

int main(){
    int b[8][8]={0},r,c=0;
    b[0][0]=1;
    int count=0;//count the posible solutions (92)

    nc: c++;
        if(c==8) goto print;
        r=-1;//before go to next row reset the value to -1

    nr: r++;
        if(r==8) goto backtrack;

    //row testing
    for(int i=0; i<c; i++){
      if(b[r][i]==1)
      goto nr;
    }
    //up diagonal testing
    for(int i=1;(r-i)>=0 && (c-i)>=0; i++){
       if(b[r-i][c-i]==1) goto nr;
    }
    //down digonal testing
    for(int i=1;(r+i)<8 &&(c-i)>=0;i++){
      if(b[r+i][c-i]==1) goto nr;
    }
    b[r][c]=1;//after passing all testing,then place a queen.
    goto nc;
    //backtracking
    backtrack: c--;
    if(c==-1) return 0;
     else{
        r=0;
        while(b[r][c] != 1){
          r++;
      }
        b[r][c]=0;
        goto nr;
    }

    print:
      cout<<"solution " << ++count <<endl;
      for(int r=0; r<8;r++) {
        for(int c=0; c<8; c++){
          cout<<b[r][c];
       }
       cout<<endl;
     }
     goto backtrack;
    return 0;
}
