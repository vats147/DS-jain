/*
       Author: Vatsal Mangukiya
       Date: 10th sept,2023

       Question: 11.	C program to output the next date for a given date (else-if).
*/
#include<stdio.h>

int main(){

       
       int date,month,year;
       int pdate,pmonth,pyear;

       printf("Please Enter date(DD):");
       scanf("%d",&date);
       printf("Please Enter month(MM):");
       scanf("%d",&month);
       printf("Please Enter Year(YYYY)");
       scanf("%d",&year);

       pdate=date;
       pmonth=month;
       pyear=year;

       if(year%4==0) //leap year
       {
              if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
              {
                     if(date<31)
                     {
                            pdate=date+1;
                     }
                     else if(date>31)
                     {
                            printf("Invalid Date");
                            return 0;
                     }
                     else
                     {
                            pdate=1;
                            if(month==12)
                            {
                                   pmonth=1;      
                                   pyear=year+1;
                            }
                            else
                            {
                                   pmonth=month+1;

                            }

                     }
              }
              else if(month==4||month==6||month==9||month==11)
              {
                     if(date<30)
                     {
                            pdate=date+1;
                     }
                     else if(date>30)
                     {
                            printf("Invalid Date");
                            return 0;
                     }
                     else
                     {
                            pdate=1;
                            if(month==12)
                            {
                                   pmonth=1;      
                                   pyear=year+1;
                            }
                            else
                            {
                                   pmonth=month+1;

                            }

                     }
              }
              else
              {
                     if(date<29&&date !=29)
                     {
                            
                            pdate=date+1;
                     }
                     else if(date>29)
                     {
                            printf("Invalid Date");
                            return 0;
                     }
                     else
                     {
                            pdate=1;
                            if(month==12)
                            {
                                   pmonth=1;      
                                   pyear=year+1;
                            }
                            else
                            {
                                   pmonth=month+1;

                            }
                     }
              }
       }
       else 
       {
             if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
              {
                     if(date<31)
                     {
                            pdate=date+1;
                     }
                     else if(date>31)
                     {
                            printf("Invalid Date");
                            return 0;
                     }
                     else
                     {
                            pdate=1;
                            if(month==12)
                            {
                                   pmonth=1;      
                                   pyear=year+1;
                            }
                            else
                            {
                                   pmonth=month+1;

                            }

                     }
              }
              else if(month==4||month==6||month==9||month==11)
              {
                     if(date<30)
                     {
                            pdate=date+1;
                     }
                     else if(date>30)
                     {
                            printf("Invalid Date");
                            return 0;
                     }
                     else
                     {
                            pdate=1;
                            if(month==12)
                            {
                                   pmonth=1;      
                                   pyear=year+1;
                            }
                            else
                            {
                                   pmonth=month+1;

                            }

                     }
              }
              else
              {
                     if(date<28&&date !=28)
                     {
                            
                            pdate=date+1;
                     }
                     else if(date>28)
                     {
                            printf("Invalid Date");
                            return 0;
                     }
                     else
                     {
                            pdate=1;
                            if(month==12)
                            {
                                   pmonth=1;      
                                   pyear=year+1;
                            }
                            else
                            {
                                   pmonth=month+1;

                            }
                     }
              }
       }
       printf("Current Date is %d/%d/%d\n",date,month,year);
       printf("Next Date is %d/%d/%d",pdate,pmonth,pyear);
       
}