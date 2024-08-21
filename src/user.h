#ifndef USER_H
#define USER_H

#include <iostream>

class User {
    public:
        void greet();

        void setName(std::string name);
        void setCompany(std::string company);

        std::string getName();
        std::string getCompany();
        
    private:
        std::string name;
        std::string company;


};

#endif // USER_H