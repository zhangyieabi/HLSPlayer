#include "playermainwin.h"
#include "ui_playermainwin.h"
#include <QHBoxLayout>
PlayerMainWin::PlayerMainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PlayerMainWin)
{

    ui->setupUi(this);
    QWidget *widget = new QWidget;
    this->setCentralWidget(widget);
    this->setWindowTitle("HLSPlayer");
    mediaPlayer = new QMediaPlayer();
    videoWidget = new QVideoWidget(widget);
    mediaPlayer->setVideoOutput(videoWidget);

    channelList = new QListWidget();
    channelList->addItem("CCTV-1");
    channelList->addItem("CCTV-2");
    channelList->addItem("CCTV-3");
    channelList->addItem("CCTV-4");
    channelList->addItem("CCTV-5");
    channelList->setMinimumWidth(80);
    channelList->setMaximumWidth(80);
    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addWidget(videoWidget);
    mainLayout->addWidget(channelList);
    widget->setLayout(mainLayout);
    QObject::connect(channelList,SIGNAL(itemSelectionChanged()),this,SLOT(setUrl()));
}

void PlayerMainWin::playUrl()
{
    mediaPlayer->setMedia(QMediaContent(QUrl("http://183.251.61.207/PLTV/88888888/224/3221225820/index.m3u8")));
    mediaPlayer->play();
    videoWidget->show();
}

void PlayerMainWin::setUrl()
{
    m_url = "http://183.251.61.207/PLTV/88888888/224/3221225820/index.m3u8";
    qDebug()<<m_url;
}
void PlayerMainWin::choseChannel()
{


}

void PlayerMainWin::fullScreen()
{


}
PlayerMainWin::~PlayerMainWin()
{
    delete ui;
}
