#pragma once

#include "sidebar_global.h"

#include <QWidget>
#include "SideBarEnum.h"

class ShowCtrlMgr;

class SIDEBAR_EXPORT SideBar
{
public:
	SideBar(QObject* target);
	~SideBar();

	/**����:	��ʼ��������������������ڹ��캯�����һ�����ã������򴰿�δ��ʾ���λ���ж�ʧ��
	**����:	target:		�󶨲�����Ĵ�������
			direction:	���ڳ�ʼ��λ
			showText:	������ʾʱ���������ʾ����
			hideText:	��������ʱ���������ʾ����
	**����:	��
	**/
	void initSideBar(QWidget* target,EnDirection direction,const QString& showText,const QString& hideText);

	/**����:	�жϴ����Ƿ񱻲��������
	**����:	��
	**����:	bool:		�����Ƿ񱻲��������
	**/
	bool isHideBySideBar();

	/**����:	���ô���ͨ�����������
	**����:	bool:		���ػ���ʾ
	**����:	��
	**/
	void setHideBySideBar(bool hidden);

	/**����:������ɲۺ�����ע��������ն�������źţ����ڶ��屾�鷽��Ϊ�ۺ�����ʵ��
	**����:	��
	**����:	��
	**/
	virtual void onAnimationFinished();

private:
	ShowCtrlMgr* m_showCtrlMgr;
};
