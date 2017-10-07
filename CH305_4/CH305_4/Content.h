#pragma once

#include <QtWidgets/QDialog>
#include "ui_Content.h"

class Content : public QDialog
{
    Q_OBJECT

public:
    Content(QWidget *parent = Q_NULLPTR);

private:
    Ui::ContentClass ui;
};
