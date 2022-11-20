#include <stdio.h>
#include "card.h"
#include "Terminal.h"
#include "server.h"

int main()
{
    while (1) {
        getCardHolderName();
        getCardExpiryDate();
        getCardPan();
        getTransactionData();
        isCardExpired();
        getTransactionAmount();
        setMaxAmount();
        isBelowMaxAmount();
        isAmountAvailable();
        isValidAccount();
        if (check == 1) {
            printf("Valid Account \n");
        }
        else {
            check = check;
        }

        saveTransaction();

    }
    return 0;
}