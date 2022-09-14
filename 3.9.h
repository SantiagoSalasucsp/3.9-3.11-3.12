#include <string>

class Account {
public:
Account(std::string accountName, int initialBalance )
: name{accountName} {

if (initialBalance > 0) {
  balance = initialBalance;
  }

void deposit(int depositAmount) {
  if (depositAmount > 0) {
    balance = balance + depositAmount;
    }
  }
void retiro(int retiro){
  
  if (retiro<=balance)
  {cout<<"Ya no puede retirar mas dinero";)}
  switch case 
    case (retiro == 1)
      {balance = balance -10}
    case (retiro == 2)
      {balance = balance -50}
    case (retiro == 3)
      {balance = balance -100}
    
    
  
}
  

  
int getBalance() const {
  return balance;
  }

void setName(std::string accountName) {
  name = accountName;
  }
std::string getName() const {
  return name;
  }
  private:
std::string name;
int balance{0};
};

int main() {
  Account account1{"Jane Green", 50};
  Account account2{"John Blue", -7};
  
  cout << "account1: " << account1.getName() << "El balance es:" << account1.getBalance() << endl;
  cout << "account2: " << account2.getName() << "El balance es:" << account2.getBalance() << endl;
    
cout<<"si quiere retirar 10, ingrese el numero 1, si quiere 50 el numero 2 y si quiere 100, ingrese el 3";
cin>>retiro;
account1.retiro(retiro)
