#include <stdio.h>

float trans_amount;
typedef struct transaction {
    int trans_year[50];
    int trans_month[50];
}date;


void isCardExpired() {
    date dates;
    key user;

    if (*user.expiryYear < *dates.trans_year)
    {
        printf("Declined , Expired card. \n");

    }
    else if (*user.expiryYear > *dates.trans_year)
    {
        printf("Accepted , valid card. \n");
    }
    else if (*user.expiryYear = *dates.trans_year)
    {
        if (*user.expiryMonth < *dates.trans_month) {
            printf("Declined , Expired card. \n");


        }
        else if (*user.expiryMonth >= *dates.trans_month) {
            printf("Accepted , valid card. \n");
        }
    }

}

int getTransactionAmount() {
    printf("Enter Transaction Amount: \n");
    scanf("%d", trans_amount);
    return (trans_amount);
}

void getTransactionData() {
    date dates;
    printf("Please Enter Transaction Month: \n");
    scanf("%d", dates.trans_month);
    printf("Please Enter Transaction Year: \n");
    scanf("%d", dates.trans_year);
}