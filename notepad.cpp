#include <QApplication>
#include <QTextEdit>
#include <QtGui>
int main(int argv, char **args)
{
  //new makes a pointer to a memory space
  QApplication app(argv, args);
  QTextEdit *textEdit = new QTextEdit;
  QPushButton *quitButton = new QPushButton("&Quit");

  QObject::connect(quitButton,SIGNAL(clicked()),qApp,SLOT(quit()));

  QVBoxLayout *layout = new QVBoxLayout;
  layout->addWidget(textEdit);
  layout->addWidget(quitButton);

  QWidget window;
  window.setLayout(layout);

  window.show();

  return app.exec();
}
