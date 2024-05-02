#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

bool flag = false;
 int n;
 cin>>n;
 if(n<4){
 cout<<"-1";
 return 0;
 }
 for (int i = n / 7; i>= 0; i --) {
 int j = n - (i * 7);
 if (j% 4 == 0) {
 flag = true;
 for (int P = 0; P <j / 4; P ++) cout<<4;
 for (int Q = 0; Q <i; Q ++) cout<<7<<endl;
 break;

}

}
 if(!flag) cout<<-1<<endl;

}
