#include "studentinformation.h"

//获取学生公寓号
int StudentInformation::getStudentApartmentNumber() const
{

    //若学生为走读，返回-1,表示错误
    if (this->state == HOME)
        return -1;

    return this->apartmentNumber;
}

//获取学生宿舍号
int StudentInformation::getStudentDormitoryNumber() const
{

    //若学生为走读，返回-1,表示错误
    if (this->state == HOME)
        return -1;

    return this->dormitoryNumber;
}

//设置学生公寓号
bool StudentInformation::setStudentApartmentNumber(unsigned int apartmentNumber)
{
    if (this->state == HOME)
        return false;

    this->apartmentNumber = apartmentNumber;
    return true;
}

//设置学生宿舍号
bool StudentInformation::setStudentDormitoryNumber(unsigned int dormitoryNumber)
{
    if (this->state == HOME)
        return false;

    this->dormitoryNumber = dormitoryNumber;
    return true;
}
