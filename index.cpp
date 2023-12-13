#include<iostream>
using namespace std;
char tic[10]={'0','1','2','3','4','5','6','7','8','9'};
void play();
int winner();

int main(){
    
    int player=1,i,choice;
    char mark;
    
do{
 play();
 if(player%2==1)
     player=1;
     
 else
     player=2;
     cout<<"Player"<<player <<" enter a number";
     cin>>choice;
     if(player==1){
         mark='X';
     
 }
 else{
     mark='o';
 }
 if(choice == 1 && tic[1]=='1')
 tic[1]=mark;
 else if(choice==2 && tic[2]=='2')
 tic[2]=mark;
  else if(choice==3 && tic[3]=='3')
 tic[3]=mark;
  else if(choice==4 && tic[4]=='4')
 tic[4]=mark;
  else if(choice==5 && tic[5]=='5')
 tic[5]=mark;
  else if(choice==6 && tic[6]=='6')
 tic[6]=mark;
  else if(choice==7 && tic[7]=='7')
 tic[7]=mark;
  else if(choice==8 && tic[8]=='8')
 tic[8]=mark;
  else if(choice==9 && tic[9]=='9')
 tic[9]=mark;
 else{
     cout<<"invalid move because u entered a invalid number";
     player--;
     cin.ignore();
     cin.get();
     return 0;
 }
 i=winner();
 player++;
 
    }
    while(i==-1);
    play();
    if(i==1)
    cout<<"==>\aplayer"<<--player<<"winner";
    else
    cout<<"==> \a Game draw";
    cin.ignore();
    cin.get();
}
    
 void play(){
     system("cls");
      cout<<"\n##################################";
      cout <<"\n\tTIC TAC TOE\n";
      
       cout<<"\n##################################";
       cout<<"Player 1 (x)  -  Player 2 (0)"<<endl <<endl;
       cout<<endl;
       
       cout<<"     |     |     "<<endl;
       cout<<"  "<< tic[1] << "  |  "<< tic[2]<< "  |  "<<tic[3] <<endl;
       
       cout<<"_____|_____|_____"<<endl;
       cout<<"     |     |     "<<endl;
      
      
       cout<<"  "<< tic[4]<< "  |  "<< tic[5]<< "  |  "<<tic[6] <<endl;
      
       cout<<"_____|_____|_____"<<endl;
       cout<<"     |     |     "<<endl;
       
       cout<<"  "<< tic[7]<< "  |  "<< tic[8]<< "  |  "<<tic[9] <<endl;
       cout<<"     |     |     "<<endl<<endl;
      }  
      
      int winner(){
          if(tic [1]==tic[2] && tic[2]==tic[3])
          return 1;
          else if(tic[4]==tic[5] && tic[5]==tic[6])
          return 1;
          else if(tic[7]==tic[8] && tic[8]==tic[9])
          return 1;
          else if(tic[1]==tic[4] && tic[4]==tic[7])
          return 1;
          else if(tic[2]==tic[5] && tic[5]==tic[8])
          return 1;
          else if(tic[3]==tic[6] && tic[6]==tic[9])
          return 1;
          else if(tic[1]==tic[5] && tic[5]==tic[9])
          return 1;
          else if(tic[3]==tic[5] && tic[5]==tic[7])
          return 1;
          else if(tic[1]!='1' && tic[2]!='2'&& tic[3]!='3' && tic[4]!='4' && tic[5]!='5'&& tic[6]!='6' && tic[7]!='7' && tic[8]!='8'&& tic[9]!='9')
          return 0;
          else{
              return -1;
          }
          
      }
