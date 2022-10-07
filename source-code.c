//This is a code written by Harsh Murjani.

#include<stdio.h>
#include<conio.h>

void main()
{
    //Variable allocation
    int amt,hnot,unot,eamt,note,fnot,tnot;
    
    //Input
    printf("Please enter the amount ");
    scanf("%d",&amt);
    printf("Which note is required ");
    scanf("%d",&note);
    
    //Calculation
    unot=amt/note;
    eamt=amt-unot*note;
    hnot=eamt/100;
    eamt=eamt-hnot*100;
    fnot=eamt/50;
    eamt=eamt-fnot*50;
    tnot=eamt/10;
    eamt=eamt-tnot*10;
  
    //Print
    printf("------------------------\n");
    printf("| %d rupees notes | %d |\n",note,unot);
    printf("| 100 rupees notes | %d |\n",hnot);
    printf("| 50 rupees notes  | %d |\n",fnot);
    printf("| 10 rupees notes  | %d |\n",tnot);
    printf("------------------------\n");
  
    //Output
    getch();
}
