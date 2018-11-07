#ifndef PLAYERMAINWIN_H
#define PLAYERMAINWIN_H

#include <QMainWindow>

namespace Ui {
class PlayerMainWin;
}

class PlayerMainWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlayerMainWin(QWidget *parent = 0);
    ~PlayerMainWin();

private:
    Ui::PlayerMainWin *ui;
};

#endif // PLAYERMAINWIN_H
