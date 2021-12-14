#include <iostream>
#include "checkingAccount.h"
#include "savingsAccount.h"
#include "bankAccount.h"

int main() {
  bankAccount account;
  
  savingsAccount account2(5,9.7,8.4);
  account2.postInterest();
  account2.withdraw(8);
  account2.print();

  checkingAccount account3;
  account3.postInterest();
  account3.withdraw(7);
  account3.print();
}
