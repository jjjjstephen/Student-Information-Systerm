#include "studentachievement.h"
#include<iostream>

void test();

int main()
{
    test();
    return 0;
}

void test(){

    StudentAchievement test1;
    std::cout << "请输入学生姓名：";
    std::string name;
    std::cin >> name;
    test1.setStudentName(name);
    std::cout<<test1.getStudentName()<<std::endl;
}