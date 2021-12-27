//// Weekly Pay Calculator
//#include "stdio.h"
//
//int main() {
//    int payRate = 12;
//    float grossPay, taxes, netPay;
//    float hoursWorked, overtimeHoursWorked;
//
//    printf("Enter hours worked: ");
//    scanf("%f", &hoursWorked);
//
//    if (hoursWorked > 40) {
//        overtimeHoursWorked = hoursWorked - 40;
//        hoursWorked = 40 + (overtimeHoursWorked * 1.5);
//        printf("Hours worked with overtime: %0.2f\n", hoursWorked);
//    } else {
//        printf("No overtime worked.\n");
//    }
//
//    grossPay = hoursWorked * payRate;
//
//    if (grossPay <= 300) {   // 15 percent tax rate
//        netPay = grossPay * 0.85;
//    } else if (grossPay <= 450) {   // 20 percent tax rate
//        netPay = grossPay * 0.80;
//    } else {
//        netPay = grossPay * 0.75;   // 25 percent tax rate
//    }
//
//    printf("Gross pay: %0.2f\n", grossPay);
//    printf("Amount taxed: %0.2f\n", grossPay - netPay);
//    printf("Net pay: %0.2f\n", netPay);
//
//
//    return 0;
//}
//
