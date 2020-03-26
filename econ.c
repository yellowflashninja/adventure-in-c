#include <stdio.h>
#include <string.h>

int main() {
    
    double prevInfRate;
    double curInfRate;

    printf("Please enter the following information to determine the state of the economy\nPrevious month's posted inflation rate: ");
    scanf("%lf", &prevInfRate);
    printf("This month's posted inflation rate: ");
    scanf("%lf", &curInfRate);
    if((prevInfRate - curInfRate) > .5){
        printf("The economy need a little improving. Maybe look towards investing less and spending more.");
    }
    else{
        printf("It's not that bad");
    }


    return 0;

}