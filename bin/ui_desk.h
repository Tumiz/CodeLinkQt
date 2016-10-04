/********************************************************************************
** Form generated from reading UI file 'desk.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESK_H
#define UI_DESK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Desk
{
public:

    void setupUi(QWidget *Desk)
    {
        if (Desk->objectName().isEmpty())
            Desk->setObjectName(QStringLiteral("Desk"));
        Desk->resize(400, 300);

        retranslateUi(Desk);

        QMetaObject::connectSlotsByName(Desk);
    } // setupUi

    void retranslateUi(QWidget *Desk)
    {
        Desk->setWindowTitle(QApplication::translate("Desk", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Desk: public Ui_Desk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESK_H
