/*/////////////////////////////////////////////////////////////////////////
                        
Full Name  : Diana Zhou Kuang

/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>
#include <string.h>
#include "coat_check.h"
#define SELECTION_SIZE 100

int main(void) {
    struct Guest guests[] = { 
        { "Cass", { { "" }, { "" }, { "" }, { "" }, { "" } }, '\0' },
        { "Weissey", { { "" }, { "" }, { "" }, { "" }, { "" } }, '\0' },
        { "Josh", { { "" }, { "" }, { "" }, { "" }, { "" } }, '\0' } };
    
    int numGuests = sizeof(guests) / sizeof(guests[0]);
    char Selection[SELECTION_SIZE];
    
    int value = 1;
    printf("Welcome to the coat-check in department!\n" 
           "Please read the following menu:\n\n");
    
    //menu main       
    while(value){
        printf("------- Main Menu -------\n");
        printf("1 - Check-in item\n");
        printf("2 - List checked-in items\n");
        printf("3 - Check-out items\n");
        printf("0 - Exit\n");
        printf(">>>  ");
        scanf("%s", Selection);
        
        // I used if/elseif/else instead of switch case, because when I typed 0 the program printed 
        // the default message.
        // I know that I could create a function like inputIntRange and etc. (as I did on milestones), but too much work...
        // this way is simple and it works.
        // I tested (by black box) negative numbers, characteres... I think is everything ok.
        if (strcmp(Selection, "1") == 0) {
                checkInItem(guests, numGuests);
                suspend();
        }
        else if (strcmp(Selection, "2") == 0) {
                listCheckedInItems(guests, numGuests);
                suspend();
        }
        else if (strcmp(Selection, "3") == 0) {
                checkOutItem(guests, numGuests);
                suspend();
        }
        else if (strcmp(Selection, "0") == 0) {
                printf("\nThank you for using the coat check-in service! Goodbye.\n"
                       "'''\n");
                value = 0;
                //return 0;
        } 
        else{
            printf("Input a valid number. Please try again.\n");
        }
    }
    
    surprise();   
    return 0;
}




