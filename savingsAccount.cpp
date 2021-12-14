
#include "savingsAccount.h"

double savingsAccount::getInterestRate() const{
  return interestRate;
}
void savingsAccount::setInterestRate(double rate){
  interestRate = rate;
}
void savingsAccount::withdraw(double amount){
   if (balance >= amount)
                balance = balance - amount;
   else
      cout << "Insufficient funds. Withdrawl transaction rejected, balance remains the same" << endl;
}
void savingsAccount::postInterest()
{
        balance += (balance * interestRate);
}
void savingsAccount::print() {
  bankAccount::print();
  cout<<"Interest Rate: "<<interestRate<<endl; 
}
savingsAccount::savingsAccount():bankAccount(){
    interestRate = DEFAULT_INTEREST_RATE_SAVINGS;
  }
savingsAccount::savingsAccount(int acctNumber, double bal, double intRate):bankAccount(acctNumber, bal){
  interestRate = intRate;
}





