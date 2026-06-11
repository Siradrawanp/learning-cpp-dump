#include <iostream>
#include <limits>

double saving = 0;
void funcDeposit();
void funcWithdrawn();
void funcShowBalance();

int main() {
    int choice = 0;
    double transaction = 0;

    do {
        std::cout << "Pilih Operassi (masukan kode angka): " << "\n";
        std::cout << "1. Deposit" << "\n";
        std::cout << "2. Withdrawn" << "\n";
        std::cout << "3. Show Balance" << "\n";
        std::cout << "4. exit" << "\n";

        std::cin >> choice;

        // if the uset insert other than valid code
        // example: pizza
        // clear buffer and reset the choice code
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            choice = 0;
        }

        switch (choice) {
            case 1:
                funcDeposit();
                funcShowBalance();
                break;
            case 2:
                funcWithdrawn();
                funcShowBalance();
                break;
            case 3:
                funcShowBalance();
                break;
            case 4:
                std::cout << "Exiting banking program" << "\n";
                break;
            default:
                std::cout << "Invalid kode" << "\n";
                break;
        }
    }while (choice != 4);


    return 0;
}


void funcDeposit() {
    double transac;
    std::cout << "How Much: ";
    std::cin >> transac;

    if (transac <= 0) {
        std::cout << "insert valid amount of money" << "\n";
    } else {
        saving += transac;
        std::cout << "Deposit Success" << "\n";
    }

};
void funcWithdrawn() {
    double transac;
    std::cout << "How Much: ";
    std::cin >> transac;

    if (saving < 0 || saving < transac) {
        std::cout << "Withdrawn failed, not enough saving money" << "\n";
    } else if (transac <= 0) {
        std::cout << "Insert valid amount" << "\n";
    } else {
        saving -= transac;
        std::cout << "Withdrawn Success" << "\n";
    }
};
void funcShowBalance() {
    std::cout << "Your balance is " << saving << "\n";
};
