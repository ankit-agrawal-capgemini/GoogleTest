/********************************************************************************
** Form generated from reading UI file 'Person.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSON_H
#define UI_PERSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Person
{
public:

    void setupUi(QWidget *Person)
    {
        if (Person->objectName().isEmpty())
            Person->setObjectName(QStringLiteral("Person"));
        Person->resize(400, 300);

        retranslateUi(Person);

        QMetaObject::connectSlotsByName(Person);
    } // setupUi

    void retranslateUi(QWidget *Person)
    {
        Person->setWindowTitle(QApplication::translate("Person", "Person", 0));
    } // retranslateUi

};

namespace Ui {
    class Person: public Ui_Person {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSON_H
