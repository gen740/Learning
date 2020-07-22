#include <QApplication>
#include <QHBoxLayout>
#include <QPushButton>
#include <QVBoxLayout>


int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QWidget* window = new QWidget;
    QPushButton* button = new QPushButton("Hello Qt!");
    QPushButton* button2 = new QPushButton("Good Bye");
    QPushButton* button3 = new QPushButton("Good Morning");
    QPushButton* button4 = new QPushButton("Good Evening");

    QVBoxLayout* mainLayout = new QVBoxLayout;
    QHBoxLayout* layoutA = new QHBoxLayout;
    QVBoxLayout* layoutB = new QVBoxLayout;

    layoutA->addWidget(button);
    layoutA->addWidget(button2);
    layoutB->addWidget(button3);
    layoutB->addWidget(button4);

    mainLayout->addLayout(layoutA);
    mainLayout->addLayout(layoutB);

    window->setLayout(mainLayout);
    window->show();

    return app.exec();
}
