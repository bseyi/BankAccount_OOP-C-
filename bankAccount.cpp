#include "bankAccount.h"

void bankAccount::setAccountNumber(int acct){
  accountNumber = acct;
}
int bankAccount::getAccountNumber() const{
  return accountNumber;
}
void bankAccount::setBalance(double bal){
  balance = bal;
}
double bankAccount::getBalance() const{
  return balance;
}
void bankAccount::withdraw(double amount){
  cout<<"Input amount to withdraw: ";
  cin>>amount;
  balance -= amount;
  }
void bankAccount::deposit(double amount){
  cout<<"Input amount to deposit: ";
  cin>>amount;
  balance += amount;

}
void bankAccount::print() {
  cout<<"Account Number: "<<accountNumber<<endl;
  cout<<"Balance: "<<balance<<endl; 

}
    // bankAccount(int acctNumber = -1, double bal = 0);
bankAccount::bankAccount(){
  accountNumber = -1;
  balance = 0;
}
bankAccount::bankAccount(int acctNumber, double bal){
  accountNumber = acctNumber;
  balance = bal;

}
