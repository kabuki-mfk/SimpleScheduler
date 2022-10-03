#include <QtWidgets>
#include "Scheduler.hpp"

Scheduler::Scheduler(QWidget *parent) : QWidget(parent)
{
    QHBoxLayout *hBoxLayout = new QHBoxLayout;

    QPushButton *button1 = new QPushButton(tr("1"));

    hBoxLayout->addWidget(button1, 0);

    QGridLayout *mainLayout = new QGridLayout(this);
    mainLayout->addLayout(hBoxLayout,0,0);

    setWindowTitle(tr("Scheduler"));
}
