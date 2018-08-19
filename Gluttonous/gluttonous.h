#ifndef GLUTTONOUS_H
#define GLUTTONOUS_H

#include <QtWidgets/QMainWindow>
#include<QTimer>
//#include "ui_gluttonous.h"

class Gluttonous : public QMainWindow
{
	Q_OBJECT

public:
	Gluttonous(QWidget *parent = 0);
	~Gluttonous();

	QWidget *centralWidget;
	QLabel *Score;
	QOpenGLWidget *openGLWidget;
	QLabel *Length;
	QLabel *LengthLabel;
	QLabel *ScoreLabel;
	QLabel *MessageLabel;
	QTimer *refresh;

private:
	//Ui::GluttonousClass ui;

	void setupUi(QMainWindow *MainWindow);
	void retranslateUi(QMainWindow *MainWindow);

public slots:

	void PrintScore(int);
	void PrintLength(int);
	void ResetGame(void);
	void RestartGame(void);
	void GameResume(void);
	void GamePause(void);
	void Win(void);
};

#endif // GLUTTONOUS_H
