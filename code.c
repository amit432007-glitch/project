#include <stdio.h>
void main ()
{
    printf("=======WELCOME=======");
    printf(" ##select any one number of option acording to your plan###");
    printf(" 1: ASSI TO DASHASHWAMEDH ( COST : 100 RS)");
    printf(" 2: SUNRISE RIDE ( COST : 150 RS)");
    printf(" 3: EVENING AERATI RIDE ( COST : 200 RS )");
    printf(" 4: FULL GHAT TOUR ( COST : 350 RS )");
    printf (" 0: close counter (day summary ) __");
 int adult , children , option ;
 int cost1 = 100;
 int  cost2 =150;
 int cost3 = 200;
 int cost4 = 350;
 scanf("%d ",& option );
 printf(" here inter number of adult");
 scanf(" %d ", & adult );
 printf (" here inter number of children");
 scanf(" %d ", & children );
 if (option >=  1){
            if (option == 1){
        children = children * cost1%2;
        printf(" Total amoutn : %d %d %d ", cost1*adult+children);
    }
    else {
         printf("#");
    }

    if ( option == 2){
        children = children * cost2%2;
        printf(" Total amount : %d %d %d ", cost2*adult+children);

    }
    else{
         printf("#");
    }
    if ( option == 3){
        children = children * cost3%2;
        printf("Total amount : %d %d %d", cost3*adult+children);
    }
    else{
         printf("#");
    }
    if ( option == 4 ){
        children = children * cost4%2;
        printf(" Total amount : %d %d %d ", cost4*adult+children);

    }
    else{
        printf("#");
    }
 }
 else {
     printf("#");
 }
    

    

    
}
