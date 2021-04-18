#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QStack>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QSpinBox>
#include <QKeyEvent>
#include <QRadioButton>
#include <QtWidgets>

class Wn : public QWidget
{
    Q_OBJECT

private:
    QLabel* typeScreen = new QLabel;
    QPalette fone;

public:
    Wn(QWidget* parents = nullptr);
public slots:

};



class WnControl : public QWidget
{
    Q_OBJECT

private:

    QLabel* sens = new QLabel;
    QLabel* gus = new QLabel;
    QLabel* cum = new QLabel;
    QLabel* gusControl = new QLabel;
    QLabel* handsControl = new QLabel;
    QLabel* cumControl = new QLabel;
    QLabel* tempScreen = new QLabel;

    QCheckBox* CBw = new QCheckBox;
    QCheckBox* CBa = new QCheckBox;
    QCheckBox* CBs = new QCheckBox;
    QCheckBox* CBd = new QCheckBox;
    QCheckBox* CBt = new QCheckBox;
    QCheckBox* CBf = new QCheckBox;
    QCheckBox* CBg = new QCheckBox;
    QCheckBox* CBh = new QCheckBox;
    QCheckBox* CBi = new QCheckBox;
    QCheckBox* CBj = new QCheckBox;
    QCheckBox* CBk = new QCheckBox;
    QCheckBox* CBl = new QCheckBox;

    QSpinBox* gusSB = new QSpinBox;
    QSpinBox* cumSB = new QSpinBox;

   void keyPressEvent(QKeyEvent* pe);
   void keyReleaseEvent(QKeyEvent* pe);

public:

    WnControl(QWidget* parents = nullptr);
};

class WnAdmin : public QWidget
{
    Q_OBJECT

private:

public:
    WnAdmin(QWidget* parents = nullptr);

};

class WnSetting : public QWidget
{
    Q_OBJECT

private:

public:
    WnSetting(QWidget* parents = nullptr);

};

#endif // WINDOW_H
