#ifndef WINDOW_H
#define WINDOW_H

#include <QDebug>
#include <QString>
#include <QWidget>
#include <QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QSpinBox>
#include <QComboBox>
#include <QLineEdit>
#include <QFile>
#include <QTextStream>
#include <fstream>

class Window : public QWidget
{
    Q_OBJECT

private:
    QLineEdit *firstxbound;


public:
    Window();
    ~Window();

private slots:
    /*
    void WriteFile()
    {
        std::ofstream GuiText("GUI.txt");

    }*/


    void WriteFile()
    {
        QFile GUItext("GUI.txt");
        if (!GUItext.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            qDebug() << "Could not open GUI.txt\n";
            return;
        }


        //QApplication::processEvents();

        QString xbounds1 = firstxbound->displayText();
        QTextStream out(&GUItext);

        out << xbounds1;
        //out << "test\n";
    }

};

#endif // WINDOW_H
