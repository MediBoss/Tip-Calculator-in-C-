#include <iostream>
#include "implementation.cpp"

int main(){

  double bill = 0;
  int tipPercent = 0;
  std::cout<<"__________________________________________________________"<<std::endl;
  std::cout<<"\n\n\t\t\tWelcome to Patsy's Tip Calculator\n\n"<<std::endl;
  std::cout<<"\nEnter the Bill Amount : \n"<<std::endl;
  std::cin >> bill;
  std::cout<<"\nEnter the Tip percent : \n"<<std::endl;
  std::cin >> tipPercent;

  tipCalc customerA(bill,tipPercent);

  customerA.printBill();

  std::cout<<"__________________________________________________________"<<std::endl;



  return 0;
}
