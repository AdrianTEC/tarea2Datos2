/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *iniciar;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *servidor;
    QListWidget *CONSOLE;
    QLabel *label_3;
    QPushButton *quitar;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *msj;
    QPushButton *enviar;
    QLineEdit *user;
    QLabel *label_4;
    QPushButton *escu;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(622, 463);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(180, 310, 254, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        iniciar = new QPushButton(layoutWidget);
        iniciar->setObjectName(QString::fromUtf8("iniciar"));

        horizontalLayout_2->addWidget(iniciar);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 241, 27));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        servidor = new QLineEdit(layoutWidget1);
        servidor->setObjectName(QString::fromUtf8("servidor"));

        horizontalLayout_3->addWidget(servidor);

        CONSOLE = new QListWidget(Widget);
        CONSOLE->setObjectName(QString::fromUtf8("CONSOLE"));
        CONSOLE->setGeometry(QRect(20, 80, 571, 201));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 50, 151, 25));
        quitar = new QPushButton(Widget);
        quitar->setObjectName(QString::fromUtf8("quitar"));
        quitar->setGeometry(QRect(250, 360, 123, 25));
        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(260, 10, 339, 27));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        msj = new QLineEdit(layoutWidget2);
        msj->setObjectName(QString::fromUtf8("msj"));

        horizontalLayout_4->addWidget(msj);

        enviar = new QPushButton(layoutWidget2);
        enviar->setObjectName(QString::fromUtf8("enviar"));

        horizontalLayout_4->addWidget(enviar);

        user = new QLineEdit(Widget);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(293, 410, 106, 25));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 410, 127, 25));
        escu = new QPushButton(Widget);
        escu->setObjectName(QString::fromUtf8("escu"));
        escu->setGeometry(QRect(410, 410, 123, 25));
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        CONSOLE->raise();
        label_3->raise();
        quitar->raise();
        user->raise();
        label_4->raise();
        escu->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        iniciar->setText(QCoreApplication::translate("Widget", "Iniciar Servidor", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Nombre del server", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Consola De Mensajes", nullptr));
        quitar->setText(QCoreApplication::translate("Widget", "Quitar", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Enviar Mensaje", nullptr));
        enviar->setText(QCoreApplication::translate("Widget", "Enviar", nullptr));
        user->setText(QCoreApplication::translate("Widget", "user321", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Usuario", nullptr));
        escu->setText(QCoreApplication::translate("Widget", "Escuchar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
