# Coat-check

You are tasked with writing a small coat-checking program! You need to create a program that takes in a user's name and any coats and bags they want to check-in while visiting. The program should then search through the checked-in items by name, and allow users to check out; in doing so, the user should not be able to find checked-out coats and bags.

Example output:

Welcome to the coat-check in department!
Please read the following menu:

------- Main Menu -------
1 - Check-in item
2 - List checked-in items
3 - Check-out items
0 - Exit
>>>  1
--- You have selected "Check-In items"! ---
Please enter your name or type 0 to return to the main menu:
>>> Josh

--- Wonderful! Welcome, Josh! ---
Please enter the first item you would like to check-in:
>>> Red Jacket - code 01
--- Your Red Jacket - code 01 has been checked-in under Josh ---
Would you like to add anything else? (Y/N):
>>> y
Please enter the next item you would like to check-in:
>>> Cardigan - code 02
--- Your Cardigan - code 02 has been checked-in under Josh ---
Would you like to add anything else? (Y/N):
>>> n

Returning to the main menu...

------- Main Menu -------
1 - Check-in item
2 - List checked-in items
3 - Check-out items
0 - Exit
>>>  2

The currently checked-in items are:

Name            Items
----            -----
Josh           Red Jacket - code 01, Cardigan - code 02

Returning to the main menu...

------- Main Menu -------
1 - Check-in item
2 - List checked-in items
3 - Check-out items
0 - Exit
>>>  3
--- You have selected "Check-Out items"! ---
Please enter the name for the guest you would like to check-out or type 0 to return to the main menu:
>>> Josh
Returning Josh's: Red Jacket - code 01, Cardigan - code 02
--- Thank you for coming, Josh! ---

Returning to the main menu...

------- Main Menu -------
1 - Check-in item
2 - List checked-in items
3 - Check-out items
0 - Exit
>>>  0

Thank you for using the coat check-in service! Goodbye.
'''
  /\_/\   
 ( ^.^ )  
  > - <   
--------- 
