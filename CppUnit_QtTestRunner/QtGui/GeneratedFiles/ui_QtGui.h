/********************************************************************************
** Form generated from reading UI file 'QtGui.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUI_H
#define UI_QTGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_QtGuiClass
{
public:

    void setupUi(QDialog *QtGuiClass)
    {
        if (QtGuiClass->objectName().isEmpty())
            QtGuiClass->setObjectName(QStringLiteral("QtGuiClass"));
        QtGuiClass->resize(600, 400);

        retranslateUi(QtGuiClass);

        QMetaObject::connectSlotsByName(QtGuiClass);
    } // setupUi

    void retranslateUi(QDialog *QtGuiClass)
    {
        QtGuiClass->setWindowTitle(QApplication::translate("QtGuiClass", "QtGui", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiClass: public Ui_QtGuiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUI_H
