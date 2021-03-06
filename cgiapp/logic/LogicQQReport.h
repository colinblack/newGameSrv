#ifndef __LOGIC_QQ_REPORT_H__
#define __LOGIC_QQ_REPORT_H__

#include "LogicInc.h"

enum QQPT
{
	QQPT_none = 0,
	QQPT_qzone = 1,
	QQPT_pengyou = 2,
	QQPT_weibo = 3,
	QQPT_qqgame = 10,
	QQPT_3366 = 11,
	QQPT_union = 17,
};

enum QQREPORT
{
	QQREPORT_login = 0,
	QQREPORT_register = 1,
	QQREPORT_accept = 2,
	QQREPORT_invite = 3,
	QQREPORT_consume = 4,
	QQREPORT_logout = 8,
	QQREPORT_role_login = 10,
	QQREPORT_role_create = 11,
	QQREPORT_role_logout = 12,
	QQREPORT_max,
};

class CLogicQQReport
{
public:
	CLogicQQReport();
	~CLogicQQReport(){}
	int Report(unsigned report, string openid, unsigned uid=0, unsigned fee=0, string userip="", string pf="", string zoneid="", string pid="");
	int ReportEx(unsigned report, string openid, unsigned uid=0, string userip="", string pf="", string zoneid="");
	int UnionReport(string openid, unsigned uid=0, string userip="", string pf="", string zoneid="");
	QQPT GetQQPT(string pt);
	int SetFeed(const string &openid, const string &openkey, const string &pf, const string &imgurl, const string &text);
	int SetAchievement(const string &openid, const string &openkey, const string &pf,string level, string zoneid);

private:
	static unsigned m_ip;
};

#endif
