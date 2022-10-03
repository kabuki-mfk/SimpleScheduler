#pragma once

#include <QWidget>



QT_BEGIN_NAMESPACE
class QLineEdit;
class QTextEdit;
QT_END_NAMESPACE

class Scheduler : public QWidget
{
    Q_OBJECT

public:
    Scheduler(QWidget *parent = nullptr);

private:
    QLineEdit *nameLine;
    QTextEdit *addressText;
};
