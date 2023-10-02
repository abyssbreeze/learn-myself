#include<iostream>
#include<conio.h>
#include<windows.h> 
#include <cstdlib> //rand()
#include <ctime> //time()
using namespace std ;



void gotoxy(short x ,short y){
     COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void character(){
    cout<< "^" ;
}

int character_shoot(int space){
    for (int i = 20 ; i > 0 ; i--)
    {
        gotoxy(90+space,i) ;
        cout<<"|\n" ;
    }
    gotoxy(90+space,20) ;
    cout<<"^" ;

     return space ;    
}

void win(){
    system("cls") ;
    cout<<"win" ;
}

int main(){
    system("cls") ;
    srand(time(NULL));

    int space = 0 ;  
    int t = 100 ;
    int town;
    int monster[200] ;
    int is_win = 0 ;
    for (int i = 20 ; i < 150 ; i++)
    {
      if(i%10==0){
        monster[i] = 1 ;
      }
      else{
        monster[i] = 0 ;
      }
      
    }
    gotoxy(90,20);
    character() ;
    while(1){
        is_win = 1 ;
        for(int i = 0; i < 200 ; i++)
        {
            if(monster[i]==1){               
                is_win = 0 ;
            }   
        }
        if(is_win){
            win() ;
            system("pause") ;
            return 0 ;
        }
        gotoxy(0,0) ;
        for (int i = 0 ; i < 180 ; i++){
            
            if(monster[i]==1){
                cout<<monster[i] ;
            }
            else{
                cout<<" " ;
            }
        }
        town = getch();
        if(space>=75){
            space = 75 ;
        }
        else if(space<=-75){
            space = -75 ;
        }
        gotoxy(90+space,20) ;
        if(town==75){ //左
            system("cls") ;
            
            space-- ;
            gotoxy(90+space,20) ;
            character() ;
        }
        else if(town==77){ //右
            system("cls") ;
            space++ ;
            gotoxy(90+space,20) ;
            character() ;
        }
        else if (town==72){
            system("cls") ;
            gotoxy(90+space,20) ;
            character_shoot(space) ;
            Sleep(10) ;
            if(monster[90+space]==1){
                monster[90+space] = 0 ;
            }
            system("cls") ;
            gotoxy(90+space,20) ;
            character() ;
        }
        
        else{
            continue ;
        }

    }

}
