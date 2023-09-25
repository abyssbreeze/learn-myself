#include<bits/stdc++.h>
using namespace std ;


int main(){
  cin.sync_with_stdio(0) ;
  cin.tie(0) ;

  int n ;
  int k ;
  int x ;
  stack<int> s ;
  cin>>n ;
  
  for (int i = 0; i < n; i++)
  {
    cin>>k ;
    if(k==1){
      cin>>x ;
      s.push(x) ;
    }
    else if(k==2){
      if(s.empty()){
        cout<<-1<<"\n" ;
      }
      else{
        int num = s.top() ;
        cout<<num<<"\n" ;
      }
    }
    else if(k==3){
      if(s.empty()){
        continue ;
      }
      else{
        s.pop() ;
      }
    }
  }

  
  return 0 ;
}
    
    