#include "textfinder2.h"
#include "ui_textfinder2.h"
#include <QFile>
#include <QTextStream>
#include <QTextCursor>

Textfinder2::Textfinder2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Textfinder2)
{
    ui->setupUi(this);
    loadTextFile();
}

Textfinder2::~Textfinder2()
{
    delete ui;
}

void Textfinder2::on_pushButton_clicked()
{
    QString searchString=ui->lineEdit->text();
    ui->textEdit->find(searchString,QTextDocument::FindWholeWords);
}

void Textfinder2::loadTextFile()
{
    QFile inputFile(":/input.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line=in.readLine();
    inputFile.close();

    ui->textEdit->setPlainText(line);
    QTextCursor Qcursor=ui->textEdit->textCursor();
    Qcursor.movePosition(QTextCursor::Start,QTextCursor::MoveAnchor,1);

}
