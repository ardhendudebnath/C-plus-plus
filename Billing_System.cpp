#include<iostream>//Online Food Ordering System
using namespace std;

// Function declaration
int returnTotalBill();

int main() {
    int totalBill = returnTotalBill();
    cout << "Your total Bill Amount is " << totalBill << endl;
    cout << "Thank you for your order !" << endl;
    return 0;
}

// Function definition
int returnTotalBill() {
    char c;
    char item;
    char vegItem;
    char nonvegItem;
    int billAmount = 0;
    char selectAgain;

    cout << "-------------------Welcome to online Food order---------------" << endl;
    cout << "------------------please follow below instruction-------------" << endl;
    cout << "Step 1 : please press s to start your order" << endl;
    cout << "Step 2 : you can order both veg and non-veg item" << endl;
    cout << "Step 3 : please press a to select veg item" << endl;
    cout << "Step 4 : please press b to select non-veg item" << endl;
    cout << "Step 5 : You will get your final Bill after your order" << endl;

start:
    cin >> c;
    if (c == 's' || c == 'S') {
        items:
        cout << "please select your choice" << endl;
        cout << "(a)veg Items                 (b)Non veg Item" << endl;
        cin >> item;
        if (item == 'a' || item == 'A') {
            vegItemList:
            cout << "please select 1,2,3,4,5,as per your choice" << endl;
            cout << "(1) paneer : price : Rs-250" << endl;
            cout << "(2) Burger : price : Rs-50" << endl;
            cout << "(3) Pizza : price : Rs-100" << endl;
            cout << "(4) Chowmin : price : Rs-150" << endl;
            cout << "(5) Veg Roll : price : Rs-100" << endl;
            cin >> vegItem;
            if (vegItem == '1') {
                billAmount = billAmount + 250;
            }
            else if (vegItem == '2') {
                billAmount = billAmount + 50;
            }
            else if (vegItem == '3') {
                billAmount = billAmount + 100;
            }
            else if (vegItem == '4') {
                billAmount = billAmount + 150;
            }
            else if (vegItem == '5') {
                billAmount = billAmount + 100;
            }
            else {
                cout << "You have entered wrong value, place try again!" << endl;
                goto vegItemList;
            }
            cout << "Do you want to add more items, y or n?" << endl;
            cin >> selectAgain;
            if (selectAgain == 'y') {
                goto items;
            }
            else {
                return billAmount;
            }
        }
        else if (item == 'b' || item == 'B') {
            nonVegItemList:
            cout << "please select 1,2,3,4,5,as per your choice" << endl;
            cout << "(1) Chicken : price : Rs-350" << endl;
            cout << "(2) Burger : price : Rs-100" << endl;
            cout << "(3) Pizza : price : Rs-150" << endl;
            cout << "(4) Chowmin : price : Rs-200" << endl;
            cout << "(5) Non-Veg Roll : price : Rs-200" << endl;
            cin >> nonvegItem;
            if (nonvegItem == '1') {
                billAmount = billAmount + 350;
            }
            else if (nonvegItem == '2') {
                billAmount = billAmount + 100;
            }
            else if (nonvegItem == '3') {
                billAmount = billAmount + 150;
            }
            else if (nonvegItem == '4') {
                billAmount = billAmount + 200;
            }
            else if (nonvegItem == '5') {
                billAmount = billAmount + 200;
            }
            else {
                cout << "You have entered wrong value, please try again!" << endl;
                goto nonVegItemList;
            }
            cout << "Do you want to add more items, y or n?" << endl;
            cin >> selectAgain;
            if (selectAgain == 'y') {
                goto items;
            }
            else {
                return billAmount;
            }
        }
        else {
            cout << "You have entered wrong value, please try again!" << endl;
            goto items;
        }
    }
    else {
        cout << "You have entered wrong value, please press s!" << endl;
        goto start;
    }
    return billAmount;
}
