#include "MainWindow.h"

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->widget = new CoordinateSystemsMultipleWidget(this);
	this->widget->setGeometry(this->geometry());
	this->lab = new QLabel("Hello,World!", this);
	this->lab->setGeometry(10, 20, 100, 20);
	this->button = new QPushButton("test", this);
	this->button->setGeometry(10, 40, 100, 20);
	QObject::connect(this->button, &QPushButton::clicked, this, &MainWindow::onButtonClick);
}

void MainWindow::onButtonClick()
{
	static int i = 0;
	this->lab->setText(QString::number(i++));
}