#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#include<windows.h>
int i ,j,x=0,y=0,width=20,hight=20,frutX=0,frutY=0,flag,gameOver,score,countTail=0;
int tailX[100],tailY[100];
int ch;

void setup(){
    gameOver=0;
    x=width/2;
    y=hight/2;

    labal1:
    frutX=rand()%20;
    if(frutX==0)
     goto labal1;

    labal2: 
    frutY=rand()%20;
    if(frutY==0)
     goto labal2;
    score=0;
   
}
void drow(){
    int k;
    system("cls");
    for(i=0;i<=hight;i++){
        for(j=0;j<=width;j++){
            if(i==0||i==width||j==0||j==hight){
                printf("#");
            }
            else{
                if(i==x&&j==y){
                    printf("^");
                }else if(i==frutX&&j==frutY){
                    printf("F");
                }else{
                    int ch=0;
                 for(k=0;k<countTail;k++){
                    if(i==tailX[k]&&j==tailY[k]){
                        printf("o");
                        ch=1;
                    }
                 }   
                 if(ch==0)
                  printf(" ");
                }
            }
        }
        printf("\n");
    }
    printf("Score=%d",score);
}

void input(){

    if(kbhit()){
        switch(getch()){   
        case 'a':
         flag=1;
         break;
        
        case 's':
         flag=2;
         break;
        
        case 'w':
         flag=3;
         break;
        
        case 'z':
         flag=4;
         break;
        case 'q':
         gameOver=1;
         break;

        }
     }

}
void makeLogic(){

  if(ch==1){
    sleep(1);

  }if(ch==2){
    sleep(1);

  }if(ch==3){
    sleep(0.4);

  }
    int prevX=tailX[0];
    int prevY=tailY[0];
    int prev2X,prev2Y;
    tailX[0]=x;
    tailY[0]=y;
    for(i=1;i<countTail;i++){
        prev2X=tailX[i];
        prev2Y=tailY[i];
        tailX[i]=prevX;
        tailY[i]=prevY;
        prevX=prev2X;
        prevY=prev2Y;
    }
    switch(flag){
        case 1:
         --y;
         break;
        case 2:
         ++y;
         break;
        case 3:
         --x;
         break;
        case 4:
         ++x;
         break;  
        default:
         break;  
    }
    if(x<0||x>width||y<0||y>hight)
       gameOver=1;

    for(i=0;i<countTail;i++){
        if(x==tailX[i]&&y==tailY[i])
         gameOver=1;
    }   
    if(x==frutX&&y==frutY){
    labal3:
    frutX=rand()%20;
    if(frutX==0)
     goto labal3;

    labal4: 
    frutY=rand()%20;
    if(frutY==0)
     goto labal4;

    score+=10; 
    countTail++;
    }   
        
}
int main(){
    
    printf("###################  Welcome to Snake Game  ##################");
    printf("\nSELECT THE MEDIUM OF GAME\n");
    
        labal0:    
         printf("If you want to play Low speed Enter 1:\n");
         printf("If you want to play Medium speed Enter 2:\n");
         printf("If you want to play  high speed Enter 3:\n");
        
        
        scanf("%d",&ch);
        if(ch==1||ch==2||ch==3){
          

        }else{
          printf("\nEnter valid Number\n");
          system("cls");
          goto labal0;
        }
    
    system("cls");
    setup();
 while(gameOver!=1){   
    input();
    drow();
    makeLogic();
 }
  return 0;  
}