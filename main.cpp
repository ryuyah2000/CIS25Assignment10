// Calculates the commssion based on the value of the sales
// <10000 = 10%
// <15000 = 15%
// >15000 = 20%
// code by Ryuya Hirota

#include <iostream>

int main() {
    double sales;
    std::cout << "Enter number of sales: " << std::endl;
    std::cin >> sales;
    
    double commission;
    if (sales < 10000) {
        commission = sales * 0.1;
    } else if (sales < 15000) {
        commission = sales * 0.15;
    } else {
        commission = sales * 0.2;
    }
    
    std::cout << "Sales amount: " << sales << std::endl;
    std::cout << "Commission total: " << commission << std::endl;

    return 0;
}
