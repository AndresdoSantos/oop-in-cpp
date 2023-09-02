#include <iostream>

using std::string;

class Employee {
  private:
    string Name;
    string Company;
    int Age;

  public:
    void setName(string name) {
      Name = name;
    };

    string getName() {
      return Name;
    };

    void setCompany(string company) {
      Company = company;
    };

    string getCompany() {
      return Company;
    };

    void setAge(int age) {
      if (age >= 18) Age = age;
    };

    int getAge() {
      return Age;
    };

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
  Employee employee("Andres dos Santos", "Zaal Tecnologia", 16);

  employee.setAge(15);
  employee.setName("Andres dos Santos");
  employee.setCompany("Epic Games");
  
  // employee.IntroduceYourself();

  std::cout << employee.getName() << " is " << employee.getAge() << " years.";

  return 0;
}
