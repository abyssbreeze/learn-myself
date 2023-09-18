#include<bits/stdc++.h>
using namespace std ;

int main(){
  cin.sync_with_stdio(0) ;
  cin.tie(0) ;

  int a,b ;
  int at = 0 , bt = 0 ;
  int n ;
  int g ;
  int sum  = 0 ;
  cin>>a>>b ;
  cin>>n ;
  for (int i = 0; i < n; i++)
  {
    at = 0 ;
    bt = 0 ;
    while(cin>>g){
      if(g==0){
        break ;
      }
      if(g==a){
        at++ ;
      }
      else if(g==-a){
        at-- ;
      }
      if(g==b){
        bt++ ;
      }
      else if(g==-b){
        bt-- ;
      }
    }
    if(at>0 && bt>0){
      sum++ ;
    }
  }
  cout<<sum<<"\n" ;

  return 0 ;
}
    
    
