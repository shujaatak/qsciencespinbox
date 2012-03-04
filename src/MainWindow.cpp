#include "MainWindow.h"


MainWindow::MainWindow( QWidget* parent /*= 0*/, Qt::WFlags flags /*= 0*/ ) : QMainWindow(parent, flags)
{
    setupUi(this);
    connect(doubleSpinBox, SIGNAL(valueChanged(double)), this,  SLOT(on_pushButton_clicked()));
}


MainWindow::~MainWindow()
{
}



void MainWindow::on_pushButton_clicked(bool checked)
{
    QString str = QString::number( doubleSpinBox->value(), 'f', 1000);
    textEdit->setPlainText(str);
    QString str2 = QString::number( doubleSpinBox->value(), 'e', doubleSpinBox->decimals());
    lineEditValue->setText(str2);
}
void MainWindow::on_pushButtonSet_clicked(bool checked)
{
    doubleSpinBox->setValue( lineEdit->text().toDouble() );
}
