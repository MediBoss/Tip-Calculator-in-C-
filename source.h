#include <iostream>

class tipCalc{

    private:

      double billAmount;// this variable will store the bill given by the waiter
      int tipPercent; //this is will store how many percent of your money you want to tip the waiter

    public:

            //FUNCTIONS TO PROCESS THE CUSTOMER DATA

      int getTipPercent() const; //simply retuns the percent of the tip mentioned by the customer
      double getTipAmount() const;//returns the money to be given to the waiter as a tip
      double getTotalAmount() const; //returns the total money to be paid including the tip
      double getBillAmount() const;//simply returns the bill given by the waiter
      void printBill() const; // prints the entire bill to the customer

          //CONSTRUCTOR

      tipCalc(double, int);

};
