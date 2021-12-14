
//Class bankAccount
  
#ifndef H_bankAccount 
#define H_bankAccount
#include <iostream>
using namespace std;

class bankAccount
{
public:
    void setAccountNumber(int acct);
    int getAccountNumber() const;
    void setBalance(double bal);
    double getBalance() const; 
    void withdraw(double amount);
    void deposit(double amount);
    void print() ;
    // bankAccount(int acctNumber = -1, double bal = 0);
    bankAccount();
    bankAccount(int, double);

protected:
    int accountNumber;
    double balance;
};

#endif
