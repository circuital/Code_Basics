#include <iostream>
#include <string>
#include <vector>

// 1
/*int main() {
  std::string temp;
  std::string result;
  for (int i = 0; i < 3; i++) {
    std::cout << "Enter a string: ";
    std::getline(std::cin, temp);
    result += temp;
  }
  std::cout << result << std::endl;
}*/

// 2
/*int main() {
  std::string s = "Hello, world!";
  int i = 0;
  for (char c : s) {
    if (c == 'w') {
      std::cout << i << std::endl;
    }
    i++;
  }
}*/

// 3 herhfoeirhid
/*
int main() {
  std::string s = "I am a C# hacker.";
  int a_index;
  int C_index;
  for (int i = 0; i < s.size(); i++){
    if(s[i] == 'a'){
      a_index = i;
    }
    else if(s[i] == 'C'){
      C_index = i;
    }
    if(s[i] == ' ' || i == s.size() - 1){
      std::cout << std::endl;
    }
    else
      std::cout << s[i];
  }
  std::cout << "Last a index: " << a_index << std::endl;
  std::cout << "C index: " << C_index << std::endl;
}*/

// 4
/*int main() {
  std::string s = "kurt andersson";
  for (int i = 0; i < s.size(); i++) {
    if(i == 0 || s[i-1] == ' '){
      s[i] = toupper(s[i]);
    }
  }
  std::cout << s << std::endl;
}*/

// 5
/*int main(){
  std::string s = "Detta är en sträng som du skall ändra";
  int count = 0;
  for(char &c : s){
    if(c == ' '){
      c = '*';
      count++;
    }
  }
  std::cout << "Number of *: " << count << std::endl;
  std::cout << s << std::endl;
}*/

// 6
/*int main(){
  std::string string = "ett,två,tre,fyra,fem,sex,sju";
  std::string word;
  std::vector<std::string> v;
  for(char i : string){
    if(i != ','){
      word += i;
    }
    else{
      v.push_back(word);
      word = "";
    }
  }
  for(const std::string& s : v){
    std::cout << s << std::endl;
  }
}*/

// 7
/*int main() {
  std::string email = "bla@gmail.com";
  std::cout << "Enter you e-mail address: ";
  std::cin >> email;
  bool correct = false;
  for (char c : email) {
    if (c == '@') {
      if (email.substr(email.find('.') + 1).size() == 2 ||
email.substr(email.find('.') + 1).size() == 3) { correct = true;
      }
    }
  }
  if(correct){
    std::cout << "Valid address!" << std::endl;
  }
  else{
    std::cout << "Invalid address!" << std::endl;
  }
}*/

// 8
/*int main() {
  std::string s;
  std::cout << "Enter a string: ";
  std::getline(std::cin, s);
  int count = 0;
  for (char c : s) {
    if (c == ' ') {
      count++;
    }
  }
  std::cout << "Number of words in sentence: " << count + 1 << std::endl;
}*/

// 9
/*int main() {
  std::string s;
  std::cout << "Enter a word or sentence: ";
  std::getline(std::cin, s);
  s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
  bool isPalindrome = true;
  for(int i = 0; i < s.size() / 2; i++){
    if(s[i] != s[s.size()-1-i]){
      isPalindrome = false;
    }
  }
  if (isPalindrome) {
    std::cout << "Palindrom!" << std::endl;
  } else {
    std::cout << "Not a palindrom!" << std::endl;
  }
}*/
