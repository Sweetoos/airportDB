#include "db.hpp"

void Database::addAccount(const std::shared_ptr<Account> &account)
{
    accounts.push_back(account);
}
