#include <iostream>
#include <thread>
#include <mutex>

int account_balance = 0;
std::mutex bank_balance;

void depositMoney(int amount)
{
    std::lock_guard<std::mutex> guard(bank_balance);
    account_balance += amount;
    std::cout << "Added " << amount << " Total Balance Is:" << account_balance << std::endl;
}
int main()
{
    std::thread mikey(depositMoney, 500);
    std::thread draken(depositMoney, 1000);
    std::thread takemichhi(depositMoney, 1500);
    mikey.join();
    draken.join();
    takemichhi.join();
    return 0;
}