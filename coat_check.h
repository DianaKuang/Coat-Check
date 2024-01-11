/*/////////////////////////////////////////////////////////////////////////
                      
Full Name  : Diana Zhou Kuang

/////////////////////////////////////////////////////////////////////////*/

#ifndef _COAT_CHECK_
#define _COAT_CHECK_H_

#include <stdio.h> // include standard input/output library
#include <string.h> // include string manipulation library

#define SIZE_NAME 10
#define MAX_ITEMS 5 
#define SIZE_ITEM_NAME 100

struct Guest {
    char guestName[SIZE_NAME];
    char checkedInItems[MAX_ITEMS][SIZE_ITEM_NAME];
    int numCheckedInItems;
};

void suspend(void);
// 1 - Check-in item
void checkInItem(struct Guest guests[], int numGuests);
// 2 - List checked-in items
void listCheckedInItems(struct Guest guests[], int numGuests);
// 3 - Check-out items
void checkOutItem(struct Guest guests[], int numGuests);

void surprise();

#endif // end of header file

