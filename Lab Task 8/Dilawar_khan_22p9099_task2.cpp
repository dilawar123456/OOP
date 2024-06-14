#include <iostream>
using namespace std;
class Employee
{
  string employee_name;
  double employee_salary;
  public:
  void setName(string employee_name)
  {
    this->employee_name=employee_name;
  }
  void setSalary(double employee_salary)
  {
    this->employee_salary=employee_salary;
  }
  string getName()
  {
    return employee_name;
  }
  double getSalary()
  {
    return employee_salary;
  }
  Employee()
  {
    employee_name="";
    employee_salary=0;
  }
  Employee(string name,double salary)
  {
    employee_name=name;
    employee_salary=salary;
  }
  double calc_Salary()
  {

  }

};
class Hourly_Employee:public Employee
{
    double hourly_rate;
    int hours_worked;
    public:
    void setHourlyRate(double hourly_rate)
    {
        this->hourly_rate=hourly_rate;
    }
    void setHoursWorked(int hours_worked)
    {
        this->hours_worked=hours_worked;
    }
    double getHourlyRate()
    {
        return hourly_rate;
    }
    int getHoursWorked()
    {
        return hours_worked;
    }
    Hourly_Employee(string name="",double salary=0, double hourly_rate=0, int hours_worked=0 ):Employee(name,salary)
    {
      this->hourly_rate=hourly_rate;
      this->hours_worked=hours_worked;
    }
   double  calc_Salary()
    {
      double salary=hours_worked*hourly_rate;
      setSalary(salary);

    }

};
class Salaried_Employee:public Employee
{
  double AnnualSalary;
  public:
  void setAnnualSalary(double AnnualSalary)
  {
    this->AnnualSalary=AnnualSalary;
  }
  double getAnnualSalary()
  {
    return AnnualSalary;
  }
  Salaried_Employee(string name="",double salary=0,double AnnualSalary=0):Employee(name,salary)
  {
    this->AnnualSalary=AnnualSalary;
  }
  double calc_Salary()
  {
    double salary=AnnualSalary/12;
    setSalary(salary);
  }


};
int main()
{
  int x;
  double AnnualSalary;
  string name;
  double hourly_rate;
  int hours_worked;
  cout<<"Please select the employee type "<<endl;
  cout<<"1- Hourly Employee"<<endl;
  cout<<"2- Salaried Employee "<<endl;
  cin>>x;
  if (x==1)
  {
    Hourly_Employee e1;

    cout<<"Enter Hourly Employee name "<<endl;
    getline(cin>>ws,name);
    cout<<"Enter Hourly Rate "<<endl;
    cin>>hourly_rate;
    cout<<"Enter the number of hours worked "<<endl;
    cin>>hours_worked;
    e1.setName(name);
    e1.setHourlyRate(hourly_rate);
    e1.setHoursWorked(hours_worked);
    e1.calc_Salary();
    cout<<"-------------------------------------"<<endl;
    cout<<" HOURLY EMPLOYEE DETAILS :-"<<endl;
    cout<<"Name : "<<e1.getName()<<endl;
    cout<<"Hourly Rate : $ "<<e1.getHourlyRate()<<endl;
    cout<<"Hours Worked "<<e1.getHoursWorked()<<endl;
    cout<<"Hourly Employee Salary : $ "<<e1.getSalary()<<endl;

  }
  else if (x==2)
  {
    Salaried_Employee e2;
    cout<<"Enter Salaried Employee name"<<endl;
    getline(cin>>ws,name);
    cout<<"Enter Annual Salary "<<endl;
    cin>>AnnualSalary;
    e2.setName(name);
    e2.setAnnualSalary(AnnualSalary);
    e2.calc_Salary();
    cout<<"----------------------------"<<endl;
    cout<<"SALARIED EMPLOYEE DETAILS "<<endl;
    cout<<"Name : "<<e2.getName()<<endl;
    cout<<"Annual Salary : $ "<<e2.getAnnualSalary()<<endl;
    cout<<"Salaried Employee Salary : $ "<<e2.getSalary()<<endl;
    
  }
  else
  {
    cout<<"Invalid Input "<<endl;
  }


  return 0;
}