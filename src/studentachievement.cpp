#include "studentachievement.h"

//获取物理成绩
float StudentAchievement::getPhysicsScore() const
{

    if (this->getStudentKind() == LIBERAL)
        return -1;

    return this->physics;
}

//获取化学成绩
float StudentAchievement::getChemistryScore() const
{

    if (this->getStudentKind() == LIBERAL)
        return -1;

    return this->chemistry;
}

//获取生物成绩
float StudentAchievement::getBiologyScore() const
{

    if (this->getStudentKind() == LIBERAL)
        return -1;

    return this->biology;
}

//获取历史成绩
float StudentAchievement::gethistoryScore() const
{

    if (this->getStudentKind() == SCIENCE)
        return -1;

    return this->history;
}

//获取地理成绩
float StudentAchievement::getGeometryScore() const
{

    if (this->getStudentKind() == SCIENCE)
        return -1;

    return this->geometry;
}

//获取政治成绩
float StudentAchievement::getPoliticsScore() const
{

    if (this->getStudentKind() == SCIENCE)
        return -1;

    return this->politics;
}

//获取文综成绩
float StudentAchievement::getLiteratureSynthesisScore() const
{

    if (this->getStudentKind() == SCIENCE)
        return -1;

    return this->gethistoryScore() + this->getGeometryScore() + this->getPoliticsScore();
}

//获取理综成绩
float StudentAchievement::getScienceComprehensiveScore() const
{

    if (this->getStudentKind() == LIBERAL)
        return -1;

    return this->getPhysicsScore() + this->getChemistryScore() + this->getBiologyScore();
}

//获取总成绩
float StudentAchievement::getTotalScore() const
{

    if (this->getStudentKind() == LIBERAL)
        return this->getChineseScore() + this->getMathematicsScore() + this->getEnglishScore() + getScienceComprehensiveScore();
    else
        return this->getChineseScore() + this->getMathematicsScore() + this->getEnglishScore() + getLiteratureSynthesisScore();
}

//录入物理成绩
bool StudentAchievement::setPhysicsScore(const float physics)
{

    if (this->getStudentKind() == LIBERAL)
        return false;

    this->physics = physics;
}

//录入化学成绩
bool StudentAchievement::setChemistryScore(const float chemistry)
{

    if (this->getStudentKind() == LIBERAL)
        return false;

    this->chemistry = chemistry;
}

//录入生物成绩
bool StudentAchievement::setBiologyScore(const float biology)
{

    if (this->getStudentKind() == LIBERAL)
        return false;

    this->biology = biology;
}

//录入历史成绩
bool StudentAchievement::sethistoryScore(const float history)
{

    if (this->getStudentKind() == SCIENCE)
        return false;

    this->history = history;
}

//录入地理成绩
bool StudentAchievement::setGeometryScore(const float geometry)
{

    if (this->getStudentKind() == SCIENCE)
        return false;

    this->geometry = geometry;
}

//录入政治成绩
bool StudentAchievement::setPoliticsScore(const float politics){

    if (this->getStudentKind() == SCIENCE)
        return false;
    
    this->politics = politics;
}