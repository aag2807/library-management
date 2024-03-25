#include "User.h"
#include "../../lib/Triplex/Argument.h"
#include "../../lib/Triplex/State.h"

User User::CreateUser(const std::string &userName, const std::string &password, const std::string &email)
{
    auto user = User();
    user.UserName = userName;
    user.Password = password;
    user.Email = email;

    return user;
}

void User::deleteUser()
{
    this->Status = UserStatus::Deleted;
}

void User::activateUser()
{
    this->Status = UserStatus::Active;
}

void User::deactivateUser()
{
    this->Status = UserStatus::Inactive;
}

void User::updateLastLoginDate()
{
    this->LastLoginDate = time(nullptr);
}

void User::updatePassword(const std::string &newPassword)
{
    State::IsTrue(Status == UserStatus::Active, "User must be active to update password");
    State::IsFalse(Password != newPassword, "New password must be different from the current password");
    Argument::GreatherThan(newPassword, 6, "Password must be at least 6 characters long");
    Argument::MatchesRegex(newPassword, "^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d).+$", "Password must contain at least one uppercase letter, one lowercase letter and one number");

    this->Password = newPassword;
    this->UpdatedAt = time(nullptr);
}
