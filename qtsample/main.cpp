#include "qtsample.h"

int main(int argc, char *argv[])
{

	QTMainForm* pMainForm = 0;

	QApplication app(argc, argv);

	pMainForm = new QTMainForm();
	pMainForm->show();
	
	return app.exec();
}
