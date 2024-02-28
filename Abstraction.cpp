#include <iostream>

using std::string;

class AbstractEmployee{
  virtual void AskforPromotion()=0;
};

class Employee:AbstractEmployee{
  private:

  string Name;
  string Company;
  int Age;

  public:

  void setName(string name) {//Setter
    Name = name;
  }
  string getName() {//Getter
    return Name;
  }
   void setCompany(string company) {
    Company = company;
  }
  string getCompany() {
    return Company;
  }
   void setAge(int age) {
    if(age>=18)
    Age = age;
  }
  int getAge() {
    return Age;
  }

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
   void AskforPromotion(){
    if (Age > 30)
      std::cout << Name << " got promoted! " <<std::endl;
    else
      std::cout << Name << " , Sorry No Promotion! " <<std::endl;
  }
};

int main(){
  Employee employee1 = Employee("Daniel Kwasi Kpeglo", "DannytechandConsultancy", 38);
  Employee employee2 = Employee("Diana Yayra Abusah", "Dchic Group", 24);
  
  employee1.AskforPromotion();
  employee2.AskforPromotion();
 
}