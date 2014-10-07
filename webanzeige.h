#ifndef WEBANZEIGE_H
#define WEBANZEIGE_H

#include <QDialog>

namespace Ui {
class webanzeige;
}

class webanzeige : public QDialog
{
    Q_OBJECT

public:
    explicit webanzeige(QWidget *parent = 0);
    ~webanzeige();

private:
    Ui::webanzeige *ui;
};

#endif // WEBANZEIGE_H
