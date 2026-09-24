#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

class Employee {
protected:
    int employeeId;
    string name;
public:
    Employee(int id, string employeeName) : employeeId(id), name(move(employeeName)) {}
    virtual double calculateSalary() const = 0;
    void displayBasicDetails() const {
        cout << "ID: " << employeeId << " | Name: " << name;
    }
    virtual ~Employee() = default;
};

class PermanentEmployee : public Employee {
private:
    double basicSalary, allowance;
public:
    PermanentEmployee(int id, string name, double basic, double extra)
        : Employee(id, name), basicSalary(basic), allowance(extra) {}
    double calculateSalary() const override { return basicSalary + allowance; }
};

class FreelanceEmployee : public Employee {
private:
    int projectsCompleted;
    double payPerProject;
public:
    FreelanceEmployee(int id, string name, int projects, double rate)
        : Employee(id, name), projectsCompleted(projects), payPerProject(rate) {}
    double calculateSalary() const override { return projectsCompleted * payPerProject; }
};

int main() {
    vector<unique_ptr<Employee>> staff;
    staff.push_back(make_unique<PermanentEmployee>(101, "Asha", 40000, 8000));
    staff.push_back(make_unique<FreelanceEmployee>(102, "Rohan", 3, 12000));

    double totalPayroll = 0.0;
    for (const auto& emp : staff) {
        emp->displayBasicDetails();
        double sal = emp->calculateSalary();
        cout << " | Salary: Rs. " << sal << '\n';
        totalPayroll += sal;
    }
    cout << "Total Payroll Amount: Rs. " << totalPayroll << '\n';
    return 0;
}
