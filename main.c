#include <stdio.h>

float convert(int from, int to, float amount);

int main() {
    printf("Type 1 if you would like to convert from USD, type 2 if you would like to convert from EUR, type 3 if you would like to convert from GBP, type 4 if you would like to convert from JPY, or type 5 if you would like to convert from CAD.\n");
    int convertFrom;
    scanf("%d", &convertFrom);
    if(convertFrom != 1 && convertFrom != 2 && convertFrom != 3 && convertFrom != 4 && convertFrom != 5) {
        printf("Sorry, what you entered is invalid.\n");
        main();
    } else {
        printf("Type 1 if you would like to convert to USD, type 2 if you would like to convert to EUR, type 3 if you would like to convert to GBP, type 4 if you would like to convert to JPY, or type 5 if you would like to convert to CAD.\n");
        int convertTo;
        scanf("%d", &convertTo);  
        if(convertTo != 1 && convertTo != 2 && convertTo != 3 && convertTo != 4 && convertTo != 5) {
            printf("Sorry, what you entered is invalid.\n");
            main();
        } else {
            printf("How much money would you like to convert?\n");
            float amount;
            scanf("%f", &amount);
            if(amount < 0) {
                printf("Please enter a positive amount.\n");
                main();
            }
            printf("%0.2f\n", convert(convertFrom, convertTo, amount));
            main();
        }
    }
    return 0;
}

float convert(int from, int to, float amount) {
    if(from == 1 && to == 1) {
        return amount;
    } else if(from == 1 && to == 2) {
        return amount * 0.93;
    } else if(from == 1 && to == 3) {
        return amount * 0.81;
    } else if(from == 1 && to == 4) {
        return amount * 149.38;
    } else if(from == 1 && to == 5) {
        return amount * 1.37;
    } else if(from == 2 && to == 1) {
        return amount * 1.07;
    } else if(from == 2 && to == 2) {
        return amount;
    } else if(from == 2 && to == 3) {
        return amount * 0.87;
    } else if(from == 2 && to == 4) {
        return amount * 160.36;
    } else if(from == 2 && to == 5) {
        return amount * 1.47;
    } else if(from == 3 && to == 1) {
        return amount * 1.24;
    } else if(from == 3 && to == 2) {
        return amount * 1.15;
    } else if(from == 3 && to == 3) {
        return amount;
    } else if(from == 3 && to == 4) {
        return amount * 184.88;
    } else if(from == 3 && to == 5) {
        return amount * 1.69;
    } else if(from == 4 && to == 1) {
        return amount * 0.0067;
    } else if(from == 4 && to == 2) {
        return amount * 0.0062;
    } else if(from == 4 && to == 3) {
        return amount * 0.0054;
    } else if(from == 4 && to == 4) {
        return amount;
    } else if(from == 4 && to == 5) {
        return amount * 0.0092;
    } else if(from == 5 && to == 1) {
        return amount * 0.73;
    } else if(from == 5 && to == 2) {
        return amount * 0.68;
    } else if(from == 5 && to == 3) {
        return amount * 0.59;
    } else if(from == 5 && to == 4) {
        return amount * 109.24;
    } else if(from == 5 && to == 5) {
        return amount;
    }
}
