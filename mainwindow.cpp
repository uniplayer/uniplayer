#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->setupUi(this);
        QNetworkProxyFactory::setUseSystemConfiguration (true);
        QWebSettings::globalSettings()->setAttribute(QWebSettings::PluginsEnabled, true);
        QWebSettings::globalSettings()->setAttribute(QWebSettings::AutoLoadImages, true);
        ui->webView->load(QUrl("http://www.youtube.com/watch?v=3aR27FLbb04"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    web.exec();
}
