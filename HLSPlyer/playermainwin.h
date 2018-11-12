#ifndef PLAYERMAINWIN_H
#define PLAYERMAINWIN_H

#ifndef INT64_C
#define INT64_C
#define UINT64_C
#endif

#include <QMainWindow>
#include <QUrl>
#include <QVideoWidget>
#include <QMediaPlayer>
#include <QListWidget>

extern "C"
{
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavfilter/avfilter.h>
#include <libswscale/swscale.h>
#include <libavutil/frame.h>
}

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
    QMediaPlayer * mediaPlayer;
    QListWidget * channelList;
    QString m_url;

private slots:
    void setUrl();
    void playUrl();
    void choseChannel();
    void fullScreen();

};

#endif // PLAYERMAINWIN_H
