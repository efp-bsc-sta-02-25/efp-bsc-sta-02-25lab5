
#include <iostream>
#include<random>
using namespace std;

int main() {
    int daysUntilExpiration = rand() % 12;

    switch (daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired.";
            break;
        case 1:
            cout << "Your subscription expires within a day!\n";
            cout << "Renew now and save 20%!";
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in "
                 << daysUntilExpiration << " days.\n";
            cout << "Renew now and save 10%!";
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!";
            break;
        case 11:
            cout << "You have an active subscription.";
            break;
    }

    return 0;
}
