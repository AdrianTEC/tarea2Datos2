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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *quitar;
    QListWidget *CONSOLE;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *servidor;
    QPushButton *conectar;
    QFrame *line_2;
    QLabel *label_11;
    QFrame *line_3;
    QFrame *line_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *anadir;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpinBox *newnodo;
    QVBoxLayout *verticalLayout_5;
    QPushButton *Enlazar;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QSpinBox *inicioe;
    QLabel *label_8;
    QSpinBox *finale;
    QLabel *label_20;
    QSpinBox *value;
    QVBoxLayout *verticalLayout_2;
    QPushButton *calcular;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *inicioC;
    QLabel *label_4;
    QSpinBox *finalC;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_13;
    QGroupBox *canva;
    QLineEdit *nombre;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(856, 662);
        quitar = new QPushButton(Widget);
        quitar->setObjectName(QString::fromUtf8("quitar"));
        quitar->setGeometry(QRect(730, 620, 89, 21));
        CONSOLE = new QListWidget(Widget);
        CONSOLE->setObjectName(QString::fromUtf8("CONSOLE"));
        CONSOLE->setGeometry(QRect(500, 10, 251, 61));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 6, 271, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        servidor = new QLineEdit(layoutWidget);
        servidor->setObjectName(QString::fromUtf8("servidor"));

        horizontalLayout->addWidget(servidor);

        conectar = new QPushButton(layoutWidget);
        conectar->setObjectName(QString::fromUtf8("conectar"));

        horizontalLayout->addWidget(conectar);

        line_2 = new QFrame(Widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(-10, 420, 841, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_11 = new QLabel(Widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(410, 20, 211, 20));
        line_3 = new QFrame(Widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(-10, 80, 811, 21));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(Widget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(0, 590, 841, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 470, 731, 120));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        anadir = new QPushButton(layoutWidget1);
        anadir->setObjectName(QString::fromUtf8("anadir"));

        verticalLayout_3->addWidget(anadir);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        newnodo = new QSpinBox(layoutWidget1);
        newnodo->setObjectName(QString::fromUtf8("newnodo"));

        horizontalLayout_4->addWidget(newnodo);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        Enlazar = new QPushButton(layoutWidget1);
        Enlazar->setObjectName(QString::fromUtf8("Enlazar"));

        verticalLayout_5->addWidget(Enlazar);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_6->addWidget(label_9);

        inicioe = new QSpinBox(layoutWidget1);
        inicioe->setObjectName(QString::fromUtf8("inicioe"));

        horizontalLayout_6->addWidget(inicioe);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);

        finale = new QSpinBox(layoutWidget1);
        finale->setObjectName(QString::fromUtf8("finale"));

        horizontalLayout_6->addWidget(finale);

        label_20 = new QLabel(layoutWidget1);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_6->addWidget(label_20);

        value = new QSpinBox(layoutWidget1);
        value->setObjectName(QString::fromUtf8("value"));

        horizontalLayout_6->addWidget(value);


        verticalLayout_6->addLayout(horizontalLayout_6);


        verticalLayout_5->addLayout(verticalLayout_6);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        calcular = new QPushButton(layoutWidget1);
        calcular->setObjectName(QString::fromUtf8("calcular"));

        verticalLayout_2->addWidget(calcular);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        inicioC = new QSpinBox(layoutWidget1);
        inicioC->setObjectName(QString::fromUtf8("inicioC"));

        horizontalLayout_3->addWidget(inicioC);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        finalC = new QSpinBox(layoutWidget1);
        finalC->setObjectName(QString::fromUtf8("finalC"));

        horizontalLayout_3->addWidget(finalC);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);

        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 440, 151, 22));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_7->addWidget(label_12);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        layoutWidget3 = new QWidget(Widget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(390, 440, 381, 19));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_8->addWidget(label_10);

        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        label_13 = new QLabel(Widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(180, 440, 115, 20));
        canva = new QGroupBox(Widget);
        canva->setObjectName(QString::fromUtf8("canva"));
        canva->setGeometry(QRect(0, 80, 841, 331));
        nombre = new QLineEdit(Widget);
        nombre->setObjectName(QString::fromUtf8("nombre"));
        nombre->setGeometry(QRect(84, 57, 119, 25));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 58, 39));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 60, 89, 25));
        layoutWidget3->raise();
        layoutWidget3->raise();
        layoutWidget3->raise();
        quitar->raise();
        CONSOLE->raise();
        layoutWidget3->raise();
        line_2->raise();
        label_11->raise();
        line_3->raise();
        line_4->raise();
        label_13->raise();
        canva->raise();
        nombre->raise();
        label_2->raise();
        pushButton->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        quitar->setText(QCoreApplication::translate("Widget", "Quitar", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Servidor", nullptr));
        conectar->setText(QCoreApplication::translate("Widget", "Conectar", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "Consola", nullptr));
        anadir->setText(QCoreApplication::translate("Widget", "A\303\261adir", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "valor", nullptr));
        Enlazar->setText(QCoreApplication::translate("Widget", "Enlazar", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "inicio", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "final", nullptr));
        label_20->setText(QCoreApplication::translate("Widget", "valor", nullptr));
        calcular->setText(QCoreApplication::translate("Widget", "Calcular", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "inicio", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "final", nullptr));
        label_12->setText(QCoreApplication::translate("Widget", "A\303\261adir un nodo", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "Conectar dos nodos", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "C\303\241lculo m\303\241s cercano", nullptr));
        label_13->setText(QCoreApplication::translate("Widget", "Eliminar un nodo", nullptr));
        canva->setTitle(QString());
        nombre->setText(QString());
        label_2->setText(QCoreApplication::translate("Widget", "Nombre", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Confirmar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
