Here is a description of the mini project on C++: Online Food Ordering System based on the provided code:

Project Overview :

The Online Food Ordering System is a C++ program that allows users to order food online and calculates the total bill amount based on their selections. The program provides a menu-driven interface for users to select veg and non-veg items, and calculates the total bill amount accordingly.

Features :

The program displays a welcome message and instructions for users to follow.

Users can select veg or non-veg items from a menu.

For veg items, users can choose from a list of 5 options: paneer, burger, pizza, chowmin, and veg roll.

For non-veg items, users can choose from a list of 5 options: chicken, burger, pizza, chowmin, and non-veg roll.

Users can add multiple items to their order and the program calculates the total bill amount.

The program displays the total bill amount and a thank you message after the user completes their order.

Code Explanation :

The code consists of a single C++ file that defines a returnTotalBill() function, which is called from the main() function. The returnTotalBill() function contains the logic for the online food ordering system.

Here is a breakdown of the code:

The program starts by displaying a welcome message and instructions for users to follow.

The user is prompted to press 's' to start their order.

The user is then presented with a menu to select veg or non-veg items.

Depending on the user's selection, they are presented with a list of options to choose from.

The user's selection is stored in a variable, and the corresponding price is added to the billAmount variable.

The user is prompted to add more items to their order, and if they choose to do so, the program loops back to the menu selection.

If the user chooses not to add more items, the program returns the total billAmount to the main() function.

The main() function displays the total bill amount and a thank you message.
