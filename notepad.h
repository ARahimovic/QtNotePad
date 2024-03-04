#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>
#include <QPrinter>
#include <QPrintDialog>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>


QT_BEGIN_NAMESPACE
namespace Ui {
class NotePad;
}
QT_END_NAMESPACE

class NotePad : public QMainWindow
{
    Q_OBJECT

public:
    NotePad(QWidget *parent = nullptr);
    ~NotePad();

private slots:
    void on_actionSave_As_triggered();

    void on_actionCopy_triggered();

    void on_actionPrint_triggered();

    void on_actionExit_triggered();

    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

private:
    Ui::NotePad *ui;
};
#endif // NOTEPAD_H
