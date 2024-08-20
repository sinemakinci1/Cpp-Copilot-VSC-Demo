#include "user.h"

void User::greet() {
    std::cout << "Hello, " << name << " from " << company << "!" << std::endl;
}

void User::setName(std::string name) {
    this->name = name;
}

void User::setCompany(std::string company) {
    this->company = company;
}

std::string User::getName() {
    return name;
}

std::string User::getCompany() {
    return company;
}

