#include "Person.h"
#include "ui_Person.h"

using namespace std;

//Person::Person(QWidget *parent) :
//    QWidget(parent),
//    ui(new Ui::Person)

 Person::Person()
{
   // ui->setupUi(this);
}

Person::~Person()
{
    //delete ui;
}


void Person::setName(QString name){
    this->Name = name;
}

QString Person::getName(){
    return this->Name;
}

void Person::setAge(int age){
    this->Age = age;
}

int Person::getAge(){
    return this->Age;
}
