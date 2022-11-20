#include <stdio.h>

typedef struct bank {
	char username[100];
	int expiryMonth[100];
	int expiryYear[100];
	int account_pan[100];
}key;

void getCardPan() {
	key user;
	printf("Please Enter account number: \n");
	scanf("%d", user.account_pan);
}

void getCardExpiryDate() {
	key user;
	printf("Please Enter expiry month: \n");
	scanf("%d", user.expiryMonth);
	printf("Please Enter expiry year: \n");
	scanf("%d", user.expiryYear);
}

void getCardHolderName() {
	key user;
	printf("Please Enter card holder Name: \n");
	scanf("%s", user.username);
}