#include <QtWidgets>
#include "Scheduler.hpp"

Scheduler::Scheduler(QWidget *parent) : QWidget(parent)
{
    QPushButton *button1 = new QPushButton("1");
    QPushButton *button2 = new QPushButton("2");

    QHBoxLayout *hBoxLayout = new QHBoxLayout;

    hBoxLayout->addWidget(button1, 0);
    hBoxLayout->addWidget(button2, 1);

    QGridLayout *gridLayout = new QGridLayout;
    gridLayout->addLayout(hBoxLayout, 0, 0);

    setLayout(gridLayout);
    setWindowTitle(tr("Scheduler"));
}
