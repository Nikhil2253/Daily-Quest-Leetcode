class Bank {
private:
    vector<long long> accounts_balance;
    int totalAccounts = 0;

public:
    Bank(vector<long long>& balance) {
        this->accounts_balance = balance;
        this->totalAccounts = balance.size();
    }

    bool transfer(int account1, int account2, long long money) {
        if(account1-1 >= 0 && account1-1 < totalAccounts &&
           account2-1 >= 0 && account2-1 < totalAccounts) {
            if(this->accounts_balance[account1-1] >= money) {
                this->accounts_balance[account1-1] -= money;
                this->accounts_balance[account2-1] += money;
                return true;
            }
            return false;
        }
        return false;
    }

    bool deposit(int account, long long money) {
        if(account-1 >= 0 && account-1 < totalAccounts) {
            this->accounts_balance[account-1] += money;
            return true;
        }
        return false;
    }

    bool withdraw(int account, long long money) {
        if(account-1 >= 0 && account-1 < totalAccounts) {
            if(this->accounts_balance[account-1] >= money) {
                this->accounts_balance[account-1] -= money;
                return true;
            }
            return false;
        }
        return false;
    }
};
