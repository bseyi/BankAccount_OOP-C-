#include "checkingAccount.h"


double checkingAccount::getMinimumBalance() const
{
        return minimumBalance;
}

void checkingAccount::setMinimumBalance(double minBalance)
{
        minimumBalance = minBalance;
}

double checkingAccount::getInterestRate() const
{
        return interestRate;
}

void checkingAccount::setInterestRate(double intRate)
{
        interestRate = intRate;
}

double checkingAccount::getServiceCharge() const
{
        return serviceCharge;
}

void checkingAccount::setServiceCharge(double servCharge)
{
        serviceCharge = servCharge;
}

void checkingAccount::postInterest()
{
        balance += (balance * interestRate);
}

bool checkingAccount::verifyMinimumBalance()
{
        if (balance >= minimumBalance)
        {
                return true;
        }
        else
                return false;
}

void checkingAccount::writeCheck(double amount)
{
        withdraw(amount);
}

void checkingAccount::withdraw(double amount)
{
        if (balance < amount)
        {
          cout << "insufficient funds. Withdrawl rejected, does not affect balance." << endl;
        }
        else
    
                if (balance - amount >= minimumBalance)
                        balance = balance - amount;
                else
                        balance -= (amount + serviceCharge);
        }

void checkingAccount::print(){
  bankAccount::print();
  cout<<"Minimum Balance: "<<minimumBalance<<endl;
  cout<<"Interest Rate: "<<interestRate<<endl;
  cout<<"Service Charge: "<<serviceCharge<<endl;
}

checkingAccount::checkingAccount():bankAccount(){
  minimumBalance = DEFAULT_MIN_BALANCE;
  interestRate = DEFAULT_INTEREST_RATE_CHECKING;
  serviceCharge = DEFAULT_SERVICE_CHARGE;
}
checkingAccount::checkingAccount(int acctNumber, double bal, double minBal, double intRate, double servC):bankAccount(acctNumber, bal){
  interestRate = intRate;
  minimumBalance = minBal;
  serviceCharge = servC;
}










