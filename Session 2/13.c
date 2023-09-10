/*
       Author: Vatsal Mangukiya
       Date: 10th sept,2023

       Question: 13.	C program to check whether a given date is valid or not (switch).

*/
#include<stdio.h>

int isleapyear(int year)
{
       if(year%4==0)
       {
              return 0;
       }
       return 1;
}
int main(){

       int date,month,year;
      
       printf("Please Enter date(DD):");
       scanf("%d",&date);
       printf("Please Enter month(MM):");
       scanf("%d",&month);
       printf("Please Enter Year(YYYY)");
       scanf("%d",&year);
      
       printf("\n----------------------\n");

       switch( isleapyear(year))
       {
              // leap year
              case 0:
                     switch(month)
                     {
                            case 1:
                            case 3:
                            case 5:
                            case 7:
                            case 8:
                            case 10:
                            case 12:
                                   if(date>=1&&date<=31)
                                   {
                                          printf("%d/%d/%d is Valid Date",date,month,year);
                                   }
                                   else
                                   {
                                          printf("%d/%d/%d is InValid Date",date,month,year);

                                   }
                                   break;
                            
                            case 4:
                            case 6:
                            case 9:
                            case 11:
                                   if(date>=1&&date<=30)
                                   {
                                          printf("%d/%d/%d is Valid Date",date,month,year);
                                   }
                                   else
                                   {
                                          printf("%d/%d/%d is InValid Date",date,month,year);

                                   }
                                   break;

                            case 2:
                                   if(date>=1&&date<=29)
                                   {
                                          printf("%d/%d/%d is Valid Date",date,month,year);
                                   }
                                   else
                                   {
                                          printf("%d/%d/%d is InValid Date",date,month,year);

                                   }
                                   break;
                     }
              break;
              // Not a leap year
              case 1:
                      switch(month)
                     {
                            case 1:
                            case 3:
                            case 5:
                            case 7:
                            case 8:
                            case 10:
                            case 12:
                                   if(date>=1&&date<=31)
                                   {
                                          printf("%d/%d/%d is Valid Date",date,month,year);
                                   }
                                   else
                                   {
                                          printf("%d/%d/%d is InValid Date",date,month,year);

                                   }
                                   break;
                            
                            case 4:
                            case 6:
                            case 9:
                            case 11:
                                   if(date>=1&&date<=30)
                                   {
                                          printf("%d/%d/%d is Valid Date",date,month,year);
                                   }
                                   else
                                   {
                                          printf("%d/%d/%d is InValid Date",date,month,year);

                                   }
                                   break;

                            case 2:
                                   if(date>=1&&date<=28)
                                   {
                                          printf("%d/%d/%d is Valid Date",date,month,year);
                                   }
                                   else
                                   {
                                          printf("%d/%d/%d is InValid Date",date,month,year);

                                   }
                                   break;
                     }
              break;
       }

       
}