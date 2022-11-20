#include <stdio.h>

int balance[5] = { 1000,2000,5000,7500,6050 };
int pan[5] = { 1234123412341234,5678567856785678,1478147814781478,2589258925892589,3698369836983698 };
int index;
int check;
float max;
int new_balance;



int isAmountAvailable() {


    if (trans_amount <= balance[index]) {
        printf("Transaction Accepted. \n");
    }
    else {
        printf("Declined , Insuffecient funds \n");

    }
    return (trans_amount);
}

int setMaxAmount() {
    return max = 4000;
}
int isBelowMaxAmount() {
    if (trans_amount <= max) {
        printf("Declined Amount Exceeding Limit \n");

    }
    else if (trans_amount > max) {
        printf("Accepted Amount. \n"); ;
    }
}

int isValidAccount() {
    key user;
    for (int i = 0; i < 5; i++) {
        if (*user.account_pan == pan[i]) {
            printf("Account number is valid.\n");
            index = i;
            check = 0;
            break;
        }
        else {
            check = 1;

        }
    }

    return(index);
    return(check);

}

int saveTransaction() {

    new_balance = balance[index] - trans_amount;
    printf("Successfull transaction, balance updated \n");
    return 0;
}