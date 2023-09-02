#include <iostream>

using std::string;

class Employee {
  public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself() {
      std::cout << "Name - " << Name << std::endl;
      std::cout << "Company - " << Company << std::endl;
      std::cout << "Age - " << Age << std::endl;
    }

    Employee(string name, string company, int age) {
      Name = name;
      Company = company;
      Age = age;
    }
};

int main() {
  Employee employee("Andres dos Santos", "Zaal Tecnologia", 22);
  Employee another_employee("John Doe", "Market", 29);
  
  employee.IntroduceYourself();
  another_employee.IntroduceYourself();

  return 0;
}
