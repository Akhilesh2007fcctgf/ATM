
#include<stdio.h>

                              /*   !!ATM!!    */
                              
int main(){
       
       
       printf("\t  Welcome to the ATM !!\n");

       int z;
       int rs =42000;
       int pin =2007;
       for(z =1; z<=38; z++){
         printf("=");
         }
        printf("\n");
       
     printf("Press Enter to ATM -:");
     char a;
     scanf("%c",&a); 
     
       printf("\n\t01.Withdrawal.");
       printf("\n\t02.Balance Inquiry.");
       printf("\n\t03.Pin Change.");  
       int h;   
     printf("\nPlease!! select option by number (1-3):");
     scanf("%d",&h);
      
      for( z =1; z<=38; z++){
         printf("=");
        }
         printf("\n");

      switch (h)
      {
      case 1: printf("\tPlease!! enter the amount. ");
               printf("\nPER TRANSACTION WITHDRAWAL\nLIMITE IS RS.10,000 \n\t:Rs.");
               int i;
               scanf("%d",&i);
                if(i > 10000){
                  printf("\nPlease! Enter Limited Rupees!!\n");
                  break;
                }

              printf("\ndid you like receipt ?\nenter '1'for Yes and '2' for No :");
               int l;
                scanf("%d",&l);
                 if(l == 1){
                   printf("\nPlease take your receipt by mashine\n");
                 }
                 
                 for( z =1; z<=38; z++){
                     printf("=");
                      }
                   printf("\n");

                printf("\n\tPLEASE TAKE YOUR CASH");
                 printf("\ncollect your cash promptly !!\n");
                  printf("ATM will not pull back uncollected cash !!\n\n");

                  for( z =1; z<=38; z++){
                      printf("=");
                  }
                   printf("\n");
                      printf("\tTHANKYOU !!\n");

                       break;

      case 2:  printf("Please! enter your pin(XXXX) :");
               int k;
                scanf("%d",&k);
                if(k == pin){
                   printf("\nYour current balance is Rs.%d\n",rs);

                   for( z =1; z<=38; z++){
                     printf("=");
                   }
                     printf("\n");
                      printf("\tTHANKYOU !!\n");
                }

                 else{
                  printf("\nWrong pin !!\a\n");
                 }
                 break;
      
      case 3: printf("Please! enter your old pin(XXXX) :");
               scanf("%d",&k);
               if(k != pin){
                 printf("\nWrong pin !!\a\n");
                 break;
               }

               printf("\nEnter your new pin(XXXX) :");
               int e;
               scanf("%d",&e);

               printf("\nConform your pin(XXXX) :");
                int s;
               scanf("%d",&s);
               if( e == s){
                    printf("\nYour pin changed correctly !!");
                    for( z =1; z<=38; z++){
                        printf("=");
                    }
                      printf("\n");
                        printf("\tTHANKYOU !!\n");
               }

               else{
                printf("\nIncorrect pin !!\a\n");
               }
               break;

       default : printf("\nWrong number !!\a\n");
                 break;        
      }
   
   return 0; 
}

