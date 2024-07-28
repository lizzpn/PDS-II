#include "google_password.h"

#include <iostream>
#include <map>

void GooglePassword::insert(const std::string& url, const std::string& login, const std::string& password) {
  if(validPassword(password)){
    Usuario usuario{login, password};
    passwords_.insert(make_pair(url, usuario));
  }
}

void GooglePassword::remove(const std::string& url) {
  if(passwords_.find(url) != passwords_.end()){
    passwords_.erase(url);
  }
}

void GooglePassword::update(const std::string& url, const std::string& login, const std::string& old_password, const std::string& new_password) {
  auto it = passwords_.find(url);
  if(it != passwords_.end()){
    if(it->second.password == old_password){
      it->second.login = login;
      if(validPassword(new_password)){
        it->second.password = new_password;
      }
    }
  }
}

void GooglePassword::printPasswords() {
  std::cout << passwords_.size() << std::endl;
  for(auto& p: passwords_){
    std::cout << p.first + ": " + p.second.login + " and " + p.second.password << std::endl;
  }
}

bool GooglePassword::validPassword(const std::string& password) const {
  if(password.find("123456") != -1 || password.find(" ") != -1){
    return false;
  }
  if(password.size() < 6 || password.size() > 50){
    return false;
  }
  return true;
}

