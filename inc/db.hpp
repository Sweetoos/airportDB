#pragma once
#include <memory>
#include <vector>
#include "account.hpp"

class Database
{
private:
    std::vector<std::shared_ptr<Account>> accounts;

public:
    void addAccount(const std::shared_ptr<Account> &account);
    void removeAccount(const std::shared_ptr<Account> &account);
    void editAccount(const std::shared_ptr<Account> &account);  
};