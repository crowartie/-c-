#include <iostream>
#include<cmath>
using namespace std;
int main() {
  setlocale(LC_ALL, "rus");
  int a;
  cout<<"Числа Армстронга"<<endl;
  for(int i=1;i<32000;i++){
    a=i;
    int h=0;
    while(a!=0){
      h++;
      a=a/10;
    }
    int n;
    n=pow(i/10000,h)+pow(i/1000%10,h)+pow(i/100%10,h)+pow(i/10%10,h)+pow(i%10,h);
    if(n==i){
      cout<<i<<endl;
    }    
  }
}
