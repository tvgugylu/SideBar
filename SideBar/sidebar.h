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

	/**功能:	初始化侧边栏，建议在主窗口构造函数最后一步调用，避免因窗口未显示造成位置判断失误
	**参数:	target:		绑定侧边栏的窗口自身
			direction:	窗口初始方位
			showText:	窗口显示时侧边栏需显示文字
			hideText:	窗口隐藏时侧边栏需显示文字
	**返回:	无
	**/
	void initSideBar(QWidget* target,EnDirection direction,const QString& showText,const QString& hideText);

	/**功能:	判断窗口是否被侧边栏隐藏
	**参数:	无
	**返回:	bool:		窗口是否被侧边栏隐藏
	**/
	bool isHideBySideBar();

	/**功能:	设置窗口通过侧边栏隐藏
	**参数:	bool:		隐藏或显示
	**返回:	无
	**/
	void setHideBySideBar(bool hidden);

	/**功能:动画完成槽函数，注意如需接收动画完成信号，需在定义本虚方法为槽函数并实现
	**参数:	无
	**返回:	无
	**/
	virtual void onAnimationFinished();

private:
	ShowCtrlMgr* m_showCtrlMgr;
};
