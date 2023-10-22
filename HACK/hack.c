//creaat program for monthly data usege

/**
 * Name:Abdullah
 * Date:2023/21/10
 * Section :2D
 * Department:SE
 * subject:PF
  **/
#include<stdio.h>

#include<stdlib.h>
 int main(){

    float plan_gb;
    int current_day;
    float use_gb;

    

    printf("Please Enter Your Plane GB=>");

    scanf("%f", & plan_gb);

    printf("Please Enter current day:=>");

    scanf("%i",  &current_day);

    printf("Please enter Your Use GB=>");

    scanf("%f", &use_gb);


    int days_remaing=30 - current_day + 1;
    float remaining_gb= plan_gb - use_gb;

    float daily_usege_allow= remaining_gb / days_remaing;


    if(plan_gb > use_gb){
        printf("Your are allow to use Data\n");
    } else if (plan_gb < use_gb){
        printf("Your under the Montly allowence\n");
    }else  {
        printf("You are right on track with in your monthly data allownece:\n");
    } if (remaining_gb<0){
        printf("You have run out of data from the month:\n");
    } else {
     printf("You Have %.2f GB remaining for month\n",remaining_gb );
     printf("On the rest of month you have use %.2f GB data in month\n", daily_usege_allow);
    }
    
   

   
 }