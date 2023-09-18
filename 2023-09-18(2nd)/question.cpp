#include<bits/stdc++.h>
using namespace std ;


int main(){
  cin.sync_with_stdio(0) ;
  cin.tie(0) ;

  int hts1 , cts1 , hts2 , cts2 ;
  int htsum1 = 0 , htsum2 = 0 , ctsum1 = 0 , ctsum2 = 0 ;
  bool wl1 = 0 , wl2 = 0;
  for (int i = 0; i < 4; i++)
  {
    cin>>hts1 ;
    htsum1 += hts1 ;
  }
  for (int i = 0; i < 4; i++)
  {
    cin>>cts1 ;
    ctsum1 += cts1 ;
  }
  for (int i = 0; i < 4; i++)
  {
    cin>>hts2 ;
    htsum2 += hts2 ;
  }
  for (int i = 0; i < 4; i++)
  {
    cin>>cts2 ;
    ctsum2 += cts2 ;
  }
  cout<<htsum1<<":"<<ctsum1<<"\n" ;
  cout<<htsum2<<":"<<ctsum2<<"\n" ;
  if(htsum1>ctsum1){
    wl1 = 1 ;
  }
  if(htsum2>ctsum2){
    wl2 = 1 ;
  }
  if(wl1&&wl2){
    cout<<"Win\n" ;
  }
  else if(wl1||wl2){
    cout<<"Tie\n" ;
  }
  else{
    cout<<"Lose\n" ;
  }
  
}
    
    