#include "User.h"

User::User(string name, string password)
{
    setUserName(name);
    setPassword(password);
}

void User::setUserName(string name)
{
    while (bool digits = any_of(name.begin(), name.end(), ::isdigit)) {
        
        cout << "Username should not contain numbers. Please try again." << endl;
        cin >> name;
        cout << endl;
    }
    m_userName = name;
    cout << endl;
}

void User::setPassword(string password)
{
    if (password.length() > 4 && password.length() < 20) {
        m_password = password;
    }
    else
    {
        while (!(password.length() > 4 && password.length() < 20)) {
            cout << "Invalid password. Please try again." << endl;
            cin >> password;
        }
        m_password = password;
        cout << endl;
    }
}

string User::getUserName()
{
    return m_userName;
}

string User::getPassword()
{
    return m_password;
}
