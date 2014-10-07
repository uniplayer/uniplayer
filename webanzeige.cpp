#include "webanzeige.h"
#include "ui_webanzeige.h"

webanzeige::webanzeige(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::webanzeige)
{
    ui->setupUi(this);

//    QNetworkProxyFactory::setUseSystemConfiguration (true);
//       QWebSettings::globalSettings()->setAttribute(QWebSettings::PluginsEnabled, true);
//       QWebSettings::globalSettings()->setAttribute(QWebSettings::AutoLoadImages, true);
//       ui->webView->load(QUrl("http://www.google.de"));

}

webanzeige::~webanzeige()
{
    delete ui;
}
