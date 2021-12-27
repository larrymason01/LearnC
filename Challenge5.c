//// Simple Weather Program
//#include "stdio.h"
//#include "stdbool.h"
//
//int main(int argc, char *argv[]) {
//    // This program will find the total rainfall for each year, average yearly rainfall, and average monthly rainfall
//    float rainfall[5][12] = {
//            {9.01,1.57,1.09,5.14,2.96,8.77,9.33,7.38,3.86,6.91,2.15,3.37},
//            {7.99,9.61,8.94,0.19,1.44,0.15,5.14,2.58,3.38,5.78,3.37,6.45},
//            {5.97,9.26,2.16,9.94,7.48,7.01,5.31,9.19,0.95,4.80,4.86,9.97},
//            {0.17,7.95,0.88,8.20,3.20,3.14,5.52,8.56,4.02,7.32,5.57,5.41},
//            {2.73,4.06,0.67,3.47,1.22,9.29,6.37,3.59,8.00,2.13,8.78,9.36},
//    };
//
//    int i; // Year counter
//    int p; // Month counter
//
//    float yearlySums[5];
//    float sum = 0;
//
//    // Sorts through the data in the rainfall array, then puts yearly sums in tho the yearlySums array
//    for (i = 0; i < 5; ++i) {
//        for (p = 0; p < 12; ++p) {
//            sum += rainfall[i][p];
//        }
//        yearlySums[i] = sum;
//        sum = 0;
//    }
//
//    // Calculates the average for each year then prints the value
//    for (int x = 0; x < 5; ++x) {
//        float average = yearlySums[x] / 12.0;
//        printf("Average Rainfall per Month in 200%d: %0.2f inches\n", x + 5, average);
//    }
//
//
//    return 0;
//}
//
