/*/////////////////////////////////////////////////////////////////////////
                      
Full Name  : Diana Zhou Kuang

/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>
#include <string.h>
#include "coat_check.h"
// display returning message
void suspend(void)
{
 printf("\nReturning to the main menu...\n");
 putchar('\n');
}
// 1 - Check-in item
void checkInItem(struct Guest guests[], int numGuests) {
    char name[SIZE_NAME];
    char item[SIZE_ITEM_NAME];
    int value = 0;
    int i, j;
    
    printf("--- You have selected \"Check-In items\"! ---\n"
           "Please enter your name or type 0 to return to "
           "the main menu:\n>>> ");
    
    scanf("%s", name);
    
    if (strcmp(name, "0") == 0) {
        return;
    }
    
    for (i = 0; i < numGuests; i++) {
        if (strcmp(guests[i].guestName, name) == 0) {
            value = 1;
            printf("\n--- Wonderful! Welcome, %s! ---"
            "\nPlease enter the first item you would like to check-in:\n>>> ", name);
            scanf(" %[^\n]s", item);
            
            if (guests[i].numCheckedInItems >= MAX_ITEMS) {
                printf("Sorry! You have reached the maximum number of checked-in items.\n");
                return;
            }
            
            strcpy(guests[i].checkedInItems[guests[i].numCheckedInItems], item);
            guests[i].numCheckedInItems++;
            
            printf("--- Your %s has been checked-in under %s ---\nWould you like to add anything else? (Y/N):\n>>> ", item, name);
            char add[SIZE_NAME];
            scanf(" %s", add);
            
            while(!(strcmp(add, "y") == 0 || strcmp(add, "Y") == 0 || strcmp(add, "n") == 0 || strcmp(add, "N") == 0)){
                printf("You should input Y|N. Please try again:\n>>> ");
                scanf(" %s", add);
            }
            
            while (strcmp(add, "y") == 0 || strcmp(add, "Y") == 0) {
                printf("Please enter the next item you would like to check-in:\n>>> ");
                scanf(" %[^\n]s", item);
                
                if (guests[i].numCheckedInItems >= MAX_ITEMS) {
                    printf("Sorry! You have reached the maximum number of checked-in items.\n");
                    return;
                }
                
                strcpy(guests[i].checkedInItems[guests[i].numCheckedInItems], item);
                guests[i].numCheckedInItems++;
                
                printf("--- Your %s has been checked-in under %s ---\nWould you like to add anything else? (Y/N):\n>>> ", item, name);
                scanf(" %s", add);
                
                while(!(strcmp(add, "y") == 0 || strcmp(add, "Y") == 0 || strcmp(add, "n") == 0 || strcmp(add, "N") == 0)){
                printf("You should input Y|N. Please try again:\n>>> ");
                scanf(" %s", add);
            }
                
            }
            
            //suspend();
            return;
        }
    }
    
    if (!value) {
        printf("Sorry! %s is not on the guest list.\n", name);
    }
}
// 2 - List checked-in items
void listCheckedInItems(struct Guest guests[], int numGuests) {
    
    int i;
    int j;
    
    printf("\nThe currently checked-in items are:\n\n");
    printf("Name            Items\n");
    printf("----            -----\n");
        
    for (i = 0; i < numGuests; i++) {
        if (guests[i].numCheckedInItems > 0) {
            printf("%-15s", guests[i].guestName);
            
            for (j = 0; j < guests[i].numCheckedInItems; j++) {
            printf("%s", guests[i].checkedInItems[j]);
                if (j < guests[i].numCheckedInItems - 1) {
                printf(", ");
                }
            }
            
            printf("\n");
        }
        
    }
    
    //if (guests[i].numCheckedInItems == 0) {
    //        printf("All the items were checked out.");
    //}
    //suspend();
}
// 3 - Check-out items
void checkOutItem(struct Guest guests[], int numGuests) {
    char name[SIZE_NAME];
    int value = 1;
    int i, j;
    
    printf("--- You have selected \"Check-Out items\"! ---\n");
    
    while (value) {
    printf("Please enter the name for the guest you would like to check-"
    "out or type 0 to return to the main menu:\n>>> ");
    scanf("%s", name);
    
    for (i = 0; i < numGuests; i++) {

        if (strcmp(guests[i].guestName, name) == 0) {
            if (guests[i].numCheckedInItems > 0) {
                printf("Returning %s's: ", guests[i].guestName);
                for (j = 0; j < guests[i].numCheckedInItems; j++) {
                    printf("%s", guests[i].checkedInItems[j]);
                    if (j < guests[i].numCheckedInItems - 1) {
                        printf(", ");
                    }
                }
                printf("\n--- Thank you for coming, %s! ---", guests[i].guestName);
                printf("\n");
                
                for (j = 0; j < guests[i].numCheckedInItems; j++) {
                    guests[i].checkedInItems[j][0] = '\0'; 
                }
                guests[i].numCheckedInItems = 0; 
            } 
            
            else {
                printf("No items checked-in for guest %s\n", guests[i].guestName);
            }
            
            value = 0;
            break;
        }
        
        //suspend();
        //return;
    }
    
    if (strcmp(guests[i].guestName, name) != 0) {
        printf("Sorry! %s is not on the guest list.\n", name);    
        }
    }
    return;
    //if (!value) {
      //  printf("Guest %s not found\n", name);
    //}
    
    //suspend();
}

void surprise(){
    printf("  /\\_/\\   \n");
    printf(" ( ^.^ )  \n");
    printf("  > - <   \n");
    printf("--------- ");
}




