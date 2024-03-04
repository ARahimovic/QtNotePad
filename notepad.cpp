#include "notepad.h"
#include "./ui_notepad.h"

NotePad::NotePad(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NotePad)
{
    ui->setupUi(this);
}

NotePad::~NotePad()
{
    delete ui;
}

//File Options
void NotePad::on_actionOpen_triggered()
{

}

void NotePad::on_actionNew_triggered()
{

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

