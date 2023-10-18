#include <stdio.h>
/*Input electricity unit charge and calculate the total electricity bill according to the given condition:
- For first 50 units Rs. 0.50/unit
- For next 100 units Rs. 0.75/unit
- For next 100 units Rs. 1.20/unit
- For unit above 250 Rs. 1.50/unit
- An additional surcharge of 20% is added to the bill.*/
void main() {
    float unitCharge, totalBill;
    
    printf("Enter the electricity unit charge: ");
    scanf("%f", &unitCharge);
    
    if (unitCharge <= 50) {
        totalBill = unitCharge * 0.50;
    } else if (unitCharge <= 150) {
        totalBill = (50 * 0.50) + ((unitCharge - 50) * 0.75);
    } else if (unitCharge <= 250) {
        totalBill = (50 * 0.50) + (100 * 0.75) + ((unitCharge - 150) * 1.20);
    } else {
        totalBill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unitCharge - 250) * 1.50);
    }
    totalBill += 0.20 * totalBill;
    
    printf("Total electricity bill: Rs. %.2f\n", totalBill);
    
}
