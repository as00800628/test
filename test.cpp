#include <iostream>

using namespace std;

int main(){
    int sldf = 10;
    cout << sldf;
    cout << sldf;
    cout << sldf;
    cout << sldf;
}


#pragma once

#include <boost/optional.hpp>
#include <stdexcept>
#include <regex>
class Member {
    public:
    Member() = default;
    virtual ~Member() = default;

    private:
    std::string name;
    int64_t age;
    std::string secret_identity;
    std::vector<std::string> powers;

    public:
    const std::string & get_name() const { return name; }
    std::string & get_mutable_name() { return name; }
    void set_name(const std::string& value) { this->name = value; }

    const int64_t & get_age() const { return age; }
    int64_t & get_mutable_age() { return age; }
    void set_age(const int64_t& value) { this->age = value; }

    const std::string & get_secret_identity() const { return secret_identity; }
    std::string & get_mutable_secret_identity() { return secret_identity; }
    void set_secret_identity(const std::string& value) { this->secret_identity = value; }

    const std::vector<std::string> & get_powers() const { return powers; }
    std::vector<std::string> & get_mutable_powers() { return powers; }
    void set_powers(const std::vector<std::string>& value) { this->powers = value; }
};

class MyJson {
    public:
    MyJson() = default;
    virtual ~MyJson() = default;

    private:
    std::string squad_name;
    std::string home_town;
    int64_t formed;
    std::string secret_base;
    bool active;
    std::vector<Member> members;

    public:
    const std::string & get_squad_name() const { return squad_name; }
    std::string & get_mutable_squad_name() { return squad_name; }
    void set_squad_name(const std::string& value) { this->squad_name = value; }

    const std::string & get_home_town() const { return home_town; }
    std::string & get_mutable_home_town() { return home_town; }
    void set_home_town(const std::string& value) { this->home_town = value; }

    const int64_t & get_formed() const { return formed; }
    int64_t & get_mutable_formed() { return formed; }
    void set_formed(const int64_t& value) { this->formed = value; }

    const std::string & get_secret_base() const { return secret_base; }
    std::string & get_mutable_secret_base() { return secret_base; }
    void set_secret_base(const std::string& value) { this->secret_base = value; }

    const bool & get_active() const { return active; }
    bool & get_mutable_active() { return active; }
    void set_active(const bool& value) { this->active = value; }

    const std::vector<Member> & get_members() const { return members; }
    std::vector<Member> & get_mutable_members() { return members; }
    void set_members(const std::vector<Member>& value) { this->members = value; }
};
