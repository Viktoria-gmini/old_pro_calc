/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *iz_chego_vichitat;
    QLineEdit *chto_vichitat;
    QLabel *label_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QTableWidget *itog;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *TABL_V;
    QTableWidget *TABL_S;
    QTableWidget *TABL_O;
    QTableWidget *TABL_A;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *raznitza;
    QPushButton *vichest;
    QPushButton *itogg;
    QPushButton *zapolnit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_13;
    QComboBox *kto_platil;
    QHBoxLayout *horizontalLayout;
    QPushButton *delete_row;
    QGroupBox *groupBox;
    QLabel *label_12;
    QLineEdit *product;
    QLineEdit *summa;
    QLabel *label_11;
    QLabel *label_6;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QCheckBox *vika;
    QCheckBox *sasha;
    QCheckBox *olya;
    QCheckBox *anya;
    QCheckBox *vse;
    QPushButton *V_TABLITZU;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1333, 814);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        iz_chego_vichitat = new QLineEdit(centralwidget);
        iz_chego_vichitat->setObjectName(QString::fromUtf8("iz_chego_vichitat"));
        iz_chego_vichitat->setGeometry(QRect(20, 430, 113, 24));
        chto_vichitat = new QLineEdit(centralwidget);
        chto_vichitat->setObjectName(QString::fromUtf8("chto_vichitat"));
        chto_vichitat->setGeometry(QRect(150, 430, 113, 24));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(290, 410, 121, 16));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(560, 80, 71, 670));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_3->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_3->addWidget(label_9);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_3->addWidget(label_10);

        itog = new QTableWidget(centralwidget);
        itog->setObjectName(QString::fromUtf8("itog"));
        itog->setGeometry(QRect(0, 510, 551, 221));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(640, 80, 670, 670));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        TABL_V = new QTableWidget(layoutWidget1);
        TABL_V->setObjectName(QString::fromUtf8("TABL_V"));

        verticalLayout_2->addWidget(TABL_V);

        TABL_S = new QTableWidget(layoutWidget1);
        TABL_S->setObjectName(QString::fromUtf8("TABL_S"));

        verticalLayout_2->addWidget(TABL_S);

        TABL_O = new QTableWidget(layoutWidget1);
        TABL_O->setObjectName(QString::fromUtf8("TABL_O"));

        verticalLayout_2->addWidget(TABL_O);

        TABL_A = new QTableWidget(layoutWidget1);
        TABL_A->setObjectName(QString::fromUtf8("TABL_A"));

        verticalLayout_2->addWidget(TABL_A);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 380, 391, 16));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 410, 121, 16));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(140, 410, 161, 16));
        raznitza = new QLabel(centralwidget);
        raznitza->setObjectName(QString::fromUtf8("raznitza"));
        raznitza->setGeometry(QRect(294, 430, 91, 20));
        vichest = new QPushButton(centralwidget);
        vichest->setObjectName(QString::fromUtf8("vichest"));
        vichest->setGeometry(QRect(290, 450, 80, 25));
        itogg = new QPushButton(centralwidget);
        itogg->setObjectName(QString::fromUtf8("itogg"));
        itogg->setGeometry(QRect(29, 480, 231, 25));
        zapolnit = new QPushButton(centralwidget);
        zapolnit->setObjectName(QString::fromUtf8("zapolnit"));
        zapolnit->setGeometry(QRect(370, 450, 80, 25));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 10, 471, 341));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font;
        font.setPointSize(11);
        label_13->setFont(font);

        verticalLayout_4->addWidget(label_13);

        kto_platil = new QComboBox(widget);
        kto_platil->addItem(QString());
        kto_platil->addItem(QString());
        kto_platil->addItem(QString());
        kto_platil->addItem(QString());
        kto_platil->setObjectName(QString::fromUtf8("kto_platil"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(18);
        kto_platil->setFont(font1);

        verticalLayout_4->addWidget(kto_platil);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        delete_row = new QPushButton(widget);
        delete_row->setObjectName(QString::fromUtf8("delete_row"));

        horizontalLayout->addWidget(delete_row);


        verticalLayout_4->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_4);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 80, 55, 16));
        product = new QLineEdit(groupBox);
        product->setObjectName(QString::fromUtf8("product"));
        product->setGeometry(QRect(80, 20, 111, 41));
        summa = new QLineEdit(groupBox);
        summa->setObjectName(QString::fromUtf8("summa"));
        summa->setGeometry(QRect(120, 70, 71, 41));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 30, 71, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 250, 55, 16));
        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 120, 71, 111));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        vika = new QCheckBox(groupBox);
        vika->setObjectName(QString::fromUtf8("vika"));
        vika->setGeometry(QRect(100, 120, 83, 22));
        sasha = new QCheckBox(groupBox);
        sasha->setObjectName(QString::fromUtf8("sasha"));
        sasha->setGeometry(QRect(100, 150, 83, 22));
        olya = new QCheckBox(groupBox);
        olya->setObjectName(QString::fromUtf8("olya"));
        olya->setGeometry(QRect(100, 180, 83, 22));
        anya = new QCheckBox(groupBox);
        anya->setObjectName(QString::fromUtf8("anya"));
        anya->setGeometry(QRect(100, 210, 83, 22));
        vse = new QCheckBox(groupBox);
        vse->setObjectName(QString::fromUtf8("vse"));
        vse->setGeometry(QRect(100, 250, 83, 22));
        V_TABLITZU = new QPushButton(groupBox);
        V_TABLITZU->setObjectName(QString::fromUtf8("V_TABLITZU"));
        V_TABLITZU->setGeometry(QRect(40, 290, 121, 25));

        horizontalLayout_2->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1333, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\211\320\265\320\265 \320\276\321\201\321\202\320\260\320\273\321\214\320\275\320\276\320\265", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\272\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\241\320\260\321\210\320\260", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\236\320\273\321\217", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\220\320\275\321\217", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\265\321\201\321\202\321\214 \320\270\320\267 \320\276\320\261\321\211\320\265\320\263\320\276 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\321\221\320\275\320\275\321\213\320\265 \321\201\321\202\321\200\320\276\320\272\320\270 \320\270\320\273\320\270 \320\262\321\201\320\265 \321\201\321\202\321\200\320\276\320\272\320\270", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\211\320\260\321\217 \321\201\321\203\320\274\320\274\320\260 \321\207\320\265\320\272\320\260", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200\320\260 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\276\320\262", nullptr));
        raznitza->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        vichest->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\265\321\201\321\202\321\214", nullptr));
        itogg->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\270\321\202\320\276\320\263", nullptr));
        zapolnit->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\273\320\260\321\202\320\270\320\273\320\260:", nullptr));
        kto_platil->setItemText(0, QCoreApplication::translate("MainWindow", "\320\222\320\230\320\232\320\220", nullptr));
        kto_platil->setItemText(1, QCoreApplication::translate("MainWindow", "\320\241\320\220\320\250\320\220", nullptr));
        kto_platil->setItemText(2, QCoreApplication::translate("MainWindow", "\320\236\320\233\320\257", nullptr));
        kto_platil->setItemText(3, QCoreApplication::translate("MainWindow", "\320\220\320\235\320\257", nullptr));

        delete_row->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\202\320\265\320\272\321\203\321\211\321\203\321\216 \321\201\321\202\321\200\320\276\320\272\321\203 \321\203 \321\215\321\202\320\276\320\271 \320\264\320\265\320\262\320\276\321\207\320\272\320\270", nullptr));
        groupBox->setTitle(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\241\320\243\320\234\320\234\320\220", nullptr));
        product->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\235\320\220\320\227\320\222\320\220\320\235\320\230\320\225", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\211\320\265\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\272\320\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\320\260\321\210\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\236\320\273\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\220\320\275\321\217", nullptr));
        vika->setText(QString());
        sasha->setText(QString());
        olya->setText(QString());
        anya->setText(QString());
        vse->setText(QString());
        V_TABLITZU->setText(QCoreApplication::translate("MainWindow", "\320\232\320\270\320\275\321\203\321\202\321\214 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
