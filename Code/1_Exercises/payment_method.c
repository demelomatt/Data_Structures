// payment method

#include <stdio.h>
#include <math.h>

void cash(float purchase);
char *credit(void);

int main()
{
    int payment;
    float purchase;

    do {
        printf("Enter purchase amount: R$ ");
        scanf("%f",&purchase);
    } while(purchase < 0);

    do {
        printf("\nEnter the payment method:\n1 - cash\n2 - credit card\n\n");
        scanf("%d",&payment);
    } while(payment != 1 && payment != 2);

    char *result;

    // if payment method was cash
    if (payment == 1){
        cash(purchase);
    }

    // credit
    else {
        result = credit();
        if (result == "Invalid credit card number."){
            printf("%s\n",result);
            return 1;
        }
        printf("\nYour purchase was successfully made with your %s credit card.",result);

        }

    return 0;
}

void cash(float purchase)
{
    float given, banknotes[2][12] = {{0.01, 0.05, 0.10, 0.25, 0.50, 1, 2, 5, 10, 20, 50, 100},{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

    do {
        printf("\nEnter the amount given: R$ ");
        scanf("%f",&given);
    } while(given<purchase);

    float amount_return = given - purchase;

    printf("\nTotal to return: R$ %2.2f\n",amount_return);


    for (int i=11;i>=0;i--) // for each banknote
    {
        // checks if the current banknote is greater than the current amount_return
        // if it is, subtract the banknote value from the amount_return and increment the amount of banknotes used for this index
        while(amount_return >= banknotes[0][i]) {
            amount_return -= banknotes[0][i];
            banknotes[1][i] += 1;
        }

    }

    for (int i=11;i>=0;i--){

        // prints the banknotes that will be given in exchange
        if (i >= 6 && banknotes[1][i]){
            printf("\nNotes of R$ %2.2f: %2.0f",banknotes[0][i],banknotes[1][i]);
        }
        else if (i < 6 && banknotes[1][i]) {
            printf("\nCoins of R$ %2.2f: %2.0f",banknotes[0][i],banknotes[1][i]);
        }
    }

}

char *credit(void)
{
    long int credit_card;

    printf("\nType a credit card number: ");
    scanf("%ld",&credit_card);

    int length = floor(log10(credit_card) + 1); //calculates size of integer
    long int *pcredit = &credit_card;
    int *plength = &length; // parameters will be passed by pointer

    if (checksum(*pcredit,*plength)) // checks if it is a valid credit card number
    {
        if (amex(*pcredit,*plength)){
            return "AMEX";
        }

        if (mastercard(*pcredit,*plength)){
            return "MASTERCARD";
        }

        if (visa(*pcredit,*plength)){
            return "VISA";
        }

    }

    return "Invalid credit card number.";
}

int amex(long int credit_card,int length)
{
    // True if lenght equals to 15 and the first digits equal to 34 or 37
    if (length == 15)
    {
        int digit_one = credit_card/pow(10,length - 1);
        int digit_two = credit_card/pow(10,length - 2);

        if (digit_one == 3 && (digit_two % 10 == 4  || digit_two % 10 == 7)){
            return 1;
        }
    }

    return 0;
}

int mastercard(long int credit_card,int length)
{
    // True if lenght equals to 16 and the first digits equal to 51/52/53/54/55
    if (length == 16)
    {
        int digit_one = credit_card/pow(10,length - 1);
        int digit_two = credit_card/pow(10,length - 2);
        int acceptable_digits[5] = {1,2,3,4,5};

        for (int i=0;i<=5;i++){
             if (digit_one == 5 && digit_two % 10 == i){
                return 1;
            }
        }
    }

    return 0;
}

int visa(long int credit_card,int length){

    // True if lenght equals to 13 or 16 and the first digit equals to 4
    if (length == 13 || length == 16){
        if (credit_card/pow(10,length - 1) == 4){
            return 1;
        }
    }

}

int checksum(long int credit_card,int length){
    int element, sum = 0;
    long int credit_card_copy = credit_card; // We cannot change the original credit_card variable

    // Checks if it's a valid credit card number

    for (int i = 0;i < length; i++) // For each digit of integer
    {
        if (i % 2 == 0) {
            // if it's even, return mod of the division by 10
            element = credit_card_copy % 10;
        }

        else
        {
            element = (credit_card_copy % 10) * 2; // if it's odd, return double of digit
            int lenght_element = floor(log10(element) + 1);

            // if the number is greater than 9, then add themselves
            if (lenght_element > 1) {
                element = element % 10 + element/ 10;
            }

        }

        credit_card_copy /= 10;
        sum += element;

    }

    // True if last digit equals to 0

    if (sum%10){
        return 0;
    }

    return 1;
}
