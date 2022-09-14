#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int k=0,result=0,a,b;
void set(){
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
}
void c(){
    result=0;
    k=0;
}
void add(){
    if(k){
        printf("Enter the number:\n");
        scanf("%d",&a);
        result+=a;
        printf("sum is = %d",result);


    }else{
    set();
    result=a+b;
    printf("sum is = %d",result);
    }
}
void sub(){
    if(k){
        printf("Enter the number:\n");
        scanf("%d",&a);
        result-=a;
        printf("sub is %d",result);
    }else{
    set();
    result=a-b;
    printf("sub is = %d",result);
    }
}
void mult(){
    if(k){
        printf("Enter the number:\n");
        scanf("%d",&a);
        result*=a;
        printf("sub is %d",result);

    }else{
    set();
    result=a*b;
    printf("Multiple is = %d",result);
    }
}
void Division(){
    if(k){
        printf("Enter the number:\n");
        scanf("%d",&a);
        result/=a;
        printf("sub is %d",result);

    }else{
    set();
    result=a/b;
    printf("Division is = %d",result);
    }
}
void rem(){
     if(k){
        printf("Enter the number:\n");
        scanf("%d",&a);
        result%=a;
        printf("sub is %d",result);

    }else{
    set();
    result=a%b;
    printf("remainder is = %d",result);
    }
}

int manu(){
    int choice;
    printf("Old result is %d\n",result);
    printf("\nEnter your choice");
     printf("\n1.add\n2.sub\n3.mul\n4.div\n5.remainder\n6.Exit\n7.Clear\n");
     scanf("%d",&choice);
    return choice;    
}
void main(){
    // int choice;
    while(1){
    // printf("\nOld result is %d\n",result);

    // printf("\nEnter your choice");
    //  printf("\n1.add\n2.sub\n3.mul\n4.div\n5.remainder\n6.Exit\n7.Clear\n");
    //  scanf("%d",&choice);
      system("cls");    

    //   switch (choice)
     switch (manu())
     {
     case 1:   
       add();
       k=1;
        break;
     case 2:
       sub();
       k=1;
         break;
     case 3:
        mult();
        k=1;
         break;
     case 4:
        Division();
        k=1;
         break;
     case 5:
        rem();
        k=1;
         break;                
     case 6:
        exit(0);
         break; 
     case 7:
        c();
         break;     
     default:
         break;
    }
 } 
}