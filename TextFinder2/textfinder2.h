#ifndef TEXTFINDER2_H
#define TEXTFINDER2_H

#include <QWidget>

namespace Ui {
class Textfinder2;
}

class Textfinder2 : public QWidget
{
    Q_OBJECT

public:
    explicit Textfinder2(QWidget *parent = 0);
    ~Textfinder2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Textfinder2 *ui;
    void loadTextFile();
};

#endif // TEXTFINDER2_H
