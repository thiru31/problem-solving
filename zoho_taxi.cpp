#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Booking {
    int bookingID;
    int customerID;
    string from;
    string to;
    int pickupTime;
    int dropTime;
    int amount;
};

struct Taxi {
    string taxiNo;
    int totalEarnings;
    vector<Booking> bookings;
};

void displayTaxiDetails(const Taxi& taxi) {
    cout << "Taxi No: " << taxi.taxiNo << "\tTotal Earnings: Rs. " << taxi.totalEarnings << endl;
    cout << "BookingID\tCustomerID\tFrom\tTo\tPickupTime\tDropTime\tAmount" << endl;
    for(const auto& booking : taxi.bookings) {
        cout << booking.bookingID << "\t" << booking.customerID << "\t" << booking.from << "\t" << booking.to << "\t" << booking.pickupTime << "\t" << booking.dropTime << "\t" << booking.amount << endl;
    }
    cout << endl;
}

int main() {

    Taxi taxi1 = {"Taxi-1", 0, {{1, 1, "A", "B", 9, 10, 200}, {3, 3, "B", "C", 12, 13, 200}}};

    for(const auto& booking : taxi1.bookings) {
        taxi1.totalEarnings += booking.amount;
    }

    displayTaxiDetails(taxi1);


    Taxi taxi2 = {"Taxi-2", 0, {{2, 2, "B", "D", 9, 11, 350}}};

    for(const auto& booking : taxi2.bookings) {
        taxi2.totalEarnings += booking.amount;
    }

    displayTaxiDetails(taxi2);

    return 0;
}