#ifndef PERSON_H
#define PERSON_H

//#include <QWidget>
#include <QString>

namespace Ui {
class Person;
}

class Person// : public QWidget
{
    //Q_OBJECT

public:
    //explicit Person(QWidget *parent = 0);
    Person();
    ~Person();

   void setName(QString name);
   QString getName();
   void setAge(int age);
   int getAge();

private:
    //Ui::Person *ui;
    QString Name;
    int Age;
};

#endif // PERSON_H
