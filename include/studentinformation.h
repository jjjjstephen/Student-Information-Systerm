#ifndef STUDENTINFORMATION__H
#define STUDENTINFORMATION__H

#include <string>
#include "publictool.h"
class StudentInformation
{
private:
    //姓名
    std::string studentName;
    //性别 0：女 1：男
    unsigned int sex;
    //民族
    /*
        汉族:0 蒙古族:1 、回族: 2、苗族: 3、傣族:4 、傈僳族:5、藏族: 6、壮族: 7、朝鲜族: 8、高山族: 9、纳西族: 10、布朗族: 11、
        阿昌族: 12、怒族: 13、鄂温克族: 14、鄂伦春族: 15、赫哲族: 16、门巴族: 17、白族: 18、保安族: 19、布依族: 20、达斡尔族: 21、
        德昂族: 22、东乡族: 23、侗族: 24、独龙族: 25、俄罗斯族: 26 、哈尼族: 27、哈萨克族: 28、基诺族: 29、京族: 30、景颇族: 31、
        柯尔克孜族: 32、拉祜族: 33、黎族: 34、珞巴族: 35、满族: 36、毛南族: 37、仫佬族: 38、普米族: 39、羌族: 40、撒拉族: 41、
        畲族: 42、水族: 43、塔吉克族: 44、塔塔尔族: 45、土家族: 46、仡佬族: 47、土族: 48、佤族: 49、维吾尔族: 50、乌孜别克族: 51、
        锡伯族: 52、瑶族: 53、裕固族: 54、彝族: 55。
    */
    unsigned int nation;
    //年龄
    unsigned int age;
    //年级
    unsigned int grade;
    //文科/理科生
    unsigned int kind;
    //班级
    unsigned int classNumber;
    //学号
    int studentNumber;
    //住校/走读
    unsigned int state;
    //若住校：公寓号
    unsigned int apartmentNumber;
    //若住校：宿舍号
    unsigned int dormitoryNumber;


public:
    //获取学生姓名
    std::string getStudentName() const { return this->studentName; }
    //获取学生性别
    unsigned int getStudentSex() const { return this->sex; }
    //获取学生民族
    unsigned int getStudentNation() const { return this->nation; }
    //获取学生年龄
    unsigned int getStudentAge() const { return this->age; }
    //获取学生年级
    unsigned int getStudentGrade() const { return this->grade; }
    //获取学生文科/理科生
    unsigned int getStudentKind() const { return this->kind; }
    //获取学生班级
    unsigned int getStudentClassNumber() const { return this->classNumber; }
    //获取学生学号
    unsigned int getStudentNUmber() const { return this->studentNumber; }
    //获取学生住校/走读
    unsigned int getStudentState() const { return this->state; }
    //获取学生公寓号
    int getStudentApartmentNumber() const;
    //获取学生宿舍号
    int getStudentDormitoryNumber() const;

public:
    //设置学生姓名
    void setStudentName(const std::string &name) { this->studentName = name; }
    //设置学生性别
    void setStudentSex(const unsigned int sex) { this->sex = sex; }
    //设置学生民族
    void setStudentNation(const unsigned int nation) { this->nation = nation; }
    //设置学生年龄
    void setStudentAge(const unsigned int age) { this->age = age; }
    //设置学生年级
    void setStudentGrade(const unsigned int grade) { this->grade = grade; }
    //设置学生文科/理科生
    void setStudentKind(const unsigned int kind) { this->kind = kind; }
    //设置学生班级
    void setStudentClassNumber(const unsigned int classNumber) { this->classNumber = classNumber; }
    //设置学生学号
    void getStudentNUmber(const int studentNumber) { this->studentNumber = studentNumber; }
    //设置学生住校/走读
    void setStudentState(const unsigned int state) { this->state = state; }
    //设置学生公寓号
    bool setStudentApartmentNumber(unsigned int apartmentNumber);
    //设置学生宿舍号
    bool setStudentDormitoryNumber(unsigned int dormitoryNumber);
};

#endif // !STUDENTINFORMATION__H
