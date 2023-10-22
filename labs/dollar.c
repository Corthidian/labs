#include <stdio.h>
int main () {
    float usd, fee, gpb, jpy;
    printf("Please enter the total ammount os us dollars: ");
    scanf("%f",&usd);
    fee = 0.1 * usd;
    usd = usd - fee;
    gpb = 0.395 * usd;
    jpy = 62.825 * usd;
    printf("Fee (10%%) : $%.2f\nYou get:\n%.2f GBP\n%d JPY\n",fee,gpb,(int)jpy);
    return 0;
}