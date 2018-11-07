#include "playermainwin.h"
#include "ui_playermainwin.h"

PlayerMainWin::PlayerMainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PlayerMainWin)
{
    ui->setupUi(this);
}

PlayerMainWin::~PlayerMainWin()
{
    delete ui;
}
