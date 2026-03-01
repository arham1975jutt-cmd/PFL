#include <iostream>
using namespace std;

int main()
{
    double adultPrice, childPrice;
    int adultTickets, childTickets;
    double percent;

    cout << "Adult ticket price: ";
    cin >> adultPrice;

    cout << "Child ticket price: ";
    cin >> childPrice;

    cout << "Adult tickets sold: ";
    cin >> adultTickets;

    cout << "Child tickets sold: ";
    cin >> childTickets;

    cout << "Donation percentage: ";
    cin >> percent;

    double total = (adultPrice * adultTickets) + (childPrice * childTickets);
    double donation = total * percent / 100;
    double remaining = total - donation;

    cout << "\nTotal: " << total << endl;
    cout << "Donation: " << donation << endl;
    cout << "Remaining: " << remaining << endl;
}