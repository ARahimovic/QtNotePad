#include "notepad.h"
#include "./ui_notepad.h"

NotePad::NotePad(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NotePad),currentFile(QString())
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

NotePad::~NotePad()
{
    delete ui;
}

//File Options
void NotePad::on_actionNew_triggered()
{
    //create a warning message box
    QMessageBox newFileMessage;
    newFileMessage.setText("Creating a new File");
    newFileMessage.setInformativeText("Save Current File ?");
    newFileMessage.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    newFileMessage.setDefaultButton(QMessageBox::Save);
    int ret = newFileMessage.exec();

    switch (ret) {
    case QMessageBox::Save:
        qInfo()<<"Saved file";
        break;
    case QMessageBox::Discard:
        qInfo() << "Creating NewFile";
        ui->textEdit->clear();
        ui->textEdit->setText(QString());
        break;
    case QMessageBox::Cancel:
            qInfo() << "Closing Message Box";
            newFileMessage.close();
        break;
    default:
        break;
    }

}

void NotePad::on_actionOpen_triggered()
{
    //Get File name
    QString fileName = QFileDialog::getOpenFileName(this, "Open File");
    currentFile = fileName;
    //Create a QFile object
    QFile openedFile(fileName);
    if(!openedFile.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Warning", "Error in Opening File "+ openedFile.errorString());
        return;
    }
    setWindowTitle(currentFile);
    QTextStream openedFileStream(&openedFile);
    QString textInFile = openedFileStream.readAll();

    ui->textEdit->setText(textInFile);
    openedFile.close();
}

void NotePad::on_actionSave_As_triggered()
{

}

void NotePad::on_actionPrint_triggered()
{

}

void NotePad::on_actionExit_triggered()
{

}

// Edit options
void NotePad::on_actionCopy_triggered()
{

}




void NotePad::on_actionPaste_triggered()
{

}


void NotePad::on_actionCut_triggered()
{

}


void NotePad::on_actionUndo_triggered()
{

}


void NotePad::on_actionRedo_triggered()
{

}

