#ifndef PLAYERMAINWIN_H
#define PLAYERMAINWIN_H

#include <QMainWindow>
#include <QUrl>
#include <QVideoWidget>
#include <QMediaPlayer>
#include <QListWidget>

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
    QVideoWidget *videoWidget;
    QUrl *url;
    QMediaPlayer * mediaPlayer;
    QListWidget * channelList;

private slots:
    void playUrl();
    void choseChannel();
    void fullScreen();

};

#endif // PLAYERMAINWIN_H
