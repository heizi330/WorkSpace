#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Content.h"

class Content : public QMainWindow
{
    Q_OBJECT

public:
    Content(QWidget *parent = Q_NULLPTR);

private:
    Ui::ContentClass ui;
};
