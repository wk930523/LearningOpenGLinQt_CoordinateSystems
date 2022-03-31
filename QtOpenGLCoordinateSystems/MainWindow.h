#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include "CoordinateSystemsMultipleWidget.h"

#include <Qlabel>
#include <QPushButton>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget* parent = Q_NULLPTR);
	void onButtonClick();

private:
	Ui::MainWindowClass ui;
	QLabel* lab;
	QPushButton* button;
	CoordinateSystemsMultipleWidget* widget;
};
