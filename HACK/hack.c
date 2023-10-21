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

    int days_remaing=30-current_day+1;
    float remaining_gb=plan_gb - use_gb;

    float daily_usege_allow=remaining_gb/days_remaing;

    printf("Please Enter Your Plane GB=>");

    scanf("%f", & plan_gb);

    printf("Please Enter current day:");

    scnaf("%i",  &current_day);
    
   

   
 }