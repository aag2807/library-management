#ifndef USER_H
#define USER_H
#include <string>
#include <ctime>

enum UserStatus
{
    Active,
    Inactive,
    Deleted
};

class User
{
public:
    UserStatus Status = Inactive;
    std::string Id;
    std::string UserName;
    std::string Password;
    std::string Email;
    time_t CreatedAt = time(nullptr);
    time_t UpdatedAt = time(nullptr);
    time_t LastLoginDate = time(nullptr);
    time_t DeletedAt = time(nullptr);

    static User CreateUser(const std::string &userName, const std::string &password, const std::string &email);

    void deleteUser();
    void activateUser();
    void deactivateUser();

    void updateLastLoginDate();
    void updatePassword(const std::string &newPassword);

private:


};


#endif
