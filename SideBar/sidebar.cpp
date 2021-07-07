#include "sidebar.h"

#include "showctrlmgr.h"

SideBar::SideBar(QObject* target)
{
	m_showCtrlMgr = new ShowCtrlMgr(target);
}

SideBar::~SideBar()
{

}

void SideBar::initSideBar(QWidget* target, EnDirection direction, 
	const QString& showText, const QString& hideText)
{
	m_showCtrlMgr->setTexts(showText, hideText);
	m_showCtrlMgr->init(target, direction);
}

bool SideBar::isHideBySideBar()
{
	return !(m_showCtrlMgr->isShow());
}

void SideBar::setHideBySideBar(bool hidden)
{
	m_showCtrlMgr->toShow(!hidden);
}

void SideBar::onAnimationFinished()
{

}
