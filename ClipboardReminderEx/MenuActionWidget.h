#pragma once
#include <QWidget>

class QLabel;
class QPushButton;

/*!
 * \class NumMenuActionWidget
 *
 * \brief A widget bound to the tray menu, it contains a int val limits in [minVal, maxVal].
 *			which can be change by two buttons
 *
 * \author HowsonLiu
 * \date October 2019
 */
class NumMenuActionWidget : public QWidget
{
	Q_OBJECT
public:
	NumMenuActionWidget(const QString& describeText, int defaultVal, int minVal, int maxVal, QWidget* parent = nullptr);

private:
	void initWindow();

signals:
	void sigNumChange(int);

private slots:
	void onPlusButtonClick();
	void onMinusButtonClick();

private:
	int m_minVal;
	int m_maxVal;
	int m_curVal;
	QString m_describeText;

	QLabel* m_describeTextLabel;
	QLabel* m_numLabel;
	QPushButton* m_plusButton;
	QPushButton* m_minusButton;
};

