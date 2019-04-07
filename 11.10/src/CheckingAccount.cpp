#include <iostream>
#include "Account.h"
#include "CheckingAccount.h"

CheckingAccount::CheckingAccount( double cinmoney, double fee )
   : Account( cinmoney )
{
   transactionFee = ( fee < 0.0 ) ? 0.0 : fee;
}


void CheckingAccount::credit( double addmoney )
{
   Account::credit( addmoney );
   chargeFee();
}

bool CheckingAccount::debit( double cutmoney )
{
   bool success = Account::debit( cutmoney );

   if ( success )
   {
      chargeFee();
      return true;
   }
   else
      return false;
}


void CheckingAccount::chargeFee()
{
   Account::setBlance( getBlance() - transactionFee);
   cout << "$" << transactionFee << " transaction fee charged." << endl;
}
