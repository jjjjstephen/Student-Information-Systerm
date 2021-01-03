#ifndef STUDENTACHIEVEMENT__H
#define STUDENTACHIEVEMENT__H

#include "studentinformation.h"

class StudentAchievement : public StudentInformation
{
private:
    //语文
    float chinese;
    //数学
    float mathematics;
    //英语
    float english;
    //物理（理科生）
    float physics;
    //化学（理科生）
    float chemistry;
    //生物（理科生）
    float biology;
    //历史（文科生）
    float history;
    //地理（文科生）
    float geometry;
    //政治（文科生）
    float politics;

public:
    //获取语文成绩
    float getChineseScore() const { return this->chinese; }
    //获取数学成绩
    float getMathematicsScore() const { return this->mathematics; }
    //获取英语成绩
    float getEnglishScore() const { return this->english; }
    //获取物理成绩
    float getPhysicsScore() const;
    //获取化学成绩
    float getChemistryScore() const;
    //获取生物成绩
    float getBiologyScore() const;
    //获取历史成绩
    float gethistoryScore() const;
    //获取地理成绩
    float getGeometryScore() const;
    //获取政治成绩
    float getPoliticsScore() const;
    //获取文综成绩
    float getLiteratureSynthesisScore() const;
    //获取理综成绩
    float getScienceComprehensiveScore() const;
    //获取总成绩
    float getTotalScore() const;

public:
    //录入语文成绩
    void setChineseScore(const float chinese) { this->chinese = chinese; }
    //录入数学成绩
    void setMathematicsScore(const float mathematics) { this->mathematics = mathematics; }
    //录入英语成绩
    void setEnglishScore(const float english) { this->english = english; }
    //录入物理成绩
    bool setPhysicsScore(const float physics);
    //录入化学成绩
    bool setChemistryScore(const float chemistry);
    //录入生物成绩
    bool setBiologyScore(const float biology);
    //录入历史成绩
    bool sethistoryScore(const float history);
    //录入地理成绩
    bool setGeometryScore(const float geometry);
    //录入政治成绩
    bool setPoliticsScore(const float politics);
};

#endif // !STUDENTACHIEVEMENT__H