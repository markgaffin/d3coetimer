#ifndef D3COETIMER_H
#define D3COETIMER_H

#include <QtWidgets/QMainWindow>
#include "ui_d3coetimer.h"

class d3coetimer : public QMainWindow
{
	Q_OBJECT

public:
	d3coetimer(QWidget *parent = 0);
	~d3coetimer();

private:
	Ui::d3coetimerClass ui;
};

#endif // D3COETIMER_H
