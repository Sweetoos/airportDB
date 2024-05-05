#pragma once
#include <string>

class Account
{

private:
    std::string login;
    std::string password;

protected:
    bool isWorker;
    std::string firstName;
    std::string lastName;
    std::string email;
    std::string phoneNumber;

public:
    Account();
    void signUP(); // register
    void signIN();
};

void menu(Account &account)
{

    std::cout << "Welcome to our airport!" << std::endl;
    std::cout << "How can we help you" << std::endl;
    int choice;

    while (true)
    {
        std::cout << "Please give me a number what can we do for you" << std::endl;
        std::cout << "1. Sign up" << std::endl;
        std::cout << "2. Sign in" << std::endl;
        std::cout << "3. Check flight" << std::endl;
        // check if this is an int
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            account.signUP();
            break;
        case 2:
            account.signIN();
            break;
        }
    }
}
