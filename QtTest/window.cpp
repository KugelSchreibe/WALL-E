#include "window.h"

Wn::Wn(QWidget* parents/*=0*/) : QWidget(parents)
{
    fone.setBrush(this->backgroundRole(), QBrush(QPixmap("D:\\picture\\600600uncolored_wall-e.jpg")));
    setPalette(fone);
    setAutoFillBackground(true);

    QGridLayout* ptopLayout = new QGridLayout;
    ptopLayout->addWidget(typeScreen, 0, 0, 3, 4);


    setLayout(ptopLayout);
}

WnControl::WnControl(QWidget* parent) : QWidget(parent)
{
    setFixedSize(600, 600);

    cumSB->setMaximum(3);
    cumSB->setMinimum(1);

    gusSB->setMinimum(1);
    gusSB->setMaximum(3);

    QGridLayout* mainLayout = new QGridLayout;


    gusControl->setText("Управление гусеницами:\n              W A S D");
    handsControl->setText("Управление руками:\n             T F G H");
    cumControl->setText("Управление камеров:\n              I J K L");

    QPushButton* pI = new QPushButton;
    QPushButton* pJ = new QPushButton;
    QPushButton* pK = new QPushButton;
    QPushButton* pL = new QPushButton;

    //tempScreen->setPixmap(QPixmap("D:\\picture\\wallpapersden.com_forest-mountain-artistic_2932x2932.jpg"));

    tempScreen->setFrameStyle(QFrame::Panel);

    pI->setText("I");
    pJ->setText("J");
    pK->setText("K");
    pL->setText("L");

    sens->setText("Чуствительность");
    cum->setText("Камера");
    gus->setText("Гусеницы");

    QRadioButton* autoButton = new QRadioButton("Авторежим");
    QRadioButton* notAutoButton = new QRadioButton("Ручной режим");

    notAutoButton->setChecked(true);

    mainLayout->addWidget(autoButton, 1, 11, 1, 2);
    mainLayout->addWidget(notAutoButton, 2, 11, 1, 2);
    mainLayout->addWidget(sens, 1, 1, 1, 2, Qt::AlignCenter);
    mainLayout->addWidget(cum, 3, 0, Qt::AlignCenter);
    mainLayout->addWidget(gus, 2, 0, Qt::AlignCenter);
    mainLayout->addWidget(tempScreen, 0, 4, 4, 6);
    mainLayout->addWidget(gusSB, 2, 1, 1, 2, Qt::AlignCenter);
    mainLayout->addWidget(cumSB, 3, 1, 1, 2, Qt::AlignCenter);
    mainLayout->addWidget(gusControl, 4, 1, 3, 3, Qt::AlignCenter);
    mainLayout->addWidget(handsControl, 4, 5, 3, 3, Qt::AlignCenter);
    mainLayout->addWidget(cumControl, 4, 9, 3, 3, Qt::AlignCenter);

    CBw->setChecked(false);

    mainLayout->addWidget(CBw, 6, 3, Qt::AlignCenter);
    mainLayout->addWidget(CBa, 7, 2, Qt::AlignCenter);
    mainLayout->addWidget(CBs, 7, 3, Qt::AlignCenter);
    mainLayout->addWidget(CBd, 7, 4, Qt::AlignCenter);

    mainLayout->addWidget(CBt, 6, 6, Qt::AlignCenter);
    mainLayout->addWidget(CBf, 7, 5, Qt::AlignCenter);
    mainLayout->addWidget(CBg, 7, 6, Qt::AlignCenter);
    mainLayout->addWidget(CBh, 7, 7, Qt::AlignCenter);

    mainLayout->addWidget(CBi, 6, 9, Qt::AlignCenter);
    mainLayout->addWidget(CBj, 7, 8, Qt::AlignCenter);
    mainLayout->addWidget(CBk, 7, 9, Qt::AlignCenter);
    mainLayout->addWidget(CBl, 7, 10, Qt::AlignCenter);

    setLayout(mainLayout);
}

void WnControl::keyPressEvent(QKeyEvent *pe)
{
    switch(pe->key())
    {
    case Qt::Key_W :
        CBw->setChecked(true);
        break;
    case Qt::Key_A :
        CBa->setChecked(true);
        break;
    case Qt::Key_S :
        CBs->setChecked(true);
        break;
    case Qt::Key_D :
        CBd->setChecked(true);
        break;
    case Qt::Key_T :
        CBt->setChecked(true);
        break;
    case Qt::Key_F :
        CBf->setChecked(true);
        break;
    case Qt::Key_G :
        CBg->setChecked(true);
        break;
    case Qt::Key_H :
        CBh->setChecked(true);
        break;
    case Qt::Key_I :
        CBi->setChecked(true);
        break;
    case Qt::Key_J :
        CBj->setChecked(true);
        break;
    case Qt::Key_K :
        CBk->setChecked(true);
        break;
    case Qt::Key_L :
        CBl->setChecked(true);
        break;
    }
}

void WnControl::keyReleaseEvent(QKeyEvent *pe)
{
    switch(pe->key())
    {
    case Qt::Key_W :
        CBw->setChecked(false);
        break;
    case Qt::Key_A :
        CBa->setChecked(false);
        break;
    case Qt::Key_S :
        CBs->setChecked(false);
        break;
    case Qt::Key_D :
        CBd->setChecked(false);
        break;
    case Qt::Key_T :
        CBt->setChecked(false);
        break;
    case Qt::Key_F :
        CBf->setChecked(false);
        break;
    case Qt::Key_G :
        CBg->setChecked(false);
        break;
    case Qt::Key_H :
        CBh->setChecked(false);
        break;
    case Qt::Key_I :
        CBi->setChecked(false);
        break;
    case Qt::Key_J :
        CBj->setChecked(false);
        break;
    case Qt::Key_K :
        CBk->setChecked(false);
        break;
    case Qt::Key_L :
        CBl->setChecked(false);
        break;
    }
}


WnAdmin::WnAdmin(QWidget* parent): QWidget(parent)
{
    setFixedSize(600, 600);
}


WnSetting::WnSetting(QWidget* parent) : QWidget(parent)
{
    setFixedSize(600, 600);
}

