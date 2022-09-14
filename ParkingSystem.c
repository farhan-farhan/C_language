#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int no_B,no_R,no_C,count=0,amount=0;
void Bus(){
  no_B++;
  amount=amount+no_B+100;
  count++;
  printf("Entry is succesfull for Bus\n\n");

}
void Cycle(){
  no_C++;
  amount=amount+no_C+20;
  count++;
  printf("Entry is succesfull for Cycle\n\n");
}
void Riksha(){
  no_R++;
  amount=amount+no_B+50;
  count++;
  printf("Entry is succesfull for Riksha\n\n");

}
void deletData(){
  no_B=0,no_R=0,no_C=0,count=0,amount=0;
  printf("Delet all Data succesfull\n\n");

}
void ShowDetail(){
    printf("\n Number of Bus =%d\n",no_B);
    printf("\n Number of Riksha =%d\n",no_R);
    printf("\n Number of Cycle =%d\n",no_C);
    printf("\n Number of Vehical =%d\n",count);
    // printf("\n  gain by Bus amount =%d",amount);
    // printf("\n  gain by cycle amount =%d",amount);
    // printf("\n  gain by Riksha amount =%d",amount);
    printf("\n total gain amount =%d\n",amount);
}
// int manu(){
//   int a;
//     printf("\n1. enter Bus \n");
//     printf("\n2. enter cycle \n");
//     printf("\n3. enter riksha\n ");
//     printf("\n4.  Delet \n");
//     printf("\n5.  Show status\n");
//     printf("\n Enter your choice:\n");
//     scanf("%d",&a);
//   return a;  
// }
void main(){
    int a;
    while(1){
    printf("\n1. enter Bus \n");
    printf("\n2. enter cycle \n");
    printf("\n3. enter riksha\n ");
    printf("\n4.  Delet \n");
    printf("\n5.  Show status\n");
    printf("\n Enter your choice:\n");
    scanf("%d",&a);
    switch(a){
        case 1:
        system("cls");
        Bus();
        break;

        case 2:
        system("cls");
        Cycle();
        break;

        case 3:
        system("cls");
        Riksha();
        break;

        case 4:
        system("cls");
        deletData();
        break;

        case 5:
        system("cls");
        ShowDetail();
        break;

        case 6:
        exit(0);
        default:
         printf("select valid no");
    }
  } 

}