#include <iostream>
#include <string>


struct Person
{
    Person()
    {
        std::cout << "Person::ctor" << std::endl;
        name = "DefaultName";
    }

    std::string name{};

    ~Person()
    {
        std::cout << "Person::dtor" << std::endl;
    }
};

struct Student : virtual public Person
{
    Student()
    {
        std::cout << "Student::ctor" << std::endl;
        score = 2.0;
    }

    ~Student()
    {
        std::cout << "Student::dtor" << std::endl;
    }

    int score{};
};

struct Teacher : virtual public Person
{
    Teacher()
    {
        std::cout << "Teacher::ctor" << std::endl;
    }

    ~Teacher()
    {
        std::cout << "Teacher::dtor" << std::endl;
    }
};

struct TA : Teacher, Student
{
    TA()
    {
        std::cout << "TA::ctor" << std::endl;
    }
    ~TA()
    {
        std::cout << "TA::dtor" << std::endl;
    }
};


int main()
{
    TA ta;
    int res{};
    res = ta.score;
    std::cout << res << std::endl;
    ta.score = 5.0;
    res = ta.score;
    std::cout << res << std::endl;
    std::string name{};
    name = ta.name;
    std::cout << name << std::endl;
    ta.name = "Da Sha";
    name = ta.name;
    std::cout << name << std::endl;

    return 0;
}