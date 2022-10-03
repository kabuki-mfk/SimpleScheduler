#pragma once

#include <QWidget>

#include <vector>
#include <string>

QT_BEGIN_NAMESPACE
class QLineEdit;
class QTextEdit;
QT_END_NAMESPACE

struct item
{
    std::string task, detail;
};

class Scheduler : public QWidget
{
    Q_OBJECT

public:
    Scheduler(QWidget *parent = nullptr);

private:
    QLineEdit *nameLine;
    QTextEdit *addressText;
    std::vector<item> vec_item;
};
