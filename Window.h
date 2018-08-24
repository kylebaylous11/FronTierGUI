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
#include <QTextBrowser>
#include <fstream>

class Window : public QWidget
{
    Q_OBJECT

private:
    QLineEdit *firstxbound;
    QLineEdit *lastxbound;
    QLineEdit *firstybound;
    QLineEdit *lastybound;
    QLineEdit *firstcoordinate;
    QLineEdit *lastcoordinate;
    QComboBox *zerolower;
    QComboBox *zeroupper;
    QComboBox *onelower;
    QComboBox *oneupper;
    QLineEdit *line1;
    QLineEdit *line2;
    QLineEdit *line3;
    QLineEdit *line4;
    QLineEdit *line5;
    QLineEdit *line6;
    QComboBox *probtype;
    QComboBox *projectiontype;


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
        QFile GUItext("/Users/Kyle/FronTierGUI/FronTierGUI/GUI.txt");
        if (!GUItext.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            qDebug() << "Could not open GUI.txt\n";
            return;
        }

        QString xbounds1 = firstxbound->displayText();

        QString xbounds2 = lastxbound->displayText();

        QString ybounds1 = firstybound->displayText();

        QString ybounds2 = lastybound->displayText();

        QString coordinate1 = firstcoordinate->displayText();

        QString coordinate2 = lastcoordinate->displayText();

        QString lowerboundary0 = zerolower->currentText();

        QString upperboundary0 = zeroupper->currentText();

        QString lowerboundary1 = onelower->currentText();

        QString upperboundary1 = oneupper->currentText();

        QString max_time = line1->displayText();

        QString max_step = line2->displayText();

        QString print_interval = line3->displayText();

        QString movie_frame = line4->displayText();

        QString CFL_factor = line5->displayText();

        QString red_int = line6->displayText();

        QString problem_type = probtype->currentText();

        QString projection_type = projectiontype->currentText();



        //Output all
        QTextStream out(&GUItext);

        out << "Domain limit in 0-th Dimension: " << xbounds1 << " " << xbounds2 << "\n";

        out << "Domain limit in 1-th Dimension: " << ybounds1 << " " << ybounds2 << "\n";

        out << "Computational Grid: " << coordinate1 << " " << coordinate2 << "\n";

        out << "Lower boundary in 0-th dimension: " << lowerboundary0 << "\n";

        out << "Upper boundary in 0-th dimension: " << upperboundary0 << "\n";

        out << "Lower boundary in 1-th dimension: " << lowerboundary1 << "\n";

        out << "Upper boundary in 1-th dimension: " << upperboundary1 << "\n";

        out << "\n";

        out << "Max time: " << max_time << "\n";

        out << "Max step: " << max_step << "\n";

        out << "Print interval: " << print_interval << "\n";

        out << "Movie frame interval: " << movie_frame << "\n";

        out << "CFL factor: " << CFL_factor << "\n";

        out << "Redistribution interval: " << red_int << "\n";

        out << "\n";

        out << "Problem type: " << problem_type << "\n";

        out << "Projection type: " << projection_type << "\n";





        //Tried to open the file on the spot vut doesnt format well
        /*QTextBrowser *inputfile = new QTextBrowser;
            inputfile->setText(GUItext.readAll());
            inputfile->show();*/



    }

};

#endif // WINDOW_H
