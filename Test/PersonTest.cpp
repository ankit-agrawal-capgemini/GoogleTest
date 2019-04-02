// Tests file: person-test.cpp
#include "Person.h"
#include "gtest/gtest.h"
#include "string"
#include <QDebug>

//#include <gmock/gmock-matchers.h>

using std::string;

using namespace testing;

//class PersonTest : public Test
//{
//
//};

TEST(Person, testNameMethods)
{
    QString name = "Testing";

    Person *person = new Person();

    person->setName(name);
    EXPECT_EQ(person->getName(), name);
}

TEST(Person, testAgeMethods)
{
    int age = 24;

    Person *person = new Person();

    person->setAge(age);
    EXPECT_EQ(person->getAge(), age);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}