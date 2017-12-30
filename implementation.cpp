#include "source.h"
#include <iostream>

tipCalc:: tipCalc(double billAmount, int tipPercent){
  //constructor to initialize the bill and tip percent
  this->billAmount = billAmount;
  this->tipPercent = tipPercent;
}
//Function to return the tip tipPercent
//Postcondition : The percentage of the tip is retuned (e.g: 10% of the bill, 20% of the bill)
int tipCalc:: getTipPercent()const{

  return this->tipPercent;
}

//function to return the amount to tip the waiter baised on the bill amount
//Postcondition : The tip amount is returned
double tipCalc:: getTipAmount()const{

  return (this->billAmount * this->billAmount)/100;
}
//function to return the bill amount given by the waiter
//Postcondition : The bill amount is returned
double tipCalc:: getBillAmount()const{

  return this->billAmount;
}
//function to retunr the total amount of money to pay the waiter
//Postcondition : The total price is returned
double tipCalc:: getTotalAmount()const{

  return (this->getBillAmount() + this->getTipAmount());
}
//this function prints the final bill to the customer
//Postcondition : All the informations necessary to paid the waiter are printed to the user
void tipCalc:: printBill() const{

  std::cout<<"\n\n\t\t\tTIP CALCULATOR\n\n"<<"Bill Amount :\t\t\t"<<this->getBillAmount()<<std::endl;
  std::cout<<"\nTip Percent :\t\t\t"<<this->getTipPercent()<<"\n\nTip Amount :\t\t\t"<<this->getTipAmount()<<std::endl;
  std::cout<<"\nTotal Amount :\t\t\t"<<this->getTotalAmount()<<"\n\nThank You !\n"<<std::endl;
}

